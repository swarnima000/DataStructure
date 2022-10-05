//insert an element into an array
// posted to github

#include<stdio.h>
int main(){
    int i,n,pos,ele;
    int a[50];
    
    printf("enter number of elements: ");
    scanf("%d",&n);
    
    printf("enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter position where you want to input a new value: ");
    scanf("%d",&pos);
    printf("enter value to be inserted: ");
    scanf("%d",&ele);
    for (i=n-1;i>=pos-1;i--){
        a[i+1]==a[i];
        a[pos-1]=ele;
    }
printf("final array is: ");
for (i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}
