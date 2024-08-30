#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int numbers[][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    // };

    int numbers[3][3];
    int sum = 0;

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; columns < 3; j++)
        {
            sum++;
            numbers[i][j] = sum;
        }
    }



    

    return 0;
}
