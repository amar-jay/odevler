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
void soru_04() {
  char birim[10];
  float sayi;
  puts("Desteklenen birimler:");
  puts("- metre\t->\tince\n- ince\t->\tmetre\n- metre\t->\tsantimetre\n- santimetre->\tmetre\n- litre\t->\tkuart\n- kuart\t->\tlitre\n- gram\t->\tons\n- ons\t->\tgram");
  printf("Sayi giriniz: ");
  scanf("%f", &sayi);
  printf("Hangi Birimddan giriniz: ");
  scanf("%s", birim);
  printf("Hangi Birime cevirmek istiyorsunuz: ");
  char birim2[10];
  scanf("%s", birim2);

  // eger birim2 birimden farkli olmazsa
  if (strcmp(birim, birim2) == 0 ) {
	printf("%.2f %s %.2f %s yapar\n", sayi, birim, sayi, birim2);
	return;
  } 

  // metre -> inç
  if (strcmp(birim, "metre") == 0 && strcmp(birim2, "ince") == 0) {
	printf("%.2f metre %.2f ince yapar\n", sayi, sayi*39.37);
	return;
  } 
  // inç -> metre
  if (strcmp(birim, "ince") == 0 && strcmp(birim2, "metre") == 0) {
	printf("%.2f ince %.2f metre yapar\n", sayi, sayi/39.37);
	return;
  } 

  // metre -> santimetre
  if (strcmp(birim, "metre") == 0 && strcmp(birim2, "santimetre") == 0) {
      printf("%.2f metre %.2f santimetre yapar\n", sayi, sayi*100);
    return;
  }

  // santimetre -> metre
  if (strcmp(birim, "santimetre") == 0 && strcmp(birim2, "metre") == 0) {
	printf("%.2f santimetre %.2f metre yapar\n", sayi, sayi/100);
	return;
  }

  // litre -> kuart
  if (strcmp(birim, "litre") == 0 && strcmp(birim2, "kuart") == 0) {
    printf("%.2f litre %.2f kuart yapar\n", sayi, sayi*1.057);
    return; 
  } 

  // kuart -> litre
  if (strcmp(birim, "kuart") == 0 && strcmp(birim2, "litre") == 0) {
      printf("%.2f kuart %.2f litre yapar\n", sayi, sayi/1.057);
      return; 
  } 

  // gram -> ons
  if (strcmp(birim, "gram") == 0 && strcmp(birim2, "ons") == 0) {
	printf("%.2f gram %.2f ons yapar\n", sayi, sayi*0.035);
	return;
  } 

  // ons -> gram
  if (strcmp(birim, "ons") == 0 && strcmp(birim2, "gram") == 0) {
  	printf("%.2f ons %.2f gram yapar\n", sayi, sayi/0.035);
    return;
  } 	



  printf("Birim bulunamadi, sadece (metre, ince, litre, kuart, gram, ons) giriniz.\n");
  return;
 // fgets(soru, 100, stdin);
}
