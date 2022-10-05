//merge two arrays // comes alot in aktu 

#include<stdio.h>
int main(){
	int a[50];
	int b[50];
	int c[100];
	int i,n,m,j;
	
	printf("enter number of elements for list 1: ");
	scanf("%d",&n);
	
	printf("enter %d elements: ",n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("enter number of elements for list 2: ");
	scanf("%d",&m);
	
	printf("enter %d elements: ",m);
	for (j=0;j<m;i++){
		scanf("%d",&b[j]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
		
		if (a[i]<b[j]) {
	
		scanf("%d",c[i]);
		i++;
 	}
		else{
			scanf("%d",c[i]);
			j++;
		}}
	printf ("%d",c[i]);
	}
	return 0;
}
