#ifndef SETGETDENEME_H
#define SETGETDENEME_H

#include <iostream>
using namespace std;

class Kisi{
private:
    string ad;
    int yas;
    double boy;

public:
    void setAd(string ad){
        if (ad.length() < 30 && ad.length() > 2)
            this->ad = ad;
        else
        {
            cout << endl;
            cout << "Ad icin 2-30 arasinda harf giriniz" << endl;
        }
    }

    void setYas(int yas){
        if (yas > 0 && yas < 100)
            this->yas = yas;
        else
        {
            cout << "Yas icin 0-100 arasinda sayi giriniz" << endl;
            this->yas = -1;
        }
    }

    void setBoy(double boy){
        if (boy > 1.20 && boy < 2.20)
            this->boy = boy;
        else
        {
            cout << "Boy icin 1.20-2.20 arasinda sayi giriniz" << endl;
            this->boy = -1;
        }
    }

    string getAd(){
        return ad;
    }

    int getYas(){
        return yas;
    }

    double getBoy(){
        return boy;
    }
};

#endif