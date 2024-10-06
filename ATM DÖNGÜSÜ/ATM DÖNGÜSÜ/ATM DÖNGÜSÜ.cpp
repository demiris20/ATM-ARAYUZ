#include <iostream>
#include <math.h>                                          // case lerin sonuna breaklaeri koymayı unutmussun
using namespace std;

int main(){
	
	while (true) {
		int sifre = 8520;
		int deneme;
		cout << "Lutfen sifrenizi giriniz :";
		cin >> deneme;

		if (deneme == sifre) {
			break;		}
		else {
			cout << "Sifreniz yanlis!!!!!  Lutfen tekrar deneyiniz\n";}
	}

	cout << "Hosgeldiniz\n";
    
	float bakiye = 10000;
	int borc = 1000;
	while (true) {

		cout << "1= Hesapdan para cekme\n";
		cout << "2= Hesaba para yatirma\n";
		cout << "3= Kredi kart borc bakiyesi sorgulama\n";
		cout << "4= hesapdan hesaba havale\n";
		cout << "5= cikis\n\n";
		int islem;

		while (true) {
			cout << "Yapmak istediginiz islemi tuslayiniz\n";
			cin >> islem;

			if (islem > 5 || islem <= 0) {
				cout << "Gecersiz numara tusladiniz tekrar deneyiniz\n";
			}
			else { break; }
		}

		

		switch (islem) {

			int nakit;
		case 1:

			while (true) {
				cout << "Hesabinizda ki bakiyeniz :" << bakiye << "$\n";
				cout << "Cekmek istediginiz miktari giriniz :\n";
				cin >> nakit;
				if (nakit >= bakiye) {
					cout << "Yetersiz bakiye, TEKRAR DENEYİNİZ\n";
				}
				else {
					bakiye -= nakit;
					cout << "Kalan bakiyeniz :" << bakiye << "$\n";
				}
				int devam1;
				cout << "Tekrar para cekmek istiyor musunuz\?\t\t(EVET=1\tHAYIR=2)  \n";
				cin >> devam1;
				if (devam1 == 2) { break; }
			}
			break;

			int yükleme;
		case 2:

			while (true) {
				cout << "Hesabinizda ki bakiyeniz :" << bakiye << "$\n";
				cout << "Yatirmak istediginiz miktari giriniz :\n";
				cin >> yükleme;

				bakiye += yükleme;
				cout << "Yeni bakiyeniz :" << bakiye << "$\n";

				int devam1;
				cout << "Tekrar para yatirmak istiyor musunuz\?\t\t(EVET=1\tHAYIR=2)  \n";
				cin >> devam1;
				if (devam1 == 2) { break; }
			}
			break;

			int secim2, secim3, odeme;
		case 3:

			cout << "Kredi karti borcunuz :" << borc << "$\n";
			cout << "Para yatirmak istiyor musunuz\?\t\t(EVET=1\t HAYIR=2)\n";
			cin >> secim2;
			if (secim2 == 1) {
				while (true) {
					cout << "Yatirmak istediginiz miktari giriniz\n";
					cin >> odeme;
					if (borc == odeme) {
						cout << "Kredi kartı borcunuz : 0$\n";
						break;
					}

					else if (borc >= odeme) {
						borc -= odeme;
						cout << "Kalan kredi karti borcunuz :" << borc << "$\n";
						cout << "Tekrar para yatirmak istiyor musunuz\?\t\t(EVET=1 HAYIR=2)\n";
						cin >> secim3;
						if (secim3 == 2) { break; }
					}

					else { cout << "Kredi karti borcunuzdan daha yuksek miktar yatiramazsiniz, tekrar deneyiniz\n"; }
				}
			}
			break;

			int secim4, havale, secim5;
		case 4:
			while (true) {

				cout << "Havale ediceginiz hesap icin tuslayiniz\nYURT ICI ici (havale ucreti: 2$)  = 1\nYURT DISI    (havale ucreti: 5$)  = 2\n";
				cin >> secim4;
				if (secim4 == 1) {
					cout << "Havale ediceginiz miktari giriniz :";
					cin >> havale;
					havale += 2;

					while (true) {

						if (bakiye >= havale) {
							bakiye -= havale;
							cout << "Kalan bakiyeniz= " << bakiye << "$\n";
							break;
						}
						else {
							cout << "yetersiz bakiye, TEKRAR DENEYİNİZ\n";
						}
					}
				}

				else {
					cout << "Havale ediceginiz miktari giriniz :";
					cin >> havale;
					havale += 5;

					while (true) {

						if (bakiye >= havale) {
							bakiye -= havale;
							cout << "Kalan bakiyeniz= " << bakiye << "$\n";
							break;
						}
						else {
							cout << "yetersiz bakiye, TEKRAR DENEYİNİZ\n";
						}
					}
				}
				cout << "Baska bir ahavele yapmak istiyor musunuz \?     (EVET=1  HAYIR=2)\n";
				cin >> secim5;
				if (secim5 == 2) {
					break;
				}
			}

			break;
		case 5:
			cout << "HOSCAKALIN\n";
			break;
		}
		int secim6;
		cout << "baska bir islem yapmak istiyor musunuz\?  (EVET=1    HAYIR=2)";
		cin >> secim6;

		if (secim6 == 2) {
			break;
		}
	


	}
	  






		return 0;
		}


	
		



