#include <stdio.h>
    #include <string.h>
    void main()
    {
        int n;
        printf("Enter the value of n \n");
        scanf("%d", &n);
        char a[n][100], temp[100];
        int i, j;
 
        
        printf("Enter words \n");
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", a[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(a[i],a[j]) > 0) 
                {
                    strcpy(temp,a[i]);
                    strcpy(a[i],a[j]);
                    strcpy(a[j], temp);
                }
            }
        }
        printf("The sorted array is\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s\n",a[i]);
        }
 
    }
