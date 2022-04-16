#include <stdio.h>
#include <string.h>
#define N 5
 int main()
 {
 	char s[N][81];
 	char t[81];
 	int i,j;
 	printf("ÇëÊäÈë%d¸ö×Ö·û´®£»\n",N);
 	for (i=0;i<N;i++)
 	scanf("%s",s[N]);
 	for (j=0;j<N-1;j++)
 	 for(i=0;i<N-1-j;i++)
 	   if(strcmp(s[i],s[j])>0)
 	    {
 	    	strcpy(t,s[i]);
 	    	strcpy(s[i],s[j]);
 	    	strcpy(s[i+1],t);
		 }
		 printf ("ÅÅÐòºóµÄ×Ö·û´®£º\n",N+1);
		 for (i=0;i<N;i++)
		 printf ("%s\n",s[i]);
		 return 0;
}
