
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int input(int n,char *a[n])
{
	char temp[100];
	for(int i=0;i<n;i++)
	{
		printf("Word %d:\n",i+1);
		scanf("%s",temp);
		int l=strlen(temp);
		printf("%d\n",l);
		a[i]=malloc(l+1);
		strcpy(a[i],temp);
	}
}
int comp(const void *p,const void *q)
{
                           
    const char *x = p;
    const char *y = q;
    int val = strcmp(x,y);
    return val;
}
void output(int n,char *a[n])
{
	printf("The sorted string is\n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}
void main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	char *a[n];
	input(n,a);
	qsort(a,n,sizeof(char *),comp);
	output(n,a);
}
