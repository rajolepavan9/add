#include<stdio.h>
#include"add.h"
#include"fact.h"

int main()
{
int p,q,a,b;
scanf("%d %d",&a,&b);
p=sum(a,b);
q=fact(p);
printf("sum=%d",p);
printf("fact=%d",q);
}

