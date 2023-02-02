
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

int main(int argc, char* argv[])
{
/* Create thread IDs */
    pthread_t Avg;/* This is where the unique ID for the thread is created. A unique ID is used so that is is easily recognisable and hard to confuse with other threads*/
    pthread_t Min;
    pthread_t Max;

    pthread_attr_t attrmax; /*These are the identifiers for the thread atrributes that are created later down the code.*/
    pthread_attr_t attrmin;
    pthread_attr_t attravg;
/* Create thread attributes */
    pthread_attr_init(&attrmax); /* These are the attributes for the threads. These use the identifer created above.*/
    pthread_attr_init(&attravg);
    pthread_attr_init(&attrmin);
/* Initialize thread attributes */
    int pthread_attr_t &attrmax; /*once the ID and attributes are made these liens of code are used to initiailise it and prepare it for use.*/
    int pthread_attr_t &attrmin;
    int pthread_attr_t &attravg;
/* Create threads */
    pthread_create(&Avg, &Max, &Min, &attravg, &attrmax, &attrmin); /* This is the creation of the threads that were defined above.*/
    pthread_create(avgfunc, minfunc, maxfunc, argv[1]);

/* Wait for threads to exit */
    pthread_join(tid,NULL); 
    printf("%d %d %d", avgNum, minNum, maxNum);/*this is where the data is collected from the variable above and printed in a human readable format.*/
}

void *avgfunc(void *param)

    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
  
    
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    /* Write the code to calculate the average value and store it in avgNum variable */
 int main()
 {
    int i,total;
    int a[] = {args};
    int n = 7;

    total = 0;

    for(i = 0; i< n; i++) {
        total += a[i];
    }
    sprintf("%f\n,", &avgNum)
    return 0;
 
}


void *minfunc(void *param)

    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
 
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    
    /* Write the code to calculate the minimum value and store it in minNum variable */
 
 
void *maxfunc(void *param)
int main()

    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
 
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    
    /* Write the code to calculate the maximum value and store it in maxNum variable */

