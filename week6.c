
#include <stdio.h>


//void append(int array[] , int size , int element);




int main(){



   /*
   
    int myarray[10];

    
    myarray[5] = 5;

     for(int i = 0; i < 10; i++){


        printf("%d\n",myarray[i]);

    }
*/ /*
    int multiarray[3] [4];
    for(int i = 0; i< 3; i++){
        printf("%d\n",multiarray[i] [0]);

    }
*/
    
    /*
   int myarray[3] [3];
   for(int i = 0; i<10; i++){
    printf("%d,%d,%d\n",myarray[i] [0]);



   }

*/


    int matrix[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}};
    

    for(int i = 0; i <3;i++){
        for(int j = 0; j <3; j++){

            if(j != 2)
                printf("%d, ", matrix[i] [j]);
            else
                printf("%d ", matrix[i] [j]);
        }
        printf("\n");
    }


/*

int example[10] = {};
for(int i = 0 ; i< 10; i++){
    printf("%d")


}

*/

/* foksiyon yaz 2 parametre alıyor num1 satrting poinr ve num 2 ending point olacak bunların 
arasında olan perfect yani tam kare sayıları output edecek vize sorusu cevabı yok arkadaşlarından al*/

    
    return 0;

    
    
}





