//Swap Numbers Function Variants

#include <stdio.h>
int func_swap(int,int);
int func_swap(int a, int b){
    int c,d;
    if(a!=b){
        c = ((a+b)-a); // c = new a = b
        d = ((a+b)-b); // d = new d = a
        
        printf("After swapping : a = %d and b = %d\n", c,d);
    }else{
        printf("After swapping : a = %d and b = %d\n", c,d);
    }
    return c,d;
}


int main() {
    int c,d;
    int a=5, b=10;
    // printf("Two given number are : %d , %d\n", a,b);
    printf("Before swapping : a = %d and b = %d\n", a,b);
    
    func_swap(a,b);
    
    //printf("\n After swapping : a = %d and b = %d", c,d);
    return 0;
}