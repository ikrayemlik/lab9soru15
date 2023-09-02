#include <stdio.h>
#include <stdlib.h>

/* Bu soru, C programlama dilini kullanarak öðrencilerin bilgilerini (ad, soyad, öðrenci numarasý, vb.) depolamak için
 bir yapý (structure) kullanarak bir örnek oluþturmanýzý istiyor.
 Özellikle, bu örnekte 5 öðrencinin bilgilerini bir yapý dizisi (array of structures) kullanarak saklamanýz gerekiyor. */
struct bilgi
{
	char name[10];
	char surname[15];
	int number;
};
int main() {
 struct bilgi students[5];	
int i;
for(i=0;i<5;i++)
{
	printf("%d. ogrenci:\n ",i+1);
	printf("ogrenci adi giriniz");
	scanf("%s",&students[i].name);
	printf("ogrenci soyadi giriniz");
	scanf("%s",&students[i].surname);
	printf("ogrenci no giriniz");
	scanf("%d",&students[i].number);
	}	
	 printf("\nKaydedilen Öðrenci Bilgileri:\n");
    for (int i = 0; i < 5; i++) {
        printf("Öðrenci %d:\n", i + 1);
        printf("Ad: %s\n", students[i].name);
        printf("Soyad: %s\n", students[i].surname);
        printf("Öðrenci Numarasý: %d\n", students[i].number);
        printf("\n");
    }
	
	
	
	
	
	return 0;
}
