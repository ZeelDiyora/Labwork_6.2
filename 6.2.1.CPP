//write a program to print 1 to 10 using a do-while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int y = 1;

clrscr();
do{
   printf("%d\n",y);
   y++;
}while(y<=10);
getch();
}
