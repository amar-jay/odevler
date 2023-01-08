#include <stdio.h>
#include "soru_01.c"
#include "soru_02.c"
#include "soru_03.c"
#include "soru_04.c"

int main(int argc, char** argv) {
  switch (atoi(argv[1])) {
    case 1:
	soru_01();
	break;
    case 2:
        soru_02();
	break;
    case 3:
	soru_03();
	break;
    case 4:
      soru_04();
      break;
    default:
      printf("Yanlis soru numarasi girdiniz.\n");
  }
}
