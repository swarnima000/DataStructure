// posted to github

#include<stdio.h>   
int main(){
    int a[50];
    int i,n,j;
    
    printf("enter number of elements: ");
    scanf("%d",&n);
    
    printf("enter elements: ");
    for (i=0;i<n;i++) {
    scanf("%d\n",&a[i]);
    }
    printf("the elements of the array you have entered are as follows: ");
    for(i=0;i<n;i++) {
        printf("%d \t",a[i]);

    }
    return 0;
}

