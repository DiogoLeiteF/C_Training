#include <stdio.h>
#include <stdlib.h>

struct item
{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main(void)
{

    struct item itm;
    struct item *pItem;

    pItem = &itm;

    // allocate memory to itemName
    pItem->itemName = (char *)malloc(30 * sizeof(char));

    if (pItem == NULL)
        exit(-1);

    // Read item:
    readItem(pItem);

    // print item
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}

void readItem(struct item *i)
{
    printf("\nEnter product name: ");
    scanf("%s", i->itemName);

    printf("\nEnter price: ");
    scanf("%f", &i->price);

    printf("\nEnter QUANTITY: ");
    scanf("%d", &i->quantity);

    i->amount = (float)i->quantity * i->price;
}

void printItem(struct item *i)
{
    printf("\nName: %s", i->itemName);
    printf("\nPrice: %.2f", i->price);
    printf("\nQauntity: %i", i->quantity);
    printf("\nTotal Amount: %.2f", i->amount);
}
