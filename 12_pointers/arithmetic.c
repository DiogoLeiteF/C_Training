#include <stdio.h>

int arraySum(int array[], const int n);
int arraySumPtr(int *array, const int n);

int main(int argc, char const *argv[])
{
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("the sum using arraySum() is: %i\n",arraySum(values, 10));
    printf("the sum using arraySumPtr() is: %i\n",arraySumPtr(values, 10));

    return 0;
}

int arraySum(int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    /*
     ptr = &array[0] <= same => array
     arrayEnd = &array[0] + 10
    */
    for (ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr; // dereference the ptr to get the value
    return sum;
}


/*******************************************************
 Example with pointer notation in function parameters
 *******************************************************/

int arraySumPtr(int *array, const int n){
    int sum = 0;
    int *const arrayEnd = array + n;

    for(; array< arrayEnd; ++array)
        sum += *array;

    return sum;
    
}