#include<stdio.h>

int main(){
    printf("Hello Pranav");
    int n = 0;

    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
        printf("%d X %d = %d", n, i, n*i);

    return 0;
}