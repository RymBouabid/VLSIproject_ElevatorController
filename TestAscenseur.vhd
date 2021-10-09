LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY TesAscenseur IS
END TesAscenseur;
 
ARCHITECTURE behavior OF TesAscenseur IS 
	
    COMPONENT Ascenseur
    PORT(
         reset : IN  std_logic;
         CLK : IN  std_logic;
         APPEL : IN  std_logic_vector (3 downto 0); -- bouton d'appel de l'ascenseur d'une personne à l'étage i
			BE: IN  std_logic_vector (3 downto 0); -- choix de l'étage à l'interieur de l'ascenseur
			C: IN  std_logic_vector (3 downto 0); -- capteur de l'ascenseur
         DET : IN  std_logic;
			P : OUT  std_logic;
         MH : OUT  std_logic;
         MB : OUT  std_logic;
         a : IN  std_logic;
         stopalarme : IN  std_logic;
         ALARME : OUT  std_logic );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '1';
   signal CLK : std_logic := '0';
	signal APPEL : std_logic_vector (3 downto 0):= "0000";
   signal BE : std_logic_vector (3 downto 0):= "0000";
	signal C : std_logic_vector (3 downto 0):= "0001"; --capteur etage 0 activé c(0)='1'
   signal DET : std_logic := '0';
   signal a : std_logic := '0';
   signal stopalarme : std_logic := '0';

 	--Outputs
   signal P : std_logic;
   signal MH : std_logic;
   signal MB : std_logic;
   signal ALARME : std_logic ;

   -- Clock period definitions
   constant CLK_period : time := 1000ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Ascenseur PORT MAP (
          reset => reset,
          CLK => CLK,
			 APPEL => APPEL,
			 BE => BE,
			 C => C,
          DET => DET,
          P => P,
          MH => MH,
          MB => MB,
          a => a,
          stopalarme => stopalarme,
          ALARME => ALARME
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
	
----re-initialiser
--	wait for 100 ms ;
--	reset<='0';
--	reset<='1' after 50 ms;


--Scenario 1 : __________________________________________	

-- demande d'appel de l'etage 3
   wait for 20 ms;	
	APPEL <="1000";

-- l'ascenseur a quitté l'étage 0 donc C(0) devient nulle
   wait for 20 ms;	
	C <="0000";
-- l'ascenseur est arrivé à l'etage 1
	wait for 50 ms;	
	C <="0010";
	wait for 1000 ns;
	C <="0000";
	
-- l'ascenseur est arrivé à l'etage 2
	wait for 50 ms;	
	C <="0100";
	wait for 1000 ns;
	C <="0000";
	
-- l'ascenseur est arrivé à l'etage 3
   wait for 50 ms;	
	C <="1000";
	
--mission accomplie donc desactivation de appel(3)
   wait for 50 ms;
	APPEL(3)<='0'; 
	
--Scenario 2 : __________________________________________	
-- APPEL DE l'etage 2 et 1 	
	wait for 100 ms;
	appel(2)<='1';
	appel(1)<='1';
	
	-- l'ascenseur a quitté l'étage 3 donc C(3) devient nulle
	wait for 10 ms;
	C <="0000";
	
	wait for 90 ms;
	C <="0100"; 
	
	--une personne entre ( le détecteur de présence (capteur) det passe à '1' 
	wait for 2 ms ;
	det<='1';
	
	-- la personne n'est plus devant le detecteur donc det revient à '0'
	wait for 2 ms ;
	det<='0';
	
	-- demande de l'étage 0 par la personne dans l'ascenseur
	wait for 5 ms;
	BE(0) <= '1'; 
	
--mission accomplie donc desactivation de appel(2)
	wait for 10 ms;
	appel(2)<='0';
	
	-- l'ascenseur a quitté l'étage 2 donc C(2) devient nulle
	wait for 35 ms;
	C <="0000";
	
-- l'ascenseur est arrivé à l'etage 1
	wait for 100 ms;	
	C<="0010";
	
--mission accomplie donc desactivation de APPEL(1)
	wait for 50 ms;
	appel(1)<='0';
	
	-- l'ascenseur a quitté l'étage 1 donc C(1) devient nulle
	wait for 3000 ns;
	C <="0000";
	
	
-- l'ascenseur est arrivé à l'etage 0
	wait for 100ms;
	C <="0001";
	
	wait for 2000 ns;
	BE(0)<='0';
	
	--les personnes sortent de l'ascenseur
	wait for 2 ms ;
	det<='1';
	
	wait for 5 ms ;
	det<='0';
	
--Scenario 3 : __________________________________________	
	wait for 300 ms;
	appel(2)<='1';
	appel(1)<='1';
	
	-- l'ascenseur a quitté l'étage 0 donc C(0) devient nulle
   wait for 1000 ns;
	C <="0000";
	
	wait for 100 ms;
	C <="0010";  -- arrivée à l'étage1
	
	--une personne entre ( le détecteur de présence (capteur) det passe à '1' 
	wait for 2 ms ;
	det<='1';
	
	-- la personne n'est plus devant le detecteur donc det revient à '0'
	wait for 2 ms ;
	det<='0';
	
	wait for 10 ms;--choix de l'etage 0 par la personne 
	BE(0) <= '1';
	
	wait for 40 ms;--mission accomplie donc desactivation de appel(1)
	appel(1)<='0';
	
	-- l'ascenseur a quitté l'étage 1 donc C(1) devient nulle
  -- wait for 2000 ns;
	C <="0000";
	
	wait for 100 ms;
	C <="0100";  -- arrivée à l'étage2
	
	wait for 50 ms;--mission accomplie donc desactivation de appel(2)
	appel(2)<='0';
	
	-- l'ascenseur a quitté l'étage 2 donc C(2) devient nulle
   wait for 2000 ns;
	C <="0000";
	
	wait for 100 ms;
	C <="0010";  -- arrivée à l'étage1
	
	wait for 1000 ns;
	C <="0000";-- l'ascenseur a quitté l'étage 1 donc C(1) devient nulle
	
	-- quelqu'un appuie sur le bouton poussoir (a) simulant l'alarme
	wait for 50 ms ;
	a<= '1' ; 
	wait for 2000 ns;
	a<= '0' ; 
	
	wait for 50 ms;
	C <="0001";  -- arrivée à l'étage0
	stopalarme<='1';
	
	wait for 2000 ns;
	stopalarme<= '0' ; 
	
	wait for 2 ms ;
	BE(0)<= '0';--mission accomplie donc desactivation de BE(0)
	det<='1'; --les personnes sortent de l'ascenseur
	
	wait for 5 ms ;
	det<='0'; -- les personnes ne sont plus devant le detecteur donc det revient à '0'
	
	
	
wait for CLK_period*10;
wait;
end process;
END;
   