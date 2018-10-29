#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *globeInit = "hi";
char *globeNot;
int globalInt1 = 24;
int globalInt2;

int main()
{
    char *data1 = malloc (4);
    char *data2 = malloc (16);
    char *data3 = malloc (32);
    char *data4 = malloc (64); 

    char *string = "hi";
    char *notUsed;

    int *num1 = 0;
    int num2 = 2;
    int num3;
    int num4; 

    float floating1 = 0.0;
    float floating2 = 0.2;
    float floating3;
    float floating4;
    

    printf("logical address of main: %p\n",main); //experiment to see main's address

    //strings
    printf("\n-----strings-------\n");
    printf("logical address of string: %p\n",&string);
    printf("logical address of string (not initialized): %p\n",&notUsed);

    //globals
    printf("\n-----globals-------\n");
    printf("logical address of globeInit: %p\n",&globeInit);
    printf("logical address of globeNot (not initialized): %p\n",&globeNot);
    printf("logical address of globalInt1: %p\n",globalInt1);
    printf("logical address of globalInt2 (not initialized): %p\n",globalInt2);

    //integers
    printf("\n-----integers-------\n");
    printf("logical address of num1: %p\n",&num1);
    printf("logical address of num2: %p\n",num2);
    printf("logical address of num3 (not initialized): %p\n",num3);
    printf("logical address of num4 (not initialized): %p\n",num4);

    //floats
    printf("\n-----floats-------\n");
    printf("logical address of floating1: %p\n",floating1);
    printf("logical address of floating2: %p\n",floating2);
    printf("logical address of floating3 (not initialized): %p\n",floating3);
    printf("logical address of floating4 (not initialized): %p\n",floating4);

    //allocated memory
    printf("\n-----allocated memory-------\n");
    printf("logical address of allocated data1: %p\n",&data1);
    printf("logical address of allocated data2: %p\n",&data2);
    printf("logical address of allocated data2: %p\n",&data3);
    printf("logical address of allocated data2: %p\n",&data4);
    
    //for testing using valgrind and others possibly
    //sleep(60);
    return 0;
}