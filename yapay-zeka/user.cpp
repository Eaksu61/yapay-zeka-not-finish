#include<iostream>
#include"ai.h"
#include <cstdlib>

int main() {
	ai a;
	a.hata_ayýklama = 0;
	a.oyun_main();
	a.inp();
	a.ai_main();
	a.veri_al();
	a.indd = -1;
	for (int i = 0; i < 20000; i++) {
		a.listele();
		a.oyun_kontrol();
		a.dogruluk_lg();
		a.ogrenme();
		a.veri_al();
		if (i % 10 == 0) {
			a.yeni();
			a.ks_yeni();
		}
		a.ks_veri_al();
	}
	std::cout << "\n\n\n\n\n";
	a.ks_cikt(1999);
	std::cout << "\n\n\n\n\n";
	a.nrn_cikt();
	std::cout << "\n\n\n\n\n";
	a.bag_cikt();
	std::cout << "\n";
	std::cout <<"puan : "<< a.yn.puan;
	std::cout << "\n";

	return 0;
}