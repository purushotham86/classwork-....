#include<stdio.h> 
int main()
{
  int number, Square;
  printf("Please Enter any integer Value : ");
  scanf("%d", &number);
  Square = number * number;
  printf("Square of a given number %d is = %d", number, Square);
  return 0;
}