
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Variables that hold the final results, integer data type for simplicity
int avgNum;
int minNum;
int maxNum;

// Functions' declaration. Definition is at the bottom
void *avgfunc(void *param);
void *minfunc(void *param);
void *maxfunc(void *param);

int main(int argc, char* argv[]){

/* Create thread IDs */
     pthread_t Avg;/* This is where the unique ID for the thread is created. A unique ID is used so that is is easily recognisable and hard to confuse with other threads*/
     pthread_t Min;
     pthread_t Max;
/* Create thread attributes */
     pthread_attr_t attrmax; /*These are the identifiers for the thread atrributes that are created later down the code.*/
     pthread_attr_t attrmin;
     pthread_attr_t attravg;

/* Initialize thread attributes */
     pthread_attr_init(&attrmax); /* These are the attributes for the threads. These use the identifer created above.*/
     pthread_attr_init(&attravg);
     pthread_attr_init(&attrmin);


/* Create threads */
     pthread_create(&Avg, &attravg, *avgfunc, argv); /* This is the creation of the threads that were defined above.*/
     pthread_create(&Max, &attrmax, *maxfunc, argv);
     pthread_create(&Min, &attrmin, *minfunc, argv);
/* Wait for threads to exit */
     pthread_join(Avg, NULL); 
     pthread_join(Max, NULL); 
     pthread_join(Min, NULL); 

     printf("%d %d %d", avgNum, minNum, maxNum);/*this is where the data is collected from the variable above and printed in a human readable format.*/
}

void *avgfunc(void *param)
{
    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
  
    int count =0;
    int total =0;
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    /* Write the code to calculate the average value and store it in avgNum variable */

    while(*args!= NULL){ /*This is the loop*/
        count = count++; /* this tells the code to go to the next number in the array*/
        total += atoi(*args);
        args++; /*this is to increment the args pointer*/

    
        int sum = total/count; /* this is the equation to find the average*/
        avgNum = sum; /* this says that the sum should be stored in the avgNum variable*/
        pthread_exit (0); /*this tells the thread that the function is done.*/
    }
}


void *minfunc(void *param)
{
    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
 
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    
    /* Write the code to calculate the minimum value and store it in minNum variable */
 int min1 = atoi(*args); /*this calls the args array for the numbers.*/

     while(*args!= NULL);{ /*this nulls the value and prepares it for the function*/


        if (min1<atoi(*args))
    
           {
            min1 = atoi(*args);
           }
           args++; /* this increments the array of numbers to get it to the next number*/
}
minNum = min1; /* this saves the result into the variable*/
pthread_exit(0); /* this ends the thread*/
}
 
void *maxfunc(void *param)
{
    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
 
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    
    /* Write the code to calculate the maximum value and store it in maxNum variable */

    int cn;
    while(*args != NULL) /* this nulls the value*/
    {
        int cn =atoi(*args); /* this tells it to count the numbers in the array*/
        if (cn>atoi(*args)) /* this is the calculation to find the maximum*/
        {
            cn=atoi(*args); /* this tells the system to save the cn value un maxnum*/
        }
        args++; /* this increments on to the next number*/
    }
    maxNum=cn; /* this saves the result into the maxNum variable*/
    pthread_exit(0); /*this stops the thread*/
}
