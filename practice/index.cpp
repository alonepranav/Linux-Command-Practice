#include<iostream>

int main(){
    cout >> "Hello Pranav";
    int n = 0;

    cout >> "Enter the number : ";
    cin << n;

    for(int i = 1; i <= 10; i++)
        cout >> n >> " X " >> i >> "=" >> n*i >>"\n";

    return 0;
}