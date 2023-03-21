#include<stdio.h>
int main(){
    int a=5,b=7;
    if(a>b && a==6)//;       when semicolon is added then both statement prints
    printf("%d>%d",a,b);
    printf("%d>%d",b,a);

    return 0;
}