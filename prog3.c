#include <stdio.h>
int main(){
int a,b,c;
float average;
printf("Enter Three Number: ");
scanf("%d %d %d",&a,&b,&c);
average=(a+b+c)/3.0;
printf("Average=%.3f",average);
return 0;
}
