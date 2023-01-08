/**
 * Kullanıcıdan (555) 555-5555 formunda bir telefon numarasını string şeklinde alan bir program
yazınız. Program, strtok fonksiyonunu kullanarak alan kodunu bir atom, ilk üç rakamı bir atom ve
son dört rakamı ayrı bir atom olarak açmalıdır. Telefon numarasının yedi rakamıyla bir string
oluşturunuz. Programınız, alan kodunu int tipine, ve geri kalan numaraları da long tipine çevirerek
ekrana yazmalıdır.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int soru_01() {
  char tel[15];
  char *alan_kodu, *ilk_uc, *son_dort;
  puts("Ornegin: (555)555-5555");
  printf("Telefon numaranizi giriniz: ");
  // Ornegin: (555) 555-5555
  scanf("%s", tel);

  alan_kodu = strtok(tel, "()");
  ilk_uc = strtok(NULL, "-");
  son_dort = strtok(NULL, " ()-");

  printf("Alan kodu: %d \nIlk uc: %ld \nSon dort: %ld", atoi(alan_kodu), atol(ilk_uc), atol(son_dort));
  puts("");
  return 0;
}
