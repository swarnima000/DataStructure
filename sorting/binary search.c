// wap to perform binary search

#include<stdio.h>
int main(){
    int a[10];
    int i,n,beg,end,mid,item,loc;
    beg=0;
    end=n-1;
    
    
    printf("enter number of elements: ");
    scanf("%d",&n);
    
    printf("enter elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter element to search: ");
    scanf("%d",&item);
    for(beg=0;beg<=end;beg++){
        if(item<a[mid]){
            end=mid-1;
        }
        else{beg= mid+1;}
        
    }
    
    mid=((beg+end)/2);
    
    if (a[mid]==item){
        loc=mid;
        printf("element %d found at location %d", item, loc);
    }
        else{
            printf("element not found");
        }

    
    
    
    return 0;
}