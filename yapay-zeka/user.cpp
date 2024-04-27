#include<iostream>
#include"ai.h"


int main() {
	ai a;
	a.oyun_main();
	a.inp();
	a.ai_main();
	for (int i = 0; i < 10000; i++) {
		a.listele();
		a.oyun_kontrol();
		a.dogruluk();
		a.ogrenme();
	}
	return 0;
}