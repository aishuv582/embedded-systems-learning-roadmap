#include <stdio.h>
#include <string.h>

int main()
{
    char num[100], temp;

    printf("Enter a number: ");
    scanf("%s", num);

    int len = strlen(num);

    // Swap first and last digits
    temp = num[0];
    num[0] = num[len - 1];
    num[len - 1] = temp;

    printf("Number after interchange: %s", num);

    return 0;
}
