#include <iostream>
#include "../include/Sekiller.h"
#include "../include/Dikdortgen.h"
#include "../include/Kare.h"
#include "../include/Ucgen.h"
#include "../include/Daire.h"
#include "../include/setgetdeneme.h"

using namespace std;

int main(){
	Dikdortgen DikdortgenAlan;
	Dikdortgen DikdortgenCevre;

	Kare KareAlan;
	Kare KareCevre;

	Ucgen UcgenAlan;
	Ucgen UcgenCevre;

	Daire DaireAlan;
	Daire DaireCevre;

	Kisi kisi1;

	kisi1.setAd("ahmet");
	kisi1.setYas(35);
	kisi1.setBoy(1.77);

	cout << endl;
	cout << "Ad: " << kisi1.getAd() << endl;
	cout << "Yas: " << kisi1.getYas() << endl;
	cout << "Boy: " << kisi1.getBoy() << endl;
	cout << endl;
	secimler:
	int secim;
	cout << "Dikdortgen -- 1" << endl;
	cout << "Kare -- 2" << endl;
	cout << "Ucgen -- 3" << endl;
	cout << "Daire -- 4" << endl;
	cout << "Sekil seciniz: ";
	cin >> secim;
	switch (secim){
	case 1:
		dikdortgenSecim:
		cout << endl;
		cout << "Dikdortgen alan -- 1" << endl;
		cout << "Dikdortgen cevre -- 2" << endl;
		cout << "Neyi hesaplayacaksin: ";
		cin >> secim;
		switch (secim){
		case 1:
			DikdortgenAlan.DikdortgenAlan();
			break;
		case 2:
			DikdortgenCevre.DikdortgenCevre();
			break;
		default:
			cout << "1 veya 2 giriniz" << endl;
			goto dikdortgenSecim;
		}
		break;
	case 2:
		kareSecim:
		cout << endl;
		cout << "Kare alan -- 1" << endl;
		cout << "Kare cevre -- 2" << endl;
		cout << "Neyi hesaplayacaksin: ";
		cin >> secim;
		switch (secim){
		case 1:
			KareAlan.KareAlan();
			break;
		case 2:
			KareCevre.KareCevre();
			break;
		default:
			cout << "1 veya 2 giriniz" << endl;
			goto kareSecim;
		}
		break;

	case 3:
		ucgenSecim:
		cout << endl;
		cout << "Ucgen alan -- 1" << endl;
		cout << "Ucgen cevre -- 2" << endl;
		cout << "Neyi hesaplayacaksin: ";
		cin >> secim;
		switch (secim){
		case 1:
			UcgenAlan.UcgenAlan();
			break;
		case 2:
			UcgenCevre.UcgenCevre();
			break;
		default:
			cout << "1 veya 2 giriniz" << endl;
			goto ucgenSecim;
		}
		break;

	case 4:
		daireSecim:
		cout << endl;
		cout << "Daire alan - 1" << endl;
		cout << "Daire cevre - 2" << endl;
		cout << "Neyi hesaplayacaksin: ";
		cin >> secim;
		switch (secim){
		case 1:
			DaireAlan.DaireAlan();
			break;
		case 2:
			DaireCevre.DaireCevre();
			break;
		default:
			cout << "1 veya 2 giriniz" << endl;
			goto daireSecim;
		}
		break;

	default:
		cout << "1, 2, 3 veya 4 giriniz" << endl << endl;
		goto secimler;
	}
}
