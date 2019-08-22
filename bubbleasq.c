#include<stdio.h>
#include<stdlib.h>
void get_n(int *n)
{
	printf("Enter n\n");
	scanf("%d",n);
}
void input(int n,int a[])
{
	printf("Enter details\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int compare(int a,int b)
{
     if (a >b)
       return 1;
     else
        return 0;
}
int bubblesort(int a[],int n,int size,int *comp(int,int))
{
     for(int c=0;c<n-1;c++)
     {
         for(int d=0;d<n-c-1;d++)
         {
            int w=0;
            int swap=0;
            w=comp(a[d],a[d+1]);
            if(w==1) 
            {
                swap       = a[d];
                a[d]   = a[d+1];
                a[d+1] = swap;
            }
         }
     }
}
void main()
{
  int n,a1,b;
  a1=0;b=0;
  get_n(&n);
  int a[n];
  input(n,a);
  int (*comp)(int,int);  /* function pointer Declaration */
  comp = compare;  /* pointer assignment */
  bubblesort(a,n,sizeof(a),comp);
  printf("Sorted list in ascending order:\n");
 
  for (int c = 0; c < n; c++)
     printf("%d\n", a[c]);
 
}
