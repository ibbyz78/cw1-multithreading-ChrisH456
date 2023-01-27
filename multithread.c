
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
pthread_attr_init(&attr);
/* Initialize thread attributes */
int pthread_attr_t &attrmax;
int pthread_attr_t &attrmin;
int pthread_attr_t &attravg;
/* Create threads */
pthread_create(&Avg, &Max, &Min, &attravg, &attrmax, &attrmin, avgfunc, minfunc, maxfunc, argv[1]);

/* Wait for threads to exit */
pthread_join(tid,NULL);
printf("%d %d %d", avgNum, minNum, maxNum);
}

void *avgfunc(void *param)
{
    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
  
int main()
     int i, total;
     int a[] = {90, 81, 78, 95, 79, 72, 85};
     int n = 7;
    
    total = 0;

    for (i = 0; i < n; i++){
        total += a[i];
        sprintf(avgNum);
    }
    
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    /* Write the code to calculate the average value and store it in avgNum variable */
    return [0];
}

void *minfunc(void *param)

    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
 
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    
    /* Write the code to calculate the minimum value and store it in minNum variable */
 int main()
 {
    int a[] = {90, 81, 78, 95, 79 ,72, 85}, minimum, size, c, location = 1;
    for (c = 0; c < size; c++)
    minimum = a[0];

    for (c = 1; c < size ; c++)
    {
        if (a[c] < minimum)
        {
            minimum = a[c]
            location = c+1
        }
    }
    sprintf(minNum);
    return [0];
 }
 
void *maxfunc(void *param)
int main()
{
    // The following two lines help you to access the arguments (list of numbers) passed to the program
    char** args = (char**) param;   // args is a pointer to array of pointers to main func arguments argv
    args++;                        // increment the pointer to point to the first number passed
 
    // To get a number from args array, use atoi(*args)
    // to increment the pointer to point to the next number: *args++
    
    /* Write the code to calculate the maximum value and store it in maxNum variable */
 int a[] = {90, 81, 78, 95, 79, 72, 85}, maximum, size, c, location = 0;
 for (c = 0; c < size; c++)
 for (c = 1; c < size; c++)
 if (array[a] > array[location])
 location = c;
 sprintf(maxNum);
 return [0];
}

{
    int (maxNum, minNum avgNum)
    printf("The average is: %d", &avgNum);
    printf("The minimum is: %d", &minNum);
    printf("The maximum is: %d", &maxNum)
}