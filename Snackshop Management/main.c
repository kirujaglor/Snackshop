//Author KENDI KIRUJA
//Date 23/7/2022
//Program to manage a snack shop
#include <stdio.h>
#include <stdlib.h>

int menu();
int main()
{
    printf("Welcome to Zetech snack shop!\n");
    menu();
    return 0;
}

int menu(){
    int item;
printf("1. Hamburger - ksh. 50\n");
printf("2. Samosa - ksh. 50\n");
printf("3. Sausage - ksh. 20\n");
printf("4. Coffee - ksh. 30\n");
printf("5. Tea - ksh. 20\n");
printf("6. Chips - ksh. 70\n");
printf("7. Kebab - ksh. 50\n");
printf("8. Nyama Bite - ksh. 60\n");
printf("9. Bajia - ksh. 50\n");
printf("10.Omelette - ksh. 30\n");

printf("Enter Item No: ");
scanf("%d",&item);

if (item > 0 && item <=10){
    printf("\n item added to cart\n");
}
else {
    printf("invalid item\n");
    menu();

}
return menu;
}





