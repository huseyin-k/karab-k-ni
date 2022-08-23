#include<stdio.h>
	int asalsayilar(int i)
	{
	
   
    int asal;
   
     for (asal=2;asal<i;++asal)
	 {
     	
     	if(i%asal==0)
		 {
		 
     	return 0;
     	}
     	
     	return 1;
	 }
   
    }
   
    
   
   int main(){
   	
   	int n;
   	
   	printf("lutfen bir sayi girin:");
   	scanf("%d",&n);
   	
   	
   	if(asalsayilar(n)==0){
   		
   		printf("asal degil:");
	   }
   	
   	else{
   		
   		printf("asal sayidir:");
   	
   		
   		
   		
	   }
   	
   	
   	
    }
