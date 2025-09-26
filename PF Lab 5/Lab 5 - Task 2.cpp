#include<stdio.h>
int main(){

int x,y,result;

printf("Enter Number 1: ");
scanf("%d",&x);
printf("Enter Number 2: ");
scanf("%d",&y);

result = (x>5) && (y<10);
printf("%d",result);

result = (x==10) || (y==5);
printf("%d",result);

result = !(x==y);
printf("%d",result);

}
