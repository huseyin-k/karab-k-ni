#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	struct yerr{
		char sokak[15];
		char mahal[15];
		int evno;
		int sokakno;		
	};
	struct benn{
		char ismim[15];
		char soyisim[15];
		int kilo;
		float boy;	
	struct yerr yerim;
	};
	
	int main(){
	
	struct benn benim;
	strcpy(benim.ismim,"huseyin");
	strcpy(benim.soyisim,"kurt");
	benim.kilo=67;
    benim.boy=1.70;
    strcpy(benim.yerim.sokak,"yuzuncuyil");
	strcpy(benim.yerim.mahal,"bostanbuku");
	benim.yerim.evno=12;
	benim.yerim.sokakno=3;
	
	
	printf("%s\n",benim.ismim);
	printf("%s\n",benim.soyisim);
	printf("%d\n",benim.kilo);
	printf("%f\n",benim.boy);	
	printf("%s\n",benim.yerim.sokak);
	printf("%d\n",benim.yerim.evno);
	printf("%d\n",benim.yerim.sokakno);

	 return 0;
	}
	
