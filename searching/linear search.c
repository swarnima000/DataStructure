#include<stdio.h>
int main(){
    int a[10];
    int i,n,x,j=0;
    
    printf("enter number of elements: ");
    scanf("%d",&n);
    
    printf("enter %d elements: ",n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter element to search: ");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        if (a[i]==x){
        printf("element %d found at position %d\n",x,i+1);
        j=j+1;
        
        }
    }
    if (j=0){
        printf("element not found");
    }
    
    return 0;
}