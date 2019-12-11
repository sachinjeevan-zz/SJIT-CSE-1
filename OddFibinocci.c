#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=1,c,d;
    printf("%d %d ",a,b);
    c=2*b+a;
    int count=1;
    while(c<=n){
        
        if(count%2==0){
            d=a+b+c;
            printf("%d ",d);
            a=c;
            b=d;
            c=2*b+a;
        }
        else{
            printf("%d ",c);
        }
        count++;
    }
    
}