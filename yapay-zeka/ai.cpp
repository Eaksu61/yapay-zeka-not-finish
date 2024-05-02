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
#include"kayýt.h"

/*
vr : ihtiyacýmýz olan bütün veriler içinde
lt : vr içindeki bag ve nrn vectorlerini doldurur
pr : vr içindeki bag ve nrn vecetorlerini sýrlaý þekilde konsola printleyecek fonksiyonlarý içerir
dt : vr içindeki delta deðerini ayarlamaya yarar
ls : vr içindeki delta deðerini belirleyen deðiþkenlerden birini bulur
nl : baðlantý ile vr içindeki nrn vectorünün içindeki boþ deðerlerini vr içindeki bag vectorü kullanýlarak doldulur
bl : vr içindeki delta deðeri kullanýlarak vr içindeki bag vectorünün içindeki deðerler güncellenir

*/

std::string ai::ai_main() {// nrn ve bag oluþtulurdu
	if (hata_ayýklama == 1) { std::cout << "ai_main\n"; }
	lt.vr = vr;
	lt.bag_nrn_k();
	vr.nrn = lt.r_nrn();
	vr.bag = lt.r_bag();
	cikt = "listeler oluþtu";
	return cikt;
}
std::string ai::inp() {
	if (hata_ayýklama == 1) { std::cout << "inp\n"; }
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
std::string ai::listele() {// nrn vectorü doldururdu
	if (hata_ayýklama) { std::cout << "listele\n"; }
	nl.vr = vr;
	nl.nrn_hs();
	vr.nrn = nl.nrn;
	cikt = "listeler eþitlendi";
	kcikt = vr.nrn[vr.nrn.size()-1];
	return cikt;
}
std::string ai::dogruluk() {
	if (hata_ayýklama) { std::cout << "dogruluk\n"; }
	ls.vr = vr;
	ls.x_pred_h();
	ls.x_true_h();// x_true nun nasýl belileneceði bulundu ama tam uyumlu deðil
	vr.loss = ls.logloss();
	cikt = "nöron çýktýsý oluþturuldu";
	return cikt;
}
std::string ai::ogrenme() {
	if (hata_ayýklama) { std::cout << "ogrenme\n"; }
	dt.vr = vr;
	vr.delta = dt.delta_cikt();
	bl.vr = vr;
	bl.bag_list();
	vr.bag = bl.bag;
	cikt = "baðlantý kat sayýlarý deðiþti";
	return cikt;
}
std::string ai::oyun_main() {
	if (hata_ayýklama) { std::cout << "oyun_main\n"; }
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
	if (hata_ayýklama) { std::cout << "oyun_kontrol\n"; }
	yn.oyna(vr.nrn[vr.nrn.size() - 1][0][0], vr.nrn[vr.nrn.size() - 1][1][0], vr.nrn[vr.nrn.size() - 1][2][0], vr.nrn[vr.nrn.size() - 1][3][0]);
	yn.karakter_yem_bosluk();
	vr.bs = yn.bs;
	cikt = "oyun kontrol edildi";
	return cikt;
}
std::string ai::veri_al() {
	kd.veri_all.push_back(yn.ls);
	cikt = "veri alýndý";
	return cikt;
}
std::string ai::ekran() {
	kd.vr = vr;
	kd.kayýt_bastan_sona(0.00001);
	cikt = "konsola yazýldý";
	return cikt;
}
std::string ai::nrn_cikt() {
	pr.vr = vr;
	pr.print_nrn();
	cikt = "nrn_cikt";
	return cikt;
}
std::string ai::bag_cikt() {
	pr.vr = vr;
	pr.print_bag();
	cikt = "bag_cikt";
	return cikt;
}
std::string ai::ekran_son() {
	kd.vr = vr;
	kd.kayýt_son();
	cikt = "konsola yazýldý";
	return cikt;
}