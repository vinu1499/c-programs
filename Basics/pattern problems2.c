#include <stdio.h>

int main() {
	int r,i,j,c=0;
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
	    for(j=1;j<=i;j++)
	    {
	    	if(i==j)
	    	printf("%3d\n",++c);
	    	else
	        printf("%3d *",++c);
	        
	    }
	    printf("\n");
	}
	
	return 0;
}


output:
  1

  2 *  3

  4 *  5 *  6

  7 *  8 *  9 * 10
