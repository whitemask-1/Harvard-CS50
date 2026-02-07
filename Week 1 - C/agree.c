#include <stdio.h>

int main(void)
{
    char c;
    printf("Do you agree? ");
    scanf("%c", &c); // the scanf function only takes the first character of the input, meaning if you input a string yes it will only grab the y and set a pointer from y to the variable stated
    
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else
    {
        printf("Not Agreed.\n");
    }
}