#include <stdio.h>
#include <stdlib.h>

/* Bu soru, C programlama dilini kullanarak ��rencilerin bilgilerini (ad, soyad, ��renci numaras�, vb.) depolamak i�in
 bir yap� (structure) kullanarak bir �rnek olu�turman�z� istiyor.
 �zellikle, bu �rnekte 5 ��rencinin bilgilerini bir yap� dizisi (array of structures) kullanarak saklaman�z gerekiyor. */
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
	 printf("\nKaydedilen ��renci Bilgileri:\n");
    for (int i = 0; i < 5; i++) {
        printf("��renci %d:\n", i + 1);
        printf("Ad: %s\n", students[i].name);
        printf("Soyad: %s\n", students[i].surname);
        printf("��renci Numaras�: %d\n", students[i].number);
        printf("\n");
    }
	
	
	
	
	
	return 0;
}
