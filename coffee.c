#include <stdio.h>
#include <stdlib.h>

// define constant

#define ESPRESSO_BEANS 8
#define ESPRESSO_WATER 30

#define CAPPUCCINO_BEANS 8
#define CAPPUCCINO_WATER 30
#define CAPPUCCINO_MILK 70

#define MOCHA_BEANS 8
#define MOCHA_WATER 39
#define MOCHA_MILK 160
#define MOCHA_CHOCOLATE 30

#define min_coffeebeans 40
#define min_water 200
#define min_milk 400
#define min_chocolatesyrup 150

// Define variables
float total_amount = 0;

int espresso_price = 3.5;
int cappuccino_price = 4.5;
int mocha_price = 5.5;

int coffeebeans = 320;
int water = 2000;
int milk = 3200;
int chocolatesyrup = 1200;


// fuction prototype

void change_price()
{
    int choice;
    float new_price;
    printf("1. Change Espresso price\n");
    printf("2. Change Cappuccino price\n");
    printf("3. Change Mocha price\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Current price of Espresso is %.2f\n", espresso_price);
        espresso_price = new_price;

        break;
    case 2:
        printf("Current price of Cappuccino is %.2f\n", cappuccino_price);
        cappuccino_price = new_price;
        break;
    case 3:
        printf("Current price of Mocha is %.2f\n", mocha_price);
        mocha_price = new_price;
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}

void display_ingredients()
{
   printf("beans: %d\n", coffeebeans);
   printf("water: %d\n", water);
   printf("milk: %d\n", milk);
   printf("chocolatesyrup: %d\n", chocolatesyrup);
}

void display_sale_amt ()
{
    printf("Total amount: %.2f\n", total_amount);
    printf("Do you want to reset the sale amount? (y/n): ");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y')
    {
        total_amount = 0;
        printf("Sale amount reset to 0\n");
        printf("Dont forget to collect the cash\n");
    }
}

void replenish()
{
    int choice;
    int quantity;
    printf("1. Replenish beans\n");
    printf("2. Replenish water\n");
    printf("3. Replenish milk\n");
    printf("4. Replenish chocolatesyrup\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter quantity of beans: ");
        scanf("%d", &quantity);
        coffeebeans += quantity;
        break;
    case 2:
        printf("Enter quantity of water: ");
        scanf("%d", &quantity);
        water += quantity;
        break;
    case 3:
        printf("Enter quantity of milk: ");
        scanf("%d", &quantity);
        milk += quantity;
        break;
    case 4:
        printf("Enter quantity of chocolatesyrup: ");
        scanf("%d", &quantity);
        chocolatesyrup += quantity;
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
}