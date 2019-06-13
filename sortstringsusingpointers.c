    #include <stdio.h>
    #include <string.h>
    #include<stdlib.h>
    void main()
    {
        int n;
         printf("Enter the value of n \n");
        scanf("%d", &n);
        
        char *a[n],*temp;
        int i, j;
 
        printf("Enter words");
 
        for (i = 0; i < n; i++) 
        {
            a[i]=malloc(100);
            scanf("%s",a[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(a[i],a[j]) > 0) 
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]= temp;
                }
            }
        }
        printf("The sorted string is\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s\n",a[i]);
        }
 
    }
