#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
int n,i,j,count=0;
char *a;
scanf("%d",&n);
a=(char *)malloc(sizeof(char)*n);
//c=(char *)malloc(sizeof(char)*n);

for(i=0;i<n;i++)
{
    char d;
    scanf(" %c",&d);
    *(a+i)=d;
}
for(i=0;i<n;i++)
{

    *(a+i)=toupper(*(a+i));
}
for(i=0;i<n;i++)
{
    for(j=0;j<i;j++)
    {
        if(*(a+i)==*(a+j))
        {
           
            *(a+i)='1';
        }
    }
}
for(i=0;i<n;i++)
{
    if(*(a+i)!= '1')
    count++;
}
    printf("%d",count);





	
	
	return 0;
}
