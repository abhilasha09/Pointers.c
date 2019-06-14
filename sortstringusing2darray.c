#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void input(int n,char a[n][100])
{
    printf("Enter the strings");
    for(int i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
}
void comp(const void *p1, const void *p2)
{
    return strcmp(* (char * const *) p1, * (char * const *) p2);

}
void output(int n,char a[n][100])
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
    printf("Enter the no.of.strings");
    scanf("%d",&n);
    char a[n][100];
    input(n,a);
    qsort(a,n,sizeof(char),comp);
    output(n,a);
}
