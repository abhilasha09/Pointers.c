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
            int l=strlen(a[i]);
            a[i]=malloc(l+1);
            scanf("%s",a[i]);
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
        printf("The sorted string is\n");
        for (i = 0; i < n; i++) 
        {
            printf("%s",a[i]);
        }
 
    }
