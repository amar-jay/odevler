#include<stdio.h>
#include<math.h>

// Soru:
// (Pisagor teoremi) Bir dik üçgen, tamamı tamsayılar olan
// üç kenara sahip olabilir. Bu üç kenar, iki kenarın kareleri 
// toplamı hipotenüsün karesine eşittir,bağıntısını sağlamalıdır.
// Kenar1, Kenar2 ya da hipotenüsü 500’den 
// büyük olmayan tüm dik üçgenleri bulan program.
int soru_12() {
    double sinir = 500;

    // Loop sayilar 1dan 500ye kadar
    for (int i=1; i<=sinir; i++) {
	for (int j=i; j<=sinir; j++) {
	    double i_kare = pow((double) i, 2);
	    double j_kare =  pow((double) j, 2);
	    if (i_kare + j_kare < sinir) break;

	    printf("kenar1:%d\tkenar2:%d\n", i, j);
	}
    }



    return 0;
}
