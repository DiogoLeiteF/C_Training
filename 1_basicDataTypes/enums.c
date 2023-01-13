#include <stdio.h>

int main()
{
    // define the enum
    enum primaryColor
    {
        red,
        green,
        blue
    };
    // assign to variables
    enum primaryColor myColor, gregsColor;

    myColor = 1; // green
    gregsColor = blue;

    // printf("%s", myColor); // doesn't work 
    printf("%d", gregsColor);



    enum gender {male, female};
    enum gender myGender, anotherGender;
    
    myGender = male;

    anotherGender = female;

    

    return 0;
}