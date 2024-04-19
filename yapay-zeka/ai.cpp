#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"
#include"loss_bulma.h"
#include"delta.h"
#include"ai.h"
#include"nrnlistele.h"
#include"bagliste.h"

/*
vr : ihtiyac�m�z olan b�t�n veriler i�inde
lt : vr i�indeki bag ve nrn vectorlerini doldurur
pr : vr i�indeki bag ve nrn vecetorlerini s�rla� �ekilde konsola printleyecek fonksiyonlar� i�erir
dt : vr i�indeki delta de�erini ayarlamaya yarar
ls : vr i�indeki delta de�erini belirleyen de�i�kenlerden birini bulur
nl : ba�lant� ile vr i�indeki nrn vector�n�n i�indeki bo� de�erlerini vr i�indeki bag vector� kullan�larak doldulur
bl : vr i�indeki delta de�eri kullan�larak vr i�indeki bag vector�n�n i�indeki de�erler g�ncellenir

*/

std::string ai::gizlimod_ac(std::vector<int> a) {
	ai_gizli = a;
	cikt = "istenilen veriler gizlendi";
	return cikt;
}
std::string ai::ai_main() {// nrn ve bag olu�tulurdu
	lt.vr_es(vr);
	lt.bag_nrn_k();
	vr.nrn = lt.r_nrn();
	vr.bag = lt.r_bag();
	cikt = "listeler olu�tu";
	return cikt;
}
std::string ai::listele() {// nrn vector� doldururdu
	nl.vr_es(vr);
	nl.nrn_hs();
	vr.nrn = nl.nrn;
	cikt = "listeler e�itlendi";
	return cikt;
}
std::string ai::dogruluk() {
	ls.vr_es(vr);
	cikt = "n�ron ��kt�s� olu�turuldu";
	return cikt;
}
