#include<stdio.h> 

//Soru:
//Bir şirket, müdürlerine (sabit haftalık ücret alırlar), vardiyalı
//işçilerine (40 saate kadar sabit saatlik ücret ve sonrası için 
//saatlik ücretin 1.5 katı alırlar), komisyon işçilerine 
//(sabit 250$ ve haftalık brüt satışların %5.7 sini alırlar) yada
//parça işçilerine (ürettiği her malzeme başına sabit ücret alırlar 
//-- her parça işçisi tek bir malzeme üzerinde çalışır--)
//maaş vermektedir. Her çalışan tipinin haftalık maaşını hesaplayan 
//bir program yazınız. Kaç çalışan olduğunu bilmiyorsunuz. Her tipte
//çalışanın kendi maaş kodu vardır. müdürler 1, vardiyalı işçiler 2,
//komisyon işçileri 3 ve parça işçileri 4. Bu maaş kodlarına göre
//çalışanların maaşları hesabı için, switch yapısı kullanın. 
//switch içerisinde kullanıcının gerekli değerleri girmesini sağlayın.
// // NOT DONE
// ANlamiyorum saru
int soru_13() {
    int hafatalik, saat, tip;

    puts("müdürler 1,\n vardiyalı işçiler 2,\n komisyon işçileri 3 \nve parça işçileri 4.")
    scanf("%d", &tip);
    puts("Işçinin saati");
    scanf("%d", &saat);

    switch tip {
	case 1:
	case 2:
	case 3:
	case 4:
	default:
	    puts("Bu  işci tipi yoktur");
	    return 1;
    }



    return 0;
}
