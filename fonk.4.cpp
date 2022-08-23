#include<stdio.h>
 int carp(int matris[],int  n)
	{
    	
    int	carpim=1;
    int i=0;
    
    for(;i<n;i++)
    {
	
	carpim*=matris[i];
	
	}
    	
    return carpim;
    	
	}
   
   int main()
   {
   	
   	int sayilar[]={1,2,3,4,5};
   	
   	printf("%d",carp(sayilar,5));
   	
   	
   	
   	
   	
   }
