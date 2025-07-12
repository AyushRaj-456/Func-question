// e4 Series Sum Using Function Variants
// 1!/1+2!/2+3!/3+4!/4+5!/5

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
    int i,a,b, ans, final_ans=0;
    int n;
    
     printf("Enter a num : ");
     scanf("%d\n", &n);
   
   for(i=1; n>=1; i++){
      b = fun(n);
      ans = b/n;
      printf("%d!/%d = %d/%d = %d\n"
      ,n,n,b,n,ans);
      
      n = n-1;
      
      final_ans = final_ans + ans;
   }
   
   printf("Final sum = %d\n", final_ans);
    return 0;
}