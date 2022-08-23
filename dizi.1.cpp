#include<stdio.h>
int main(){
     int toplam=0;	
    int sayilar[10];
	int i;
   	
	
	for (i=0;i<10;i++)
	{
		
	printf("lutfen sayilari girin:");
    scanf("%d",&sayilar[i]);
	
   }

		for (i=0;i<10;i++){	
	toplam+=sayilar[i];
		
   }	
     printf("sayilarin aritmetik ortalamasi:%d",toplam/10);
			
	return 0;
	
   }
