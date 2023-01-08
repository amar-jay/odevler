/**
 * Kullanıcının “enter” e basıncaya dek girdiği metin içerisinde alfabenin her harfinin kaç kez
bulunduğunu strchr fonksiyonunun yardımıyla bulan bir program yazınız. Büyük ve küçük harfleri
beraber sayın. Sonuçları histogram grafiği ile ekrana yazdırınız (ilgili harf sayacı kadar *
koyulabilir).
*/
#define HARF_SAYISI 36
#include <stdio.h>
#include <string.h>
int soru_02() {
  char metin[100];
  char harfler[HARF_SAYISI] = "1234567890abcdefghijklmnopqrstuvwxyz"; //array of all possible characters
  int harf_sayaci[HARF_SAYISI] = {0}; // fill with zeros
  printf("Metin giriniz: ");
  fgets(metin, 100, stdin);
 // printf("%s", metin);

  // store the length of the string in array<harf_sayaci>
  for (int i = 0; i < HARF_SAYISI; i++) {
    char *p = metin;

    while ((p = strchr(p, harfler[i])) != NULL) {
	    harf_sayaci[i]++;
	    p++;
    }
  }

  // print the histogram
  printf("|%5s| %10s| %s\n", "Harf", "Sayisi", "Grafik");
  for (int i=0; i<HARF_SAYISI; i++) {
    if (harf_sayaci[i] <=0) continue;
    printf("|%5c| %10d| ", harfler[i], harf_sayaci[i]);
    for (int j = 0; j < harf_sayaci[i]; j++) {
	    printf("*");
    }
    printf("\n");
  }
  return 0;
}
