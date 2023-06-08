#include <stdio.h>

void decimal_to_binary(int num)
{
	    if (num == 0) {
        printf("0b0");
        return;
    }
    
    int binary[32]; 
    int i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    
    printf("The binary vale is : ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decimal_to_binary(num);
    printf("\n");
    return 0;
}
