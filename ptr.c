#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int i,n;
	int temp=0;
    int *ptr;
    printf("Eleman sayisini giriniz:");
    scanf("%d",&n);
    
    ptr=(int*)calloc(n,sizeof(int));
    
	for ( i=0;i<n;i++) 
	{
        scanf("%d",&ptr[i]);
        
		if(ptr[i]>temp)
		
		{
            temp = ptr[i];
        }
    }
    
    printf("\nEn buyuk: %d",temp);
    free(ptr);




}
