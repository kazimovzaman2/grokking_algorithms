#include <stdio.h>

void countdown(int i)
{
    printf("%d\n", i);

    if (i <= 0)
        return;
    else
        countdown(i - 1);
}

int main(void)
{
    countdown(5);
    return 0;
}
