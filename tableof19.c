#include<stdio.h>
int main (){
    int n ;
    printf("enter a number");
    scanf("%d", &n);
    for(int i =1;i<=n*10;i=i+1){
        if(i%n ==0){
        printf("%d ",i);
    }}
return 0;
}