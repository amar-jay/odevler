/**
 * (Metrik Çevirme Programı) Kullanıcıya metrik sistemlerin birbirlerine çevrilmesinde yardımcı
olacak bir program yazınız. Programınız kullanıcının birimleri string olarak belirtmesine izin
vermelidir.(Örneğin, metrik sistem için santimetre, litre, gram vb ve İngiliz sistemi için inç, pound
vb.) Programınız aşağıdaki gibi sorulara cevap vermelidir.
“2 metre kaç inç yapar?”
“10 kuart kaç litre yapar?”
*/
#include <stdio.h>
#include <string.h>
int soru_04() {
  char birim[10];
  float sayi;
  printf("Sayi giriniz: ");
  scanf("%f", &sayi);
  printf("Birim giriniz: ");
  scanf("%s", birim);
  if (strcmp(birim, "metre") == 0) {
		printf("%f metre %f ince yapar\n", sayi, sayi*39.37);
	} else if (strcmp(birim, "ince") == 0) {
		printf("%f ince %f metre yapar\n", sayi, sayi/39.37);
	} else if (strcmp(birim, "litre") == 0) {
		printf("%f litre %f kuart yapar\n", sayi, sayi*1.057);
	} else if (strcmp(birim, "kuart") == 0) {
		printf("%f kuart %f litre yapar\n", sayi, sayi/1.057);
	} else if (strcmp(birim, "gram") == 0) {
		printf("%f gram %f ons yapar\n", sayi, sayi*0.035);
	} else if (strcmp(birim, "ons") == 0) {
		printf("%f ons %f gram yapar\n", sayi, sayi/0.035);
	} else {
		printf("Birim bulunamadi");
	}
	return 0;
 // fgets(soru, 100, stdin);
}
