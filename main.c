#include <stdio.h>

int main(void)

{
    char name[50];
    float unit, charge;
    printf("enter consumer name\n");
    scanf("%s", name);
    printf("enter the unit consumed\n");
    scanf("%f", &unit);

    if (unit <= 200)
    {
        charge = (unit * .08) + 100;
    }

    else if (unit <= 300)
    {
        charge = (200 * .08) + (unit - 200 * .90) + 100;
    }

    else
    {
        charge = (200 * .08) + (100 * .90) + (unit - 300 * 1) + 100;
    }
    if (charge > 400)
    {
        charge + charge + (0.15 * charge);
    }
    printf("enter consumer name:%s\n", name);

    printf("unit consumed:%f\n", unit);

    printf("charge consumed:%f\n", charge);

    return 0;
}