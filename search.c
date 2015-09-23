#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
int xgold,ygold, xpos, ypos,moves;
unsigned int xdistance, ydistance, n_xdistance, n_ydistance;
char input,n,s,e,w,end;
n='n';
s='s';
w='w';
e='e';
end = 'q';
xpos =5;
ypos =5;
moves =0;

srand((unsigned)time(NULL));

do{
	xgold=rand()%11;
	ygold=rand()%11;
}while(xgold==5 && ygold==5);


printf("Find the gold to win!\n");
//printf("Gold x: %i Gold y: %i\n",xgold,ygold); 
printf("\n");



do{
	//sets a current distance to compare to	


	
	xdistance = compare(xgold,xpos);
	ydistance = compare(ygold,ypos);
	//Gets input
	printf("Input a direction with n,s,e,w : ");
	scanf("%c", &input);
	while(getchar()!= '\n');
	printf("\n");

	if(input == n){
		ypos++;
	}
	else if(input == s){
		ypos--;
	}
	else if(input == e){
		xpos++;
	}
	else if(input == w){
		xpos--;	
	}
/*	else if(input == end)//exit program for testing
		return 0; 
*/
	else
		printf("Inproper input try again\n");


	//Checks if in bounds
	if(xpos < 0){
		printf("OUCH! You hit a wall\n");
		xpos =0;
	}
	else if(xpos > 10){
		printf("OUCH! You hit a wall\n");
		xpos =10;
	}
	else if(ypos < 0){		
		printf("OUCH! You hit a wall\n");
		ypos =0;
	}

	else if(ypos > 10){		
		printf("OUCH! You hit a wall\n");
		ypos =10;
	}

	//compares to gold location
	n_xdistance = compare(xgold,xpos);
	n_ydistance = compare(ygold,ypos);

	if(n_xdistance > xdistance || n_ydistance >ydistance)
		printf("GETTING COLDER!\n");
	else if(n_xdistance < xdistance || n_ydistance <ydistance)
		printf("GETTING WARMER!\n");

	moves++;

//	printf("Xpos: %i Ypos %i\n",xpos,ypos);
}while(!(xpos==xgold && ypos==ygold));


printf("HOORRAY!\n");
printf("It took %i Moves to find the gold\n", moves);
return 0;
}

int compare(int first, int second){

unsigned int distance;
distance = first - second;

return distance;
}




