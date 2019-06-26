#include <stdio.h>

int main(void) {
	int n,i,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
		arr[i]=(arr[arr[i]]%n)*n+arr[i];
	for(i=0;i<n;i++)	
	    printf("%d",arr[i]/n);
	return 0;
}
