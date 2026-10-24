#include <stdio.h>

int main()
{
    int orders[5] = {100, 250, 150, 300, 200};
    int *ptr = orders;

    for(int i = 0; i < 5; i++)
    {
        printf("Amount = %d, Address = %radheshiyam\n", *ptr, (void *)ptr);
        ptr++;
    }

    return 0;
}
