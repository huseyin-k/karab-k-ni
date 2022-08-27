#include<stdio.h>
#include<stdlib.h>
struct ogrenci{
	
	char isim[15];
	char soyisim[15];
	int yas;
	int numara;
	
	
	
	
	
};


int main(){
	struct ogrenci cetin={"huseyin","kurt",12,123};

    printf("%s %s %d %d",cetin.isim,cetin.soyisim,cetin.yas,cetin.numara);




	};
	
