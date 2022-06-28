#ifndef DAIRE_H
#define DAIRE_H
#include "Sekiller.h"
#include <iostream>
using namespace std;

class Daire : public Sekiller
{
public:
	void DaireAlan(){
		daireYaricap:
		cout << endl;
		cout << "Dairenin yaricapini giriniz: ";
		cin >> yaricap;
		if (yaricap <= 0){
			cout << "Dairenin yaricapi 0 veya negatif olamaz" << endl;
			goto daireYaricap;
		}
		else{
			Dairealan = pi * yaricap * yaricap;
			cout << endl <<"GIRILEN DAIRENIN BILGILERI" << endl;
			cout << "Dairenin yaricapi: ";
			cout << yaricap << endl;
			cout << "Dairenin alani: ";
			cout << Dairealan;
		}
	}

	void DaireCevre(){
		daireYaricap:
		cout << endl;
		cout << "Dairenin yaricapini giriniz: ";
		cin >> yaricap;
		if (yaricap <= 0){
			cout << "Dairenin yaricapi 0 veya negatif olamaz" << endl;
			goto daireYaricap;
		}
		else{
			Dairecevre = 2 * pi * yaricap;
			cout << endl << "GIRILEN DAIRENIN BILGILERI" << endl;
			cout << "Dairenin yaricapi: ";
			cout << yaricap << endl;
			cout << "Dairenin cevresi: ";
			cout << Dairecevre;
		}
	}
};

#endif
