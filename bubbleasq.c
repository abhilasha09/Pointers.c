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
}
int bubblesort(int a[],int n,int size,int comp)
{
     for(c=0;c<n-1;c++)
     {
         for(d=0;d<n-c-1;d++)
         {
            w=comp(a[d]>a[d+1]);
            if(w==1) 
            {
                int swap       = a[d];
                a[d]   = a[d+1];
                a[d+1] = swap;
            }
         }
     }
}
void main()
{
  int n,a,b;
  a=0;b=0;
  get_n(&n);
  int a[n];
  input(n,a);
  compare(a,b);
  int (*comp)(int,int);  /* function pointer Declaration */
  comp = compare;  /* pointer assignment */
  bubblesort(a,n,sizeof(a),comp);
  printf("Sorted list in ascending order:\n");
 
  for (int c = 0; c < n; c++)
     printf("%d\n", array[c]);
 
}
