#include <stdio.h>
#include <conio.h>
void main() {
   
    char str[]="HELLO";
    int w,p;
    for(int i=0;i<=5;i++){
        p=i+1;
        printf("\n%-5.*s",p,str);
    }
}