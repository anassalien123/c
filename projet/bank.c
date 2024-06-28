#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int size=0;
struct bank_user{
int id;
char user_Name[8],gender,user_bd[10];
struct bank_user_account{
char curr_type[7];
int acc_Number,acc_amount;
}user_b[100];
}ac[100];
void admin();
void staff();

int main(){
int a;
do{
system("cls");
printf("\n\t\t******************************\n\t\t\t*  Main Menu for BMS  *\n\t\t\t***********************\n\t\t\t      1. Admin Panel. *\n\\t\t\t*      2. Staff Panel. *\n\t\t\t*    3.Exit        *\n\t\t\t********************************\n\t\t\tEnter Your Choise :>");
scanf("%d",&a);
switch(a){
case 1: system("cls");
admin();
break;
case 2: system("cls");
staff();
break;
case 3: exit(1);
break;
default : printf("\nyour Enter is wrong please enter(1_3)");
getch();
}
}while(1);

}



















void admin(){

char x[5],1;
int y,m;
do{
system("cls");
printf("\n\t\tEnter user name :>");
scanf("%d",&y);
if((strcmp(x,"Anass")== 0)&& y == 111){
     do{
                        
}                   
}
}
}









