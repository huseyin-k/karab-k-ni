#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	struct ogrenci{
		char isim[15];
		char soyad[15];
		int numara;		
		
	};
	int main(){
		
		struct ogrenci ogrenciler[3];
		int i;
		for(i=0;i<3;i++){
			
			printf("%d inci ogrencinin bilgilerini girin:",i+1);
			scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyad,&ogrenciler[i].numara);
			
		}
		
		for(i=0;i<3;i++){
			
		printf("%s\t%s\t%d\n",ogrenciler[i].isim,ogrenciler[i].soyad,ogrenciler[i].numara);	
			
		}
		
		
		
		return 0;
	}
