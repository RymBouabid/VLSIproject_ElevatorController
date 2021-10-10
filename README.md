# VLSIproject_ElevatorController

Design and Implementation of an Elevator controller in XILINX ISE using VHDL and Finite State Machine (FSM) model to achieve the logic in an optimized way.

Specifications :

The elevator system control works for an elevator which moves across 4 floors, it assigns the requests to appropriate lift based on real time situations. The lift is raised and lowered respectively by activating the MH and MB actuators.

Our lift has an alarm called "ALARM" initially at rest. It will be triggered when you press the button "A". The "stopalarm" button is responsible for stopping it.

If Initially the elevator is in an idle state on floor j: (j <i)

  Case 1:

        1. A user on floor j calls the elevator by pressing the call button APPEL[j]

        2. The elevator door opens and remains open for a period T: 

           If BE [j] is actuated before the flow of T then the door remains open for a period of new period T 

           If BE [i] is actuated, the door closes after T has elapsed and the elevator goes up to floor i. 

           Otherwise: once T has elapsed the door closes and the elevator stays on floor j.

  Case2: 

        1. A user is on floor i calls the elevator by pressing the call button APPEL[i]

        2. The elevator goes up to floor i. 

        3. Once arrived, the elevator door opens and remains open for a period T: 

           If BE [i] is actuated before the flow of T then the door remains open for another period T 

           If BE [n] is actuated, the door closes after T has elapsed and the elevator moves towards floor n. 

           Otherwise: once T has elapsed the door closes and the elevator stays on floor i.

If the elevator is in an idle state on floor j: (i <j)

  Case 1: 

        1. A user on floor j calls the elevator by pressing the call button APPEL[j] 

        2. The elevator door opens and remains open for a period T: 

           If BE [j] is actuated before the flow of T then the door remains open for another period T

           If BE [i] is actuated, the door closes after T has elapsed and the elevator goes downstairs i. 

           Otherwise: once T has elapsed the door closes and the elevator stays on floor j.

  Case2: 

          1. A user is on floor i calls the elevator by pressing the call button APPEL[i] 

          2. The elevator goes down to floor j. 

          3. Once arrived, the elevator door opens and remains open for a period T: 

             If BE [i] is actuated before the flow of T then the door remains open for a period of new period T 

             If BE [n] is actuated, the door closes after T has elapsed and the elevator moves to floor n. 

             Otherwise: once T has elapsed the door closes and the elevator stays on floor i.

If initially, the elevator is in an idle state on floor j and a user presses BE [i]:

  Case 1: (j <i) The elevator goes up to floor i.

  Case2: (i <j) The elevator goes down to the first floor

Note : This was an academic project in VLSI practical work finalised in 14/12/2020.
