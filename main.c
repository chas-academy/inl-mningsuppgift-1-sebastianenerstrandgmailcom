#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int sum = 0;
    int dice[100];
    int amount_of_nums[6] = {0};
    
    for (int i = 0; i < 100; i++)
    {
        dice[i] = (rand() % 6) + 1;
        sum += dice[i];
        amount_of_nums[dice[i]-1]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", amount_of_nums[i]);
    }

    printf("%d\n", sum);
    printf("%.1f\n", sum / 100.0);    

    return 0;
}
