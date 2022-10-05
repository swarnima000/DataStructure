// wap to find and print repeated elements
// multiple outputs in case elements are repeated more than twice
// show non repeated elements

#include<stdio.h>
int main(){
	
	int a[50];
	int i,n,pos,j;
	//a= array, n= no of ele, i= loop
	printf("enter no of elements: ");
	scanf("%d",&n);
	
	
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[i]==a[j])
			{
				printf("repeated element is: %d\n",a[j]);
				break;
			}
    	//break;
    	}
	}
	return 0;
}
