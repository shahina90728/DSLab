#include<stdio.h>
#include<stdlib.h>
void insertion();
void delete();
void search();
void sort();
void display();
int array[100];
int num;
int n;
int main() {
printf("enter the no.of elements");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
scanf("%d",&array[i]);
}
printf("the array elements are:");
for(int i=0;i<num;i++){
printf("%d\n",array[i]);
}
while(1)
{
printf("enter a option:\n1:insertion\n2:deletion\n3:searching\n4:sorting\n5:display\n6:exit");
scanf("%d",&n);
switch(n)
{
case 1:
     insertion();
     break;
case 2:
     delete();
     break;
case 3:
     search();
     break;
case 4:
     sort();
     break;
case 5:
     display();
     break;
case 6:
     exit(0);
     break;
default: 
        printf("invalid option\n");
        break;
}
}
return 0;
}

void insertion()
{
int number;
printf("enter the no.to be inserted\n");
scanf("%d",&number);
array[num]=number;
num=num+1;
printf("the array elements are:\n");
for(int i=0;i<num;i++)
{
printf("%d\n" ,array[i]);
}
}

void delete()
{
int i,ind,j;
if(num>0)
{
printf("\nenter the index of element\n");
scanf("%d",&ind);
for(j=ind;j<num;j++)
array[j]=array[j]+1;
num =num-j;
}
else
{
printf("\narray is empty\n");
}
printf("the array elements are:\n");
for(int i=0;i<num;i++)
{
printf("%d\n", array[i]);
}
}

void search()
{
int num,toSearch,found,i;
printf("\nenter element to search:");
scanf("%d",&toSearch);
found=0;
for(i=0;i<num;i++)
{
if(array[i]==toSearch)
 {
 found=1;
 break;
 }
}
if(found==1)
{
printf("\n%d is found in position %d\n",toSearch,i+1);
}
else
{
printf("\n%d is not found in array \n",toSearch);
}
}

void sort()
{
int i,a,j;
for(i=0;i<num;i++)
{
for(j=i+1;j<num;++j)
{
if(array[i]>array[j])
{
a=array[i];
array[i]=array[j];
array[j]=a;
}
}
}
printf("\n numbers arranged in accending order are given below\n");
for(int i=0;i<num;i++)
{
printf("%d\n" ,array[i]);
}
}

void display()
{
int i;
printf("the array elements are:");
for(int i=0;i<num;i++)
{
printf("%d\n", array[i]);
}
}

