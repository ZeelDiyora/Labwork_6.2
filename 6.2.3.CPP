//write a program to print even numbers from 1 to N using a do-while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int z;

clrscr();

printf("Enter any number :");
scanf("%d",&z);

do{
   if(z%2==0)
     printf("%d\n",z);
       z++;
}while(z<=1);
getch();
}

















