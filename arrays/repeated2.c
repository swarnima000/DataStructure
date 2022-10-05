// wap to find repeated elements and print it only once

#include<stdio.h>
int main(){
	
	int a[50];
	int i,n,pos,j,k=0;
	int b[50];
	//a= array, n= no of ele, i= loop
	printf("enter no of elements: ");
	scanf("%d",&n);
	
	printf("enter %d elements: ",n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[i]==a[j])        // repeated elements are recognized
			{
			    b[k]=a[i];                // input repeated elements in a new array c
				k++;

                for(i=0;i<k;i++)
            {
                for(j=0;j<k-1-i;j++)
                {  
                    if(c[j]==c[i]);
                    printf("%d",c[i])
                    printf("")
                }
            }
			}
			for (i=0;i<=k;i++)                         // print array c
			{
			printf("repeated elements: %d",b[k]);
			}
    	
    	}
	}
	return 0;
}