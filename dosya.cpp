#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	
	char dizi[100];
	FILE *dosyayaz =fopen("deneme3.txt","w");
	printf("dosya olusuturuldu\n");
	printf("veri girisi yapiniz:");
	
	gets(dizi);
	
	fprintf(dosyayaz,dizi);
	printf("veri girisi gerceklesti:\n");
	
	fclose(dosyayaz);
	
	
	FILE *dosyaoku =fopen("deneme3.txt","r");
	
	while(!feof(dosyaoku)){
		
		fputchar(fgetc(dosyaoku));
			}
	printf("\nokuma islemi gerceklesti:\n");
	fclose(dosyaoku);
	
	
	int sonuc=remove("deneme3.txt");
	if(sonuc==0){
		
		printf("silme islemi tamamlandi.");
		}
	else
	printf("silme islemi basarisiz");
	
	
	
	
	
	
	
	return 0;
	
}
























	
	

	
