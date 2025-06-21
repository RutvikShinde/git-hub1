#include <stdio.h>
int main()
{
    float units, amount;
    printf("Enter units:");
    scanf("%f", &units);
    if (units >= 100)
    {
        amount = 100 * 8;
        units = amount - 100;

        if (units >= 100)
        {
            amount = amount + (units * 10);
            units = units - 100;
            if (units >= 100)
            {
                amount = amount + (units * 15);
                units = units - 100;

                if (units >= 100)
                {
                    amount = amount + (units * 18);
                    units = units - 100;
                }
                else
                amount=amount+(units*18);

            }
            else
                amount = amount + (units * 15);
        }
        else
            amount = amount + (units * 10);
    }
    else
        amount = amount + (units * 8);
    printf("Amount is :%.2f", amount);
    return 0;
}