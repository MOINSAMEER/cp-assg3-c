/*
  Roll no.:53
  Student Name: M Moin M Sameer Bhurani
  Project Title:- Write A Program To Swap Two Numbers With The Help of Temporary number

   Task Given By :- Sanskriti Solse
   Roll No :-34




#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display numbers before swapping
    printf("\nBefore Swapping:\n");
    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);

    // Swapping using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display numbers after swapping
    printf("\nAfter Swapping:\n");
    printf("Number 1 = %d\n", num1);
    printf("Number 2 = %d\n", num2);

    return 0;
}
