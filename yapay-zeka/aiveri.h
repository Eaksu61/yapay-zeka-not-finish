#pragma once

#include<iostream>
#include<string>
#include<vector>
#include <iomanip>
#include <random>
class veri {
public:
	std::vector<int> katman;

	int bag_tur;// burasý deneysel kýsým ve opsiyonel olarak defult hali 1 olmalý yoksa çalýþmaz
	std::vector<std::vector<int>> bag_sek;// burasý deneysel kýsým ve ana proje tamamlanýnca çalýþýr hale gelecek
	/*
	bag_tür ve bag_sek ana proje bitince tamamlanacak, ileride gelecek iþlevleri anlatýyým...
	bag_tür baðlanma þeklini seçecek eðer normal bir sýralý baðlama þekli isteniyorsa deðeri 1 e eþit olmalý
	ileride gelecek özelliklerde 2 ye eþitlenerek nöronlarý rastkele baðlama, 3 e eþitlenerekte kendiniz nöronlarý baðlamanýz gerekiyor
	eðer 1 veya 2 yi seçtiyseniz sistem otomatik olarak listeleme ve deðer eþitlemeyi yapar
	ama 3 ü seçtiyseniz sisteme input vermeniz gerekir, onun içinde bag_sek vectorünü kullanmanýz gerekir
	vectorün içine vevtorler hali ile koordinatlarý girmeniz gerek mesela .
	katman inputuna {2,2} ye eþitlediniz bu demek oluyorki sistemde 4 nöron var ve o nöronlar koordinat düzleminde 4 tane var {{0,0},{0,1},{1,0},{1,1}} koordinatlarýyla
	bu koordinatlardan ikisini alýp bag_sek in içine {{x1,y1,x2,y2},...} þeklinde giriyorsunuz ve sistem kendisi nöronlarý baðlýyor
	biraz karmaþýk gibi ama deðil tek yapmanýz gereken bag_sek in içine vector içinde 2 tane nöronun koordinatýný giriyorsunuz...
	*/
	std::vector<std::vector<std::vector<double>>> nrn;//{{{x,y,d}}}
	std::vector<std::vector<std::vector<std::vector<double>>>> bag;//{{{x1,y1,d,x2,y2}}}

	int inp_a;// eðer inp_a yý 0 a eþitlerseniz inputlarý istediðiniz gibi girebilirsiniz, ama 1 eþitlerseniz rastkele inputlar girilecek sistem tarafýndan ,ama bilinki inputa ne girerseniz girin sonradan eðitimn amaçlý sistem tarafýndan deðiþtirilecektir
	std::vector<double> input;

	double delta;
	double alpha;

	double loss;

	double cikt;
	double is_cikt_kosullari;

	float dg;

	int tur;
	int hedef_tur;
	
	double rd();

	void input_es();

	void veri_es();

	double r_fonk(double i);
	std::vector<double> softmax(const std::vector<double>& inputs);
};
