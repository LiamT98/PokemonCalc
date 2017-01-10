/* 
PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE
 
START PROGRAM

MAIN FUNC
START MAIN

INT EVOLVECOUNT = 0
INT TRANSFERCOUNT = 0

PRINT 'Welcome to the Pokemon Calculator'
PRINT	'Select a Pokemon:'
SET pokemonList[3] TO 'Pidgey', 'Ratatta', 'Drowzee'
FOR INT i < 3
	PRINT pokemonList[i]
END FOR
INT CHOICE = 0
INPUT user inputs integer to select pokemon
STORE user input IN CHOICE variable
IF CHOICE == 1
	THEN
		PRINT 'You selected Pidgey'
ELSE IF CHOICE == 2
	THEN
		PRINT 'You selected Ratatta'
ELSE IF CHOICE == 3
	THEN
		PRINT 'You selected Drowzee'
ELSE
	PRINT 'Incorrect Input, Try again! Aborting'
   END
END IF

PRINT 'Please enter the number of Pokemon'
INT POKEMONNUMBER = 0
INPUT user enters number of pokemon they have
STORE user input IN POKEMONNUMBER
IF POKEMONNUMBER > 9999
	THEN
		PRINT ERROR 'Input exceeds program limit'
   	END
END IF
   
PRINT 'Please enter the number of Pokemon Candy'
INT POKEMONCANDY = 0
INPUT user inputs number of pokemon candy
STORE user input IN POKEMONCANDY
IF POKEMONCANDY > 99999
	THEN
		PRINT ERROR 'Input exceeds program limit'
   	END
END IF
   
INT REQUIREDCANDIES = 0   
IF CHOICE == 1
	THEN
		REQUIREDCADIES = 12
   	CALL FUNC EVOLVEPOKEMON
   	CALL FUNC RESULTS
ELSE IF == 2
	THEN
		REQUIREDCANDIES = 25
   	CALL FUNC EVOLVEPOKEMON
   	CALL FUNC RESULTS
ELSE IF == 3
	THEN
   	REQUIREDCANDIES = 50
   	CALL FUNC EVOLVEPOKEMON
   	CALL FUNC RESULTS
END IF   
END MAIN FUNC
   
EVOLVEPOKEMON FUNC
START EVOLVEPOKEMON

INT CANEVOLVE = 1
WHILE CANEVOLVE = 1
	IF POKEMONCANDY / REQUIREDCANDIES = 0 OR POKEMONNUMBER = 0
   	THEN
   		BREAK
   ELSE
   	POKEMONNUMBER - 1
      POKEMONCANDY = POKEMONCANDY - REQUIREDCANDIES
      POKEMONCANDY + 1
      EVOLVECOUNT + 1
      IF POKEMONNUMBER = 0
      	THEN
         	BREAK
      END IF
	END IF
END WHILE

INT CANTRANSFER = 1
WHILE CANTRANSFER = 1
	IF POKEMONCANDY + POKEMONNUMBER < REQUIREDCANDIES + 1 OR POKEMONNUMBER = 0
   	THEN
      	BREAK
      ELSE
      	WHILE POKEMONCANDY < REQUIREDCANDIES
         	TRANSFERCOUNT + 1
            POKEMONNUMBER - 1
            POKEMONCANDY + 1
            IF POKEMONNUMBER = 0
            	THEN
               	BREAK
            END IF
			END WHILE
	POKEMONNUMBER - 1
   POKEMONCANDY = POKEMONCANDY - REQUIREDCANDIES
   POKEMONCANDY + 1
   EVOLVECOUNT + 1
   IF POKEMONNUMBER = 0
   	THEN
      	BREAK
   END IF

END EVOLVEPOKEMON FUNC
            
RESULTS FUNC
START RESULTS

DOUBLE EVOLVETIME = 12
DOUBLE LUCKYEGGUSE = EVOLVECOUNT * EVOLVETIME / 60 / 30
INT XP = EVOLVECOUNT * 1000
DOUBLE TOTALEVOLVETIME = EVOLVECOUNT * EVOLVETIME / 60

IF LUCKYEGGUSE MORE THAN OR = 1
	THEN
   	PRINT 'Use: LUCKYEGGUSE Lucky Eggs'
   	PRINT 'Transfer TRANSFERCOUNT Pokemon'
   	PRINT 'Evolve EVOLVECOUNT Pokemon'
   	PRINT 'Gaining XP * 2 xp'
   	PRINT 'Total evolve time: TOTALEVOLVETIME minutes'
	ELSE
   	PRINT 'Do not use a Lucky Egg, Catch some more Pokemon'
      PRINT 'Transfer: TRANSFERCOUNT Pokemon'
      PRINT 'Gaining XP xp'
      PRINT 'With a Lucky Egg: XP * 2 xp'
      PRINT 'Total evolve time: TOTALEVOLVETIME minutes'
ENDIF

END RESULTS FUNC

END PROGRAM
   
PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE ---- PSUEDO CODE
*/

#include <stdio.h>
#include <math.h>

/* declaring functions */
/* The two functions below utilise pointer variables so that I can pass and return multiple values to a fucntion */
void evolvePokemon(int *rc, int *pn, int *pc, int *ec, int *tc);
void results(int *pn, int *pc, int *ec, int *tc);

int main (void)
{
	/* Declaring main variables, semantically named */
	int pokemonNumber = 0;
   int pokemonCandies = 0;
   int requiredCandies = 0;
   int evolutionsCompleted = 0;
   int transfersCompleted = 0;
   
   printf("Welcome to the Pokemon Calculator\nDesigned and Programmed by Liam Taylor");
   printf("\nSelect a Pokemon:");
   /* a character array to store 3 strings, also the 3 pokemon compatible with the program */
   char *pokemonList[3];
   /* Adding the strings to the character array */
   pokemonList[0] = "\n(1)Pidgey";
   pokemonList[1] = "\n(2)Ratatta";
   pokemonList[2] = "\n(3)Drowzee";
	int i;
   /* a FOR loop to print the character array to the user */
   for(i = 0; i < 3; i++)
   /* using int i to step through the array */
   	printf(pokemonList[i]);
      
   int choice = 0;
   /* reading and storing the user's selection of pokemon */
   scanf("%d", &choice);
   /* if user input eqauls 1-3 this will print and select the corresponding pokemon */
   if(choice == 1)
   	printf("\nYou selected Pidgey");
   else if (choice == 2)
   	printf("\nYou selected Ratatta");
   else if (choice == 3)
   	printf("\nYou selected Drowzee");
   else 
   {
   /* If the input is outside the accepted parameters, a error message is displayed and the program is exited */
		printf("\n\nINCORRECT SELECTION INPUT, TRY AGAIN!\nINPUT MUST BE 1, 2 OR 3!");
   	exit(0);
   }
      
   /* user now enters the number of pokemon they have and stores it in a local varialbe */
   printf("\n\nPlease enter the number of the selected Pokemon you have:");
   scanf("%d", &pokemonNumber);
   /* input is printed to the screen */
   printf(" %d", pokemonNumber);
   
   /* if the input exceeds 9999, an error is displayed and the program exits */
   if (pokemonNumber > 9999) 
   {
   	printf("\n\nNUMBER EXCEEDS PROGRAM LIMIT\nINPUT A NUMBER UNDER 9999");
      /* stops compiling */
      exit(0);
   }
   
   /* user inputs the amount of pokemon candies and is stored in a local variable */
   printf("\nPlease enter the number of candies you have for the selected Pokemon:");
   scanf("%d", &pokemonCandies);
   printf(" %d", pokemonCandies);
   
   /* if the input exceeds 99999, an error is displayed and the program with exit */
   if (pokemonNumber > 99999) 
   {
   	printf("\n\nNUMBER EXCEEDS PROGRAM LIMIT\nINPUT A NUMBER UNDER 99999");
   	/* stops compiling */
      exit(0);
   }
   
   /* Declare a switch statement using the choice variable */
   switch (choice)
   {
   	/* case statement for Pidgey */
   	case 1:
      	requiredCandies = 12;
         /* calls the evolvePokemon function passing the local variables as pointers to the fucntion */
         evolvePokemon(&requiredCandies, &pokemonNumber, &pokemonCandies, &evolutionsCompleted, &transfersCompleted);
         /* calls the results function passing the local variables as pointers to the fucntion */
         results(&pokemonNumber, &pokemonCandies, &evolutionsCompleted, &transfersCompleted);
      	break;
         
      /* case statement for Ratatta */   
      case 2:
      	requiredCandies = 25;
         evolvePokemon(&requiredCandies, &pokemonNumber, &pokemonCandies, &evolutionsCompleted, &transfersCompleted);
         results(&pokemonNumber, &pokemonCandies, &evolutionsCompleted, &transfersCompleted);
      	break;
      /* case statement for Drowzee */
      case 3:
      	requiredCandies = 50;
         evolvePokemon(&requiredCandies, &pokemonNumber, &pokemonCandies, &evolutionsCompleted, &transfersCompleted);
         results(&pokemonNumber, &pokemonCandies, &evolutionsCompleted, &transfersCompleted);
      	break;
      /* default case statement in case above error handling fails */
      default:
      	printf("\n\nINCORRECT SELECTION INPUT, TRY AGAIN!\nINPUT MUST BE 1, 2 OR 3!");
         exit(0);
      	break;
   } 
   return 0;
}

/* evolvePokemon function where the local variables from the MAIN function are passed to the pointers declared below */
/*
rc = requiredCandies
pn = pokemonNumber
pc = pokemonCandies
ec = evolutionsCompleted
tc = transfersCompleted
*/
void evolvePokemon(int *rc, int *pn, int *pc, int *ec, int *tc)
   {
   	/* pointer values assigned to local variables to allow greater flexibility */
   	int rc_temp = *rc;
      int pn_temp = *pn;
      int pc_temp = *pc;
      int ec_temp = *ec;
      int tc_temp = *tc;
      
      /* 'boolean' value to use in the while loop */
      int canEvolve = 1;
      
      while(canEvolve = 1)
      {
      	/* if there are not enough candy or pokemon, the loop breaks/stops */
      	if ((pc_temp / rc_temp) == 0 || pn_temp == 0)
         {
         	break;
         }
         else
         {
         	/* evolve pokemon
            taking 1 away from the Pokemon number*/ 
         	pn_temp--;
            /* take the required candies away from the total candies for the selected pokemon */
            pc_temp -= rc_temp;
            /* add 1 to the total candies for an evolution */
            pc_temp++;
            /* add 1 to the evolutions completed count */
            ec_temp++;
            /* when the number of pokemon equals 0, stop */
            if(pn_temp == 0)
            break;
         }
      }
      
      /* 'boolean' value to use in the while loop */
      int canTransfer = 1;
      
      while(canTransfer = 1)
      {
      	/* if the number of pokemon candies and pokemon is less than the minimum required for a useful transfer, break...
          or if the number of pokemon = 0 stop*/
      	if ((pc_temp + pn_temp) < (rc_temp + 1) || pn_temp == 0)
         {
         	break;
         }
         else
         {
         	/* if the total candy is less than the required, transfer a pokemon */
         	while(pc_temp < rc_temp)
            {
            	/* add one to transfers completed */
            	tc_temp++;
               /* take 1 away from the total pokemon */
               pn_temp--;
               /* add 1 to the total candy */
               pc_temp++;
               /* when pokemon number = 0 break */
               if(pn_temp == 0)
            	break;
            }
         }
         /* after transferring, evolve more pokemon with newly added candies */
         pn_temp--;
         pc_temp -= rc_temp;
         pc_temp++;
         ec_temp++;
         if(pn_temp == 0)
            break;
      }
      /* assign the pointer variables to the new local varaibles */
       *rc = rc_temp;
       *pn = pn_temp;
       *pc = pc_temp;
       *ec = ec_temp;
       *tc = tc_temp;
       return;
   }
   
/* results function to consolidate further calculations and output to the compiler */
void results(int *pn, int *pc, int *ec, int *tc)
{
		/* assigned local varaibles to the pointer values */
      int pn_temp = *pn;
      int pc_temp = *pc;
      int ec_temp = *ec;
      int tc_temp = *tc;
      
      /* declaring the amount of time to evolve one pokemon, in this case 27 seconds */
      dobule evolveTime = 27;
      /* calculate the xp gain by multipying the number of evolutions completed by 1000 */
      int xpAttained = (ec_temp * 1000);
      /* total evolution time calcualted by multiplying number of evoulutions completed by the evolve time (27)
      and dividing by 60 to convert the value into minutes*/
      double totalEvolveTime = ((ec_temp * evolveTime) / 60);
      /* lucky egg use is calculated by dividing the total evolve time by 30, as to effectively
      use 1 lucky egg lasts 30 minutes so if the evolve time divides into 30, lucky egg use = 1*/
      int luckyEggUse = totalEvolveTime / 30;
      /* if the lucky egg use is more than or equal to 1, then display results related to using a lucky egg */
      if(luckyEggUse >= 1)
      {
      	/* lucky eggs to use */
      	printf("\n\nYOU CAN USE %d Lucky Eggs", luckyEggUse);
         /* number of transfers to make first */
         printf("\nFirst, Transfer %d Pokemon/s", tc_temp);
         /* Number of evolutions to make */
         printf("\nWith a Lucky Egg you should evolve %d Pokemon", ec_temp);
         /* display the xp gain multiplied by two due to the double XP characteristic of the lucky egg */
         printf("\nGaining %dXP", xpAttained * 2);
         /* display the total evolve time */
         printf("\nTotal evolve time: %lf minutes", totalEvolveTime);
      }
      /* else no lucky egg should be used, display results */
      else
      {
      	/* warn user not to use a lucky egg */
      	printf("\n\nDO NOT USE any Lucky Eggs, Catch some more Pokemon!");
         printf("\nFirst, Transfer %d Pokemon", tc_temp);
         /* display xp gain without 2x multiplier */
         printf("\nWithout a Lucky Egg you would gain %dXP", xpAttained);
         /* display xp gain if lucky egg is used/wasted */
         printf("\nWith a Lucky Egg, you would of gained %dXP", xpAttained * 2);
         printf("\nTotal evolve time: %lf minutes", totalEvolveTime);
      }   
}
