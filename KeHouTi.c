#include<stdio.h>
int main(void){
    int m,n,x;
    printf("Enter two integers:");
    scanf("%d %d",&m,&n);
    if(m>0&&n<2^31){
if(0<m&&n<2^31){
    if(m<n)
    {x=m; 
     m=n;
     n=x;}
        while(n!=0){
          int i;
          if(m>=n)i=m%n;
          else i=n%m;
           m=n;
           n=i;
        }
        if(n==0){printf("Greatest common divisor:%d",m);}}
    }