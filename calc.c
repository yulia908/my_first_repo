/****************************
 * Yulia Samoilovich
 * AP1- Calculator project
 * March 20, 2022
****************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add () {

    char ans;
    int n;
    int no_of_values;

    do{
        int result=0;
        do {
            printf("\nADDITION OPERATION\n\nEnter the number of values to add: ");
            scanf(" %d", &no_of_values);

            for(int i=1; i<=no_of_values; i++){
                printf("  Enter value %d: ", i);
                scanf(" %d", &n);
                result += n;
            }
            printf("\n  The result is %d\n\n", result);

        }while(no_of_values<2 || no_of_values>20);

        printf("Do you want to do another addition? (y/n): ");
        scanf(" %c", &ans);

    }while(ans=='y');

    return 0;
} 

int divide() {

    int n1, n2;
    int result;
    char ans;

    printf("\nDIVISION OPERATION\n\n");

    do{
        do {
            printf("Enter the value to divide: ");
            scanf(" %d", &n1); 
            printf("Enter the divider (not 0): ");
            scanf(" %d", &n2);          
        }while(n2==0);

        result = n1/n2;
        printf("\nThe result is %d\n\n", result);

        printf("Do you want to do another division? y/n: ");
        scanf(" %c", &ans);

    }while(ans=='y');

    return 0;
}

int multiply () {

    char ans;
    int n;
    int no_of_values;

    do{
        int result=1;

        do {
            printf("\nMULTIPLICATION OPERATION\n\nEnter the number of values to multiply: ");
            scanf(" %d", &no_of_values);

            for(int i=1; i<=no_of_values; i++){
                printf("  Enter value %d: ", i);
                scanf(" %d", &n);
                result *= n;
            }
            printf("\n  The result is %d\n\n", result);

        }while(no_of_values<2 || no_of_values>20);

        printf("Do you want to do another multiplication? (y/n): ");
        scanf(" %c", &ans);

    }while(ans=='y');

    return 0;
}

int subtract () {

    int n1, n2;
    int result;
    char ans;

    printf("\nSUBTRACTION OPERATION\n");

    do{
            printf("\nEnter the first value: ");
            scanf(" %d", &n1); 
            printf("Enter value to subtract: ");
            scanf(" %d", &n2);          

        result = n1-n2;
        printf("\nThe result is %d\n\n", result);

        printf("Do you want to do another subtraction? y/n: ");
        scanf(" %c", &ans);

    }while(ans=='y');

    return 0;
}

int main () {

    int choice;

    do {
        printf("\nNUMERIC CALCULATOR\nMain Menu Operators Choice\n\n"
            "1 - ADDITION\n"
            "2 - DIVISION\n"
            "3 - MULTIPLICATION\n"
            "4 - SUBTRACTION\n"
            "5 - QUIT\n\n");

        printf("Make your choice (1 - 5): ");
        scanf(" %d", &choice);

        switch (choice){
            case 1: add(); break;
            case 2: divide(); break;
            case 3: multiply(); break;
            case 4: subtract(); break;
        }

    }while (choice != 5);

    return 0;
}
