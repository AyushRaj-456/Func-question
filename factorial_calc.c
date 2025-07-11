//Finding factorial of num using Function

#include <stdio.h>

int fun(int);
int fun(int n){
    int a;
    
    if (n==1 || n==0){
       a = 1; 
    }else{
        a = n*fun(n-1);
       // n=n-1;
    }
    return a;
}

int main() {
    int a, ans;
    int n;
    
     printf("Enter a num : ");
     scanf("%d\n", &n);
    
    ans = fun(n);
    
    printf("Factorial of %d = %d", n,ans);
    return 0;
}