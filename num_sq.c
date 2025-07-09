// E1 Square of num using function

#include <stdio.h>

int func(int,int);

int func(int a, int b){
    a = b*b;
    return a;
}


int main() {
    int a,b,c;
    printf("Enter the num you want the square of : ");
    scanf("%d\n", &b);
    
    c = func(a,b);
    printf("The square of %d = %d", b,c);
    return 0;
}