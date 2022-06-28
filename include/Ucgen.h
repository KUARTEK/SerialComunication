#ifndef UCGEN_H
#define UCGEN_H
#include "Sekiller.h"
#include <iostream>
using namespace std;

class Ucgen : public Sekiller
{
public:
	void UcgenAlan(){
		ucgenTaban:
		cout << endl;
		cout << "Ucgenin taban kenar uzunlugunu giriniz: ";
		cin >> ucgentaban;
		if(ucgentaban<=0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto ucgenTaban;
		}
		else{
		ucgenYukseklik:
		cout << endl;
		cout << "Ucgenin yuksekligini giriniz:";
		cin >> ucgenyukseklik;
		if (ucgenyukseklik <= 0){
			cout << "ucgenin yuksekligi 0 veya negatif olamaz" << endl;
			goto ucgenYukseklik;
		}
		else{
		Alan = ucgentaban * ucgenyukseklik / 2;
		cout << endl;
		cout << endl << "GIRILEN UCGENIN BILGILERI" << endl;
		cout << "Ucgenin taban uzunlugu: ";
		cout << ucgentaban << endl;
		cout << "Ucgenin yuksekligi: ";
		cout << ucgenyukseklik << endl;
		cout << "Ucgenin alani: ";
		cout << Alan;
		}
		}
	}

	void UcgenCevre(){
		ucgenTaban:
		cout << endl;
		cout << "Ucgenin taban kenar uzunlugunu giriniz: ";
		cin >> ucgentaban;
		if(ucgentaban<=0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto ucgenTaban;
		}
		else{
		ucgenKenar2:
		cout << endl << "Ucgenin ikinci kenar uzunlugunu giriniz: ";
		cin >> kenar2;
		if (kenar2 <=0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto ucgenKenar2;
		}
		else{
		ucgenKenar3:
		cout << endl << "Ucgenin ucuncu kenar uzunlugunu giriniz: ";
		cin >> kenar3;
		if (kenar3 <=0){
			cout << "kenar uzunluk 0 veya negatif olamaz" << endl;
			goto ucgenKenar3;
		}
		else{
		Cevre = ucgentaban + kenar2 + kenar3;
		cout << endl;
		cout << endl << "GIRILEN UCGENIN BILGILERI" << endl;
		cout << "Ucgenin taban uzunlugu: ";
		cout << ucgentaban << endl;
		cout << "Ucgenin ikinci kenar uzunlugu: ";
		cout << kenar2 << endl;
		cout << "Ucgenin ucuncu kenar uzunlugu: ";
		cout << kenar3 << endl;
		cout << "Ucgenin cevresi: ";
		cout << Cevre;
		}
		}
		}
	}
};

#endif
