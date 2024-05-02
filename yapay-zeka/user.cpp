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
	a.ekran_son();
	//a.bag_cikt();
	for (int i = 0; i < 10000; i++) {
		a.listele();
		a.oyun_kontrol();
		a.dogruluk();
		a.ogrenme();
		a.veri_al();
	}
	std::cout << "\n\n\n\n\n";
	a.ekran_son();
	//a.bag_cikt();
	std::cout << "\n";
	std::cout <<"puan : "<< a.yn.puan;
	std::cout << "\n";

	return 0;
}