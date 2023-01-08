/**
 * (Metin analizi) Bilgisayarların string uygulama alıştırmalarında yüksek kapasitelere sahip olmaları,
bazı büyük yazarların yazılarına değişik yaklaşımlarda bulunulmasına yol açmıştır. En çok William
Shakespeare üzerine dikkat çekilmiştir. Bazı dil bilimcilerin Christopher Marlowe’un yazılarının
Shakespeare’ın yazılarına benzerliği konularında ciddi kanıtları vardır. Araştırmacılar bu iki yazarın
yazılarındaki benzerlikleri bulmak için bilgisayar kullanmışlardır. Bu alıştırma, metinlerin
bilgisayarla analizi ile ilgili üç metot içermektedir.
a. Bir kaç satırlık bir metni okuyan ve bu metinde her harfin kaç kez içerildiğini hesaplayan
bir program yazınız. Örneğin, aşağıdaki paragraf 5 adet “a”, 2 adet “k” içermektedir.

Olmak, ya da olmamak: işte bütün mesele bu!

b. Bir kaç satırlık bir metni okuyan ve bu metin içersinde iki harften, üç harfen, dört harften
vb. oluşan kaçar kelime olduğunu hesaplayan bir program yazınız. Örneğin
Bu soylunun acı çekme niyetinde olması ne fark eder

cümlesi aşağıdakileri içerir.
*/
#define HARF_SAYISI 36
#include <stdio.h>
#include <string.h>
int soru_03_a(char *metin, char *harfler);
int soru_03_b(char *metin, char *harfler);
int soru_03_c(char *metin);

int soru_03() {
  char metin[100];
  char harfler[HARF_SAYISI] = "1234567890abcdefghijklmnopqrstuvwxyz"; //array of all possible characters
  printf("Metin giriniz: ");
  fgets(metin, 100, stdin);
  printf("Hangi yontem giriniz: (a, b)");
  char yontem;
  scanf("%c", &yontem);
  switch (yontem){
    case 'a':
      soru_03_a(metin, harfler);
      break;
    case 'b':
      soru_03_b(metin, harfler);
      break;
    case 'c':
      soru_03_c(metin);
      break;
    default:
      printf("Error:\tYontem bulunamadi. Yanlis giris yaptiniz.\n");
      break;
  }

  return 0;
  //return soru_03_b(metin, harfler, harf_sayaci);
}

// soru 3a
int soru_03_a(char *metin, char *harfler) {

  int harf_sayaci[HARF_SAYISI] = {0}; // fill with zeros
  // store the length of the string in array<harf_sayaci>
  for (int i=0; i<HARF_SAYISI; i++) {
    char *ptr = metin;

    while ((ptr = strchr(ptr, harfler[i])) != NULL) {
      harf_sayaci[i]++;
      ptr++;
    }
  }

  // print graph
  printf("|%5s| %5s|\n", "Harf", "Sayisi");
  for (int i=0; i<HARF_SAYISI; i++) {
		if (harf_sayaci[i] <=0) continue;
		printf("|%5c| %5d|\n", harfler[i], harf_sayaci[i]);
	}

  return 0;

}

// soru 3b
#define MAX_KELIME 100
int soru_03_b(char *metin, char *harfler) {
  char* p = strtok(metin, " ");
  int count[MAX_KELIME] = {0}; // fill with zeros

  // store the length of the string in array<count>
  while (p != NULL) {
    // string length
    int kelime_len = strlen(p);

    ++count[kelime_len];
    p = strtok(NULL, " ");
  }

  // print graph
  printf("|%8s| %8s|\n", "Uzunluğu", "Sayisi");
  for (int i=0; i<MAX_KELIME; i++) {
    if (count[i] <=0) continue;
	printf("|%8d| %8d|\n", i, count[i]);
  }
      
  return 0;
}

int soru_03_c(char *metin){
  char kelimeler[100][100];
  char* p = strtok(metin, " ");
  int count = 0;
  while (p != NULL) {
		strcpy(kelimeler[count], p);
		count++;
		p = strtok(NULL, " ");
	}
  for (int i=0; i<count; i++) {
    for (int j=i+1; j<count; j++) {
      if (strcmp(kelimeler[i], kelimeler[j]) == 0) {
	  printf("Benzer kelime: %s\n", kelimeler[i]);
      }
    }
  }
  
  return 0;
}
