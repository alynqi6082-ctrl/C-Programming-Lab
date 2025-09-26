#include<stdio.h>
#include<math.h>
int main(){

int m,n;

printf("Enter Number 1:");
scanf("%d",&m );
printf("Enter Number 2: ");
scanf("%d",&n);

(m>n) ? printf("%d is greater than %d",m,n) : printf("%d is greater than %d ",n,m);

return 0;
}
