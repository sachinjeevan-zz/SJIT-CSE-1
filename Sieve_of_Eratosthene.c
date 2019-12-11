#include<stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n-1];
for(int i=0;i<=n-2;i++){
    arr[i]=i+2;
}
int incr;
for(int i=0;arr[i]<=sqrt(n);i++){
    if(arr[i]!=0){
        if(arr[i]==2){
            incr=2;
        }
        else{
            incr=2*arr[i];
        }
        for(int j=(arr[i]*arr[i]-2);j<=n-2;j+=incr){
            arr[j]=0;
        }
    }
}
for(int i=0;i<=n-2;i++){
    if(arr[i]!=0){
        printf("%d ",arr[i]);
    }
}
}