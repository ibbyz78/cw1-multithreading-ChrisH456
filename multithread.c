
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

    pthread_attr_t attrmax;
    pthread_attr_t attrmin;
    pthread_attr_t attravg;
/* Create thread attributes */
    pthread_attr_init(&attrmax);
    pthread_attr_init(&attravg);
    pthread_attr_init(&attrmin);
/* Initialize thread attributes */
    int pthread_attr_t &attrmax;
    int pthread_attr_t &attrmin;
    int pthread_attr_t &attravg;
/* Create threads */
    pthread_create(&Avg, &Max, &Min, &attravg, &attrmax, &attrmin);
    pthread_create(avgfunc, minfunc, maxfunc, argv[1]);

/* Wait for threads to exit */
    pthread_join(tid,NULL);
    printf("%d %d %d", avgNum, minNum, maxNum);
}

void *avgfunc(void *param)
{
    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
  
    
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    /* Write the code to calculate the average value and store it in avgNum variable */
 int main()
 {
    float a,b,c,d,e,f,g,avg;
    printf("Please input 7 numbers.");
    scanf("%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g);
    avg=(a+b+c+d+e+f+g)/7;
    int avgNum = avg;
    return 0;
 }
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

