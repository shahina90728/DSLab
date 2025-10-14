#include <stdio.h>

void main()
{
int a,p,l,b;
printf("Enter length and breadth");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
printf("Area is %d perimeter is %d", a,p);
}
