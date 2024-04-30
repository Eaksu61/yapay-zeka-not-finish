#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"
#include"loss_bulma.h"
#include"delta.h"
#include"nrnlistele.h"
#include"bagliste.h"
#include"2doyun.h"
#include"kayýt.h"

struct ai {
public:
	std::string ai_main();
	std::string listele();
	std::string dogruluk();
	std::string ogrenme();
	std::string inp();

	std::string oyun_main();
	std::string oyun_kontrol();

	std::string veri_al();
	std::string ekran();

	std::string nrn_cikt();
	std::string bag_cikt();

	std::vector<std::vector<double>> kcikt;

	std::string cikt;

	int hata_ayýklama;

	veri vr;
	liste lt;
	veri_print pr;
	delta dt;
	loss ls;
	nrn_liste nl;
	bag_liste bl;
	oyun yn;
	kaydet kd;
};
