#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

int input, num1, num2,a_input, answer,tries,loop_end;
srand((unsigned)time(NULL));

do{// Loop runs until 4 is pressed

	num1=rand() %101;
	num2=rand() %101;
	do{//Loop to get a correct input
		printf("Choose the type of problem with the corresponding number:\n");
		printf("1. Give me an addition problem.\n");
		printf("2. Give me a subtraction problem.\n");
		printf("3. Give me a multiplaction problem.\n");
		printf("4. Quit.\n");


		scanf("%i", &input);
		printf("\n");
		if(input <1 || input>4)
			printf("Improper input try again\n");
	}while(input < 1 || input > 4);


	if(input == 1){//Addition loop
		answer = num1+num2;
		tries=0;
		loop_end=0;
		do{
			printf("Complete: %i + %i = ",num1, num2);
			scanf("%i", &a_input);
			printf("\n");

			if(answer==a_input){
				printf("Congrulations your answer is correct\n");
				loop_end=1;
			}
			else if(tries==4 && answer!=a_input){
				printf("Sorry your answer is wrong and you are out of attempts\n");
				printf("The correct answer is: %i \n", answer);
				loop_end=1;
			}
			else if(answer!=a_input){
				printf("Sorry your answer is incorrect try again\n");
				tries++;
			}

		}while(loop_end ==0);

	}
	else if(input == 4)//quiting loop
		return 0;
	else if(input == 2){//subtraction loop
		answer = num1 - num2;
		tries=0;
		loop_end=0;
		do{
			printf("Complete: %i - %i = ",num1, num2);
			scanf("%i", &a_input);
			printf("\n");

			if(answer==a_input){
				printf("Congrulations your answer is correct\n");
				loop_end=1;
			}
			else if(tries==4 && answer!=a_input){
				printf("Sorry your answer is wrong and you are out of attempts\n");
				printf("The correct answer is: %i \n", answer);
				loop_end=1;
			}
			else if(answer!=a_input){
				printf("Sorry your answer is incorrect try again\n");
				tries++;
			}

		}while(loop_end ==0);

	}

	if(input == 3){//multiplication  loop
		answer = num1*num2;
		tries=0;
		loop_end=0;
		do{
			printf("Complete: %i * %i = ",num1, num2);
			scanf("%i", &a_input);
			printf("\n");

			if(answer==a_input){
				printf("Congrulations your answer is correct\n");
				loop_end=1;
			}
			else if(tries==4 && answer!=a_input){
				printf("Sorry your answer is wrong and you are out of attempts\n");
				printf("The correct answer is: %i \n", answer);
				loop_end=1;
			}
			else if(answer!=a_input){
				printf("Sorry your answer is incorrect try again\n");
				tries++;
			}

		}while(loop_end ==0);

	}






}while(input!=4);
return 0;
}
