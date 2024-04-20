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
	lt.vr_es(vr);
	lt.bag_nrn_k();
	vr.nrn = lt.r_nrn();
	vr.bag = lt.r_bag();
	cikt = "listeler oluþtu";
	return cikt;
}
std::string ai::listele() {// nrn vectorü doldururdu
	nl.vr_es(vr);
	nl.nrn_hs();
	vr.nrn = nl.nrn;
	cikt = "listeler eþitlendi";
	return cikt;
}
std::string ai::dogruluk() {
	ls.vr_es(vr);
	ls.x_pred_h();
	ls.x_true_h();
	vr.loss=ls.logloss();
	cikt = "nöron çýktýsý oluþturuldu";
	return cikt;
}
