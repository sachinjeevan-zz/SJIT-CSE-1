#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=0,c;
    c=a+b;
    while(c<=n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    
}