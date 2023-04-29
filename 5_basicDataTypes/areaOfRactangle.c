# include <stdio.h>

int main(int argc, char const *argv[])
{
    double width, height, perimeter, area;

    printf("\nEnter the rectangle width: ");
    scanf("%lf", &width);

    printf("\nEnter the rectangle height: ");
    scanf("%lf", &height);

    perimeter = width*2 + height*2;
    area = width * height;

    printf("\nArea: %.2lf", area);
    printf("\nPerimeter: %.2lf", perimeter);


    return 0;
}
