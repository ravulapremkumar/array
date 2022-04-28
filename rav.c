#include<stdio.h>
int main()
   {
    int b[100],i,j,n=5,c=0;

   
   int a[5]={1 ,2 ,3 ,2 ,4};
    for(i=0; i<n; i++)
    printf("%d\n",a[i]);
    
    //logic for unique elements
  for(i=0; i<n; i++)
    {
        c=1;
        if(a[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
     
            {
        	   if(a[i]==a[j])
        	    {
			       c++;
			       a[j]=-1;
		       }
	       }
	       b[i]=c;

     
            
        }
   }
 
  printf("unique numbers in the  array are \n");
            
         
  for(i=0; i<n; i++)
    {
         if(a[i]!=-1)
        {
        	if(b[i]==1)
        	printf("%d\n",a[i]);
 
		} 
       
        
         
    }
    return 0;
 }
    
