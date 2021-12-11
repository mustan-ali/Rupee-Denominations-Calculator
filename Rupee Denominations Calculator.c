#include<stdio.h>

int main()
{
    int rupees[10] = {5000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};

    int i, amount, quantity;

    printf("Enter Amount in Rupees: ");
    scanf("%d",&amount);

    printf("\n");

    for(i=0; i<10; i++)
    {
        quantity = amount / rupees[i];
        if(quantity>0)
        {
            printf("Number of %d\t Note/Coin = %d\n",rupees[i],quantity);
        }
        amount = amount % rupees[i];
    }

    return 0;
}
