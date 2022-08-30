#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct ogrenci{
	
	char isim[15];
	char soyisim[15];
	int numara;
		
};
struct ogrenci *degeral(struct ogrenci*p){

  strcpy(p->isim,"cetin");
  strcpy(p->soyisim,"yazici");
  p->numara=18;


    return p;


}
void goster(struct ogrenci*p){
	
	
	printf("%s %s %d\n",p->isim,p->soyisim,p->numara);
	
	
}

int main(){
	struct ogrenci *tut;
	struct ogrenci ogrenci1={"huseyin","kurt",14};
	
    tut=degeral(&ogrenci1);
	printf("%s %s %d\n",tut->isim,tut->soyisim,tut->numara);
}

