#include<stdio.h>

  
  /* int main(){
   	
   	char isim[20];
   	
   	printf("lutfen bir isim girin:");
   	scanf("%s",isim);
   	
   	printf("isim:%s",isim);
   	
   	return 0;   	
   }*/
   int main(){
   	
   	int matris[3][3];
   	int i,j;
   
   
    for(i=0;i<3;i++)
    { 
   
       for(j=0;j<3;j++){
   	    scanf("%d",&matris[i][j]);
      }
      }
	
		 
	    for(i=0;i<3;i++){
		  	for(j=0;j<3;j++){
      
			  
   		printf("%d ",matris[i][j]);
      }
    printf("\n");
     
     }
   	return 0;

   }
   	
