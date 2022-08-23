#include<stdio.h>
    
    
   int faktoriyel(int sayi,int factor=1){
    
    
    
    
    
    for (;sayi>0;--sayi){
    	
    	
    	factor*=sayi;
   }
	return factor;
	
   
        
    }
    int main(){
    	
    	int n;
    	
    	
    	printf("faktoriyeli alýnacak sayiyi girin:");
    	
    	scanf("%d",&n);
    	
    	
    	printf("%d",faktoriyel(n));
    	    	
	}
