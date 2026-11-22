#include <stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
void main() {
    int n;
    //printf("Enter a Number :");
    scanf("%d",&n);
    int cp=n,s=0,r=0;
    while(cp>0){
        r=cp%10;
        cp=cp/10;
        s+=factorial(r);
            }
    if(s==n){
        printf("Strong Number");
    }
    else{
        printf("Not a Strong Number");
    }
    
}
