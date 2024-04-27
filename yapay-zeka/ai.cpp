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
#include"ai.h"
#include"2doyun.h"

/*
vr : ihtiyac�m�z olan b�t�n veriler i�inde
lt : vr i�indeki bag ve nrn vectorlerini doldurur
pr : vr i�indeki bag ve nrn vecetorlerini s�rla� �ekilde konsola printleyecek fonksiyonlar� i�erir
dt : vr i�indeki delta de�erini ayarlamaya yarar
ls : vr i�indeki delta de�erini belirleyen de�i�kenlerden birini bulur
nl : ba�lant� ile vr i�indeki nrn vector�n�n i�indeki bo� de�erlerini vr i�indeki bag vector� kullan�larak doldulur
bl : vr i�indeki delta de�eri kullan�larak vr i�indeki bag vector�n�n i�indeki de�erler g�ncellenir

*/

std::string ai::ai_main() {// nrn ve bag olu�tulurdu
	std::cout << "ai_main\n";
	lt.vr = vr;
	lt.bag_nrn_k();
	vr.nrn = lt.r_nrn();
	vr.bag = lt.r_bag();
	cikt = "listeler olu�tu";
	return cikt;
}
std::string ai::inp() {
	std::cout << "inp\n";
	vr.veri_es();
	vr.katman[0] = yn.ls.size() * yn.ls[0].size();
	std::vector<double> k;
	for (int i = 0; i < yn.ls.size(); i++) {
		for (int ii = 0; ii < yn.ls[i].size(); ii++) {
			k.push_back(yn.ls[i][ii]);
		}
	}
	vr.input = k;
	cikt = "input esitlendi";
	return cikt;
}
std::string ai::listele() {// nrn vector� doldururdu
	std::cout << "listele\n";
	nl.vr = vr;
	nl.nrn_hs();
	vr.nrn = nl.nrn;
	cikt = "listeler e�itlendi";
	kcikt = vr.nrn[vr.nrn.size()-1];
	return cikt;
}
std::string ai::dogruluk() {
	std::cout << "dogruluk\n";
	ls.vr = vr;
	ls.x_pred_h();
	ls.x_true_h();// x_true nun nas�l belilenece�i bulundu ama tam uyumlu de�il
	vr.loss = ls.logloss();
	cikt = "n�ron ��kt�s� olu�turuldu";
	return cikt;
}
std::string ai::ogrenme() {
	std::cout << "ogrenme\n";
	dt.vr = vr;
	vr.delta = dt.delta_cikt();
	bl.vr = vr;
	bl.bag_list();
	vr.bag = bl.bag;
	cikt = "ba�lant� kat say�lar� de�i�ti";
	return cikt;
}
std::string ai::oyun_main() {
	std::cout << "oyun_main\n";
	yn.x = 10;
	yn.y = 10;
	yn.ym = { 0,0 };
	yn.kr = { 0,0 };
	yn.harita_olustur();
	yn.karakter_olustur();
	yn.yem_olustur();
	cikt = "oyun olustu";
	return cikt;
}
std::string ai::oyun_kontrol() {
	std::cout << "oyun_kontrol\n";
	yn.oyna(vr.nrn[vr.nrn.size() - 1][0][0], vr.nrn[vr.nrn.size() - 1][1][0], vr.nrn[vr.nrn.size() - 1][2][0], vr.nrn[vr.nrn.size() - 1][3][0]);
	yn.karakter_yem_bosluk();
	vr.bs = yn.bs;
	cikt = "oyun kontrol edildi";
	return cikt;
}