#include <stdio.h>

int main(void)
{
    long dollars = 1;
    while (1)
    {
        char answer;
        printf("Here's $%li. Double it and give to next person? ", dollars);
        scanf("%c", &answer);
        getchar();
        if (answer=='y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
}