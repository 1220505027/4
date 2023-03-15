#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	
	char ad[25];
	char soyad[25];
	char adres[100];
	int no;
	
};

int main(){
	
	struct ogrenci ogr[5];
	int i;
	
	for(i=0;i<5;i++){
		
		printf("%d. ogrencinin adi: ",i+1);
		scanf("%s",ogr[i].ad);
		printf("%d. ogrencinin soyad: ",i+1);
	    scanf("%s",ogr[i].soyad);
		printf("%d. ogrencinin numarasi: ",i+1);
		scanf("%d",&ogr[i].no);
		printf("%d. ogrencinin adresi: ",i+1);
		scanf("%s",ogr[i].adres);
		printf("\n");
		
	}
	
	int j;
	int secim;
	
		
		printf("Hangi ogrencinin bilgilerini ogrenmek istiyorsunuz?\n1.%s %s\n2.%s %s\n3.%s %s\n4.%s %s\n5.%s %s\n",ogr[0].ad,ogr[0].soyad,ogr[1].ad,ogr[1].soyad,ogr[2].ad,ogr[2].soyad,ogr[3].ad,ogr[3].soyad,ogr[4].ad,ogr[4].soyad);
		scanf("%d",&secim);
		if(secim==1){
			printf("\n%s %s\n%d\n%s\n",ogr[0].ad,ogr[0].soyad,ogr[0].no,ogr[0].adres);
		}
		if(secim==2){
			printf("\n%s %s\n%d\n%s\n",ogr[1].ad,ogr[1].soyad,ogr[1].no,ogr[1].adres);
		}
		if(secim==3){
			printf("\n%s %s\n%d\n%s\n",ogr[2].ad,ogr[2].soyad,ogr[2].no,ogr[2].adres);
		}
		if(secim==4){
			printf("\n%s %s\n%d\n%s\n",ogr[3].ad,ogr[3].soyad,ogr[3].no,ogr[3].adres);
		}
		if(secim==5){
			printf("\n%s %s\n%d\n%s\n",ogr[4].ad,ogr[4].soyad,ogr[4].no,ogr[4].adres);
		}
	
	
	
	
	
	
	return 0;
}
