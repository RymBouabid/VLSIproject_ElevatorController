library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Ascenseur is
	-- generic (clockFrequencyHZ : integer );  ---a revoir 
    Port ( reset : in  STD_LOGIC   ;
           CLK : in  STD_LOGIC     ;
			  APPEL : IN  std_logic_vector (3 downto 0); -- bouton d'appel de l'ascenseur d'une personne à l'étage i
			  BE: IN  std_logic_vector (3 downto 0); -- choix de l'étage à l'interieur de l'ascenseur
			  C: IN  std_logic_vector (3 downto 0); -- capteur de l'ascenseur
           DET : in  STD_LOGIC     ;
           P : out  STD_LOGIC      ;
           MH : out  STD_LOGIC     ;
           MB : out  STD_LOGIC     ;
			  a, stopalarme : in  STD_LOGIC  ;
			  ALARME : out  STD_LOGIC );
end Ascenseur;

architecture Behavioral of Ascenseur is

constant clockFrequencyHZ : integer:=50;
type Etat is (Etat0 ,Etat1 ,Etat2 ,Etat3 ,Etat4_PorteOuverte,Etat5_MonteeAscenseur,Etat6_DescenteAscenseur); 
signal Etati : Etat := Etat0; -- état de repos de l'ascenseur à l'étage 0 et portes fermées
signal counter : integer range 0 to clockFrequencyHZ*1000; --50ms
signal h : STD_LOGIC := '0';
signal d : STD_LOGIC := '0' ;
begin 

process(CLK, reset) is
variable n: integer :=0 ;
begin
 if (reset = '0') then
	etati <= Etat0;
	MH <= '0' ; MB <= '0' ; P<='0'; h<='0'; d<='0';
	ALARME<= '0';
	counter <= 0;  --- a revoir 
 elsif (rising_edge(CLK)) then
	case etati is
		when Etat0 =>
			-- appel de l'étage 0 à partir de l'étage 0 
			if ( APPEL(0)='1' or BE(0)= '1' ) then
				counter <= 0;
				etati <= Etat4_PorteOuverte;
			
			-- appel d'un etage supérieur 
			elsif ( ( APPEL(1)='1' or APPEL(2)='1' or APPEL(3)='1' ) or ( BE(1)='1' or BE(2)='1' or BE(3)='1' ) ) then
			etati <= Etat5_MonteeAscenseur;			
			end if;
		
		when Etat1 =>
			-- appel de l'étage 1 à partir de l'étage 1  
			if ( APPEL(1)='1' or BE(1)= '1' ) then 
				counter <= 0;
				etati <= Etat4_PorteOuverte; 
			
			elsif ( BE(2)='1' or BE(3)='1' ) and h='1' then etati <= Etat5_MonteeAscenseur; 
			
			elsif (BE(0)= '1' and d='1') then  etati <= Etat6_DescenteAscenseur ;
			
			elsif ( BE(2)='1' or BE(3)='1' ) and APPEL="0010" then etati <= Etat5_MonteeAscenseur; 
			
			elsif (BE(0)= '1' and APPEL="0010" ) then  etati <= Etat6_DescenteAscenseur ;
			
			-- appel d'un etage supérieur 
			elsif (( APPEL(2)='1' or APPEL(3)='1' )or ( BE(2)='1' or BE(3)='1' ) )   then etati <= Etat5_MonteeAscenseur; 
			
			-- appel d'un etage inférieur
			elsif (  (APPEL(0)='1') or BE(0)= '1' ) then  etati <= Etat6_DescenteAscenseur ;
			end if;
			
			
		when Etat2 =>
			-- appel de l'étage 2 à partir de l'étage 2 
			if ( APPEL(2)='1' or BE(2)= '1' ) then
			counter <= 0;
			etati <= Etat4_PorteOuverte; 
			
			elsif ( ( BE(3)='1' ) and h='1') then etati <= Etat5_MonteeAscenseur; 
			
			elsif ( ( BE(0)= '1' or BE(1)='1' ) and d='1' ) then  etati <= Etat6_DescenteAscenseur ;
			
			elsif ( ( BE(3)='1' )and APPEL="0100" ) then etati <= Etat5_MonteeAscenseur; 
			
			elsif ( ( BE(0)= '1' or BE(1)='1' ) and APPEL="0100" ) then  etati <= Etat6_DescenteAscenseur ;
			
			-- appel d'un etage supérieur 
			elsif ( APPEL(3)='1' or ( BE(3)='1' ) )  then etati <= Etat5_MonteeAscenseur; 
			
			-- appel d'un etage inférieur
			elsif ( APPEL(0)='1' or APPEL(1)='1' or ( BE(0)= '1' or BE(1)='1' ) )  then  etati <= Etat6_DescenteAscenseur ;
			
			end if;
			
		when Etat3 =>
			-- appel de l'étage 3 à partir de l'étage 3  
			if ( APPEL(3)='1' or BE(3)= '1' ) then 
			counter <= 0;
			etati <= Etat4_PorteOuverte; 
			
			-- appel d'un etage inférieur
			elsif ( ( APPEL(0)='1' or APPEL(1)='1' or APPEL(2)='1' ) or ( BE(0)='1' or BE(1)='1' or BE(2)='1' ) ) then  etati <= Etat6_DescenteAscenseur ;
			
			end if;
		
		when Etat4_PorteOuverte =>
			counter <= counter + 1;
			
			if ( ( BE(0)='1' AND C(0)='1' ) or ( BE(1)='1' AND C(1)='1') or( BE(2)='1' AND C(2)='1' ) or ( BE(3)='1' AND C(3)='1'))then
			counter<=0;
			etati <= Etat4_PorteOuverte;
			
			elsif det = '1' then
			counter<=0 ;
			etati <= Etat4_PorteOuverte ;
			
			elsif ( (counter= clockFrequencyHZ*1000-1 ) and C(0)='1' ) then 
			etati <= Etat0 ;
			
			elsif ( (counter= clockFrequencyHZ*1000-1 ) and C(1)='1' ) then 
			etati <= Etat1 ;
			
			elsif ( (counter= clockFrequencyHZ*1000-1 ) and C(2)='1' ) then 
			etati <= Etat2 ;
			
			elsif ( (counter= clockFrequencyHZ*1000-1 ) and C(3)='1' ) then 
			etati <= Etat3;
			
			end if;
		
		when Etat5_MonteeAscenseur =>
			if ( C(1) = '1' ) then etati <= Etat1;
			elsif ( C(2) = '1' ) then etati <= Etat2;
			elsif ( C(3) = '1' ) then etati <= Etat3;
			end if;
		
		when Etat6_DescenteAscenseur =>
			if ( C(0) = '1' ) then etati <= Etat0;
			elsif ( C(1) = '1' ) then etati <= Etat1;
			elsif ( C(2) = '1' ) then etati <= Etat2;
			end if;
	end case; 
 
 end if; 
	

 case etati is
		when Etat0 =>
			MH <= '0' ; MB <= '0' ; P<='0';
		when Etat1 =>
			MH <= '0' ; MB <= '0' ; P<='0';		
		when Etat2 =>
			MH <= '0' ; MB <= '0' ; P<='0';
		when Etat3 =>
			MH <= '0' ; MB <= '0' ; P<='0';
		when Etat4_PorteOuverte =>
			MH <= '0' ; MB <= '0' ; P<='1'; 		
		when Etat5_MonteeAscenseur =>
			MH <= '1' ; MB <= '0' ; P<='0'; 
			h<='1'; d<='0';
		when Etat6_DescenteAscenseur =>
			MH <= '0' ; MB <= '1' ; P<='0'; 
			h<='0'; d<='1';
end case;
		
-- Fonctionnement de l'Alarme de secours :
	-- remarque : a est initialisé au test bench à '0'
	if ( a = '0')  AND ( n = 0 ) then alarme <= '0'; -- si le bouton poussoir (a), simulant l'alarme, n'est pas activé: l'alarme n'est pas activée 
	elsif a = '1' then	-- une fois (a) est activé:  
		alarme <= '1' ;	--	l'alarme s'active
		n:=1 ;
	end if;
	if stopalarme = '1' then 
		alarme <= '0';		-- si le bouton poussoir stopalarme s'active alors l'alarme est arrêtée 
		n:=0 ;
	end if;

end process;

end Behavioral;

