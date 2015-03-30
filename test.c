#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include  "test.h"
int main(){
	int a,b,c;
	char e[20];
	char d[]="test 1";
	char f[]="test 3";
	char alpahbet[]="abcdefghijklmnopqrstuvwxyz";
	
	printf(alpahbet);
	printf("Your score is %d \n", 100);
    printf("My score is %f \n", 150.50);
	printf(d);
	strcpy(d, "test 4\n");
	printf(d);
	printf("My name is %s", MYNAME);
	printf("What is your name?");
	scanf("%s",&e);
	printf("Your name is %s right?", e);;
	scanf("%s", f);
	return 0;
}	
