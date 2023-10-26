#include <stdio.h>
int main(void) // First code
{   
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= i; j++)
            printf("*"); // Here printf * is in inner loop
        printf("\n");  // And this new line is in outer loop
    }
    printf("\n");   // 2nd code    
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 10; j >= i; j--)
            printf("*");    // Here printf * is in inner loop
        printf("\n");   // And this new line is in outer loop
    }
    printf("\n"); // 3rd code
    for(int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= (i-1); j++)
            printf(" ");   // Here printf( ) is in first inner loop
        for( int j = 10; j >= i; j--)
            printf("*");  // Here printf * is in second inner loop
        printf("\n");    // And this new line is in outer loop
    }  
    printf("\n");  // 4th code
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 10; j >= (i+1); j--)
            printf(" ");  // Here printf( ) is in first inner loop
        for(int j = 1; j <= i; j++)
            printf("*");   // Here printf * is in second inner loop
        printf("\n");   // And this new line is in outer loop
    }
}


