// E6 - Primality Test

#include <stdio.h>

int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    
    while(t>0){
        int a,is_div=0;
        scanf("%d", &a);
        int x=a;
        
        for(int i=a; i>0; i--){
            if(a%x == 0) {
                is_div++;
            }  
            x--;
        }
        if(is_div == 2){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        t--;
    }
}