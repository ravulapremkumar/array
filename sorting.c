#include<stdio.h>
int main(){
    int a[6]={1,4,6,7,8,9};
    int b[6]={2,5,9,8,4,1};
    int c[12];
    //printing 1st array
    printf("1st array elements are");
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }
    //printing 2 nd array
    printf("2nd array elements are");
    for(int j=0;j<6;j++){
        printf("%d",b[j]);
    }
    //merging two arrays
    for(int k=0;k<6;k++){
        c[k]=a[k];
        c[k+6]=b[k];

    }
    //printing merged array
     printf("merged array elements are");
    for(int l=0;l<12;l++){
        printf("%d",c[l]);
    }
    
    //sorting the merged array
    for (int i = 0; i < 12; i++){  
      for (int j = i + 1; j < 12; j++){  
       int temp = 0;  
         if (c[i] > c[j])   
          {  
             temp = c[i];  
             c[i] = c[j];  
             c[j]=temp;
          }
      }
    //printing merged array after sorted
    
    printf("%d\t",c[i]);
    }
     
    return 0;
}