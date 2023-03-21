// #include<stdio.h>
// int main(){

//     return 0;
// }

#include <stdio.h>
int main()
{
    //first question
    printf("Hello VSSUT!");
    //second question
    printf("NAME-Sagar Satapathy\n");
    printf("BRANCH-CSE\n");
    printf("RED.G NO.-2202041056\n");
    printf("SECTION-D2\n");
    // third question
    int a, b, sum, sub, mul, div, rem;
    char ch='%';
    printf("enter the value of a and b\n");
    scanf("%d", &a);
    scanf("%d",&b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;
    printf("sum is  %d + %d =%d\n", a, b, sum);
    printf("sub is  %d - %d =%d\n", a, b, sub);
    printf("mul is  %d * %d =%d\n", a, b, mul);
    printf("div is  %d / %d =%d\n", a, b, div);
    printf("rem is  %d %c %d =%d\n", a,ch, b, rem);

    return 0;
}