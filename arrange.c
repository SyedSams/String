#include<stdio.h>
#include<stdlib.h>

void main()
{
	char string[100], substring[100];   
	int strLen,subLen,T;

        	printf("Enter the number of Test case: ");
        	scanf("%d", &T);

        while( T > 0){ 
        	printf("\nEnter a string: ");
		scanf("%s",string);
		printf("\nEnter the sub string: ");
        	scanf("%s",substring);
      
        strLen=len(string);
	subLen=len(substring);


        int len(char str[]){ 
        int i;

        for (i = 0; str[i] != '\0'; ++i);
        	return i;
    }

        
        int isSubstring(char *s1, int strLen, char *s2, int subLen){
 
        for (int i = 0; i <= strLen - subLen; i++) {
             int j;
    	for (j = 0; j < subLen; j++)

        	if (s2[i + j] != s1[j])
                	break;

                	if (j == subLen)
                	    return i;
	}
     return -1;
   }

        int r=isSubstring(string,strLen,substring,subLen);
        if(r == -1)
           printf("NO \n");

         	else
                  printf("YES \n");
                    T--;     
   }
}
