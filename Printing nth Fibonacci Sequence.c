#include<stdio.h>
int main()
{
  
int n, t1=0 , t2=1, next_term=0,i;
printf("Enter value of n");
scanf("%d",&n);
if("n==0 || n==1);
printf("%d",n);
else 
next_term=t1+t2;
for(i=3;i<=n;++i)
{
t1=t2;
t2=next_term;
}
printf("%d",t2);
}
