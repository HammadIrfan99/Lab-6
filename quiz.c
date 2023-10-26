// Write a program that prompts the user to enter two integers x and y.
// It then calculates and prints the product of all the even numbers between x and y

#include <stdio.h>
int main(void)
{ 
    int x, y , product = 1;
    printf("Enter two integers x and y: ");
    scanf("%d%d",&x,&y);
    int z = x+1;
    for(int z ; z < y; z++)
    {
        if( z % 2 == 0)
        product *= z;
    }
    printf("The product is : %d",product );
}

