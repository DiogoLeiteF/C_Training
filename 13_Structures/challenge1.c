#include <stdio.h>

struct employee
{
    char name[20];
    int hireDate;
    float salary;
};

int main(int argc, char const *argv[])
{

    struct employee emp[3] = {
        {"Mark", 2020, 2002.50},
    };

    for (int i = 1; i < 3; i++)
    {
        printf("\nname: ");
        scanf(" ");
        gets(emp[i].name);
        printf("\nhire date: ");
        scanf("%i", &emp[i].hireDate);
        printf("\nSalary: ");
        scanf("%f", &emp[i].salary);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s  |  %i  |  %.2f", emp[i].name, emp[i].hireDate, emp[i].salary);
    }

    return 0;
}
