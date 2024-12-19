#include<stdio.h>

int main(){


int money, house;
char car;
int thereshould_money =100000, thereshould_house = 5;

printf("How many money in your bank account? : ");
scanf("%d", &money);

printf("How many house do you have in kötekli? : ");
scanf("%d", &house);

printf("Do you have any car? : ");
scanf(" %c", &car);


if(money > thereshould_money && house > thereshould_house && (car == "y" || car == "Y")){
printf("You dont have to work all day long. ");
}

else if(money > 50000 && (car == "Y" || car == "y")){
    printf("You have to work one day in a week. ");
}

else{
    printf("You have to work. ");
}

    return 0;
}9639
