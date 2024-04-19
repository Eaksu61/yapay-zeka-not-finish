#pragma once

#include<iostream>
#include<string>
#include<vector>
#include <iomanip>
#include <random>
class veri {
public:
	std::vector<int> katman;

	int bag_tur;// buras� deneysel k�s�m ve opsiyonel olarak defult hali 1 olmal� yoksa �al��maz
	std::vector<std::vector<int>> bag_sek;// buras� deneysel k�s�m ve ana proje tamamlan�nca �al���r hale gelecek
	/*
	bag_t�r ve bag_sek ana proje bitince tamamlanacak, ileride gelecek i�levleri anlat�y�m...
	bag_t�r ba�lanma �eklini se�ecek e�er normal bir s�ral� ba�lama �ekli isteniyorsa de�eri 1 e e�it olmal�
	ileride gelecek �zelliklerde 2 ye e�itlenerek n�ronlar� rastkele ba�lama, 3 e e�itlenerekte kendiniz n�ronlar� ba�laman�z gerekiyor
	e�er 1 veya 2 yi se�tiyseniz sistem otomatik olarak listeleme ve de�er e�itlemeyi yapar
	ama 3 � se�tiyseniz sisteme input vermeniz gerekir, onun i�inde bag_sek vector�n� kullanman�z gerekir
	vector�n i�ine vevtorler hali ile koordinatlar� girmeniz gerek mesela .
	katman inputuna {2,2} ye e�itlediniz bu demek oluyorki sistemde 4 n�ron var ve o n�ronlar koordinat d�zleminde 4 tane var {{0,0},{0,1},{1,0},{1,1}} koordinatlar�yla
	bu koordinatlardan ikisini al�p bag_sek in i�ine {{x1,y1,x2,y2},...} �eklinde giriyorsunuz ve sistem kendisi n�ronlar� ba�l�yor
	biraz karma��k gibi ama de�il tek yapman�z gereken bag_sek in i�ine vector i�inde 2 tane n�ronun koordinat�n� giriyorsunuz...
	*/
	std::vector<std::vector<std::vector<double>>> nrn;//{{{x,y,d}}}
	std::vector<std::vector<std::vector<std::vector<double>>>> bag;//{{{x1,y1,d,x2,y2}}}

	int inp_a;// e�er inp_a y� 0 a e�itlerseniz inputlar� istedi�iniz gibi girebilirsiniz, ama 1 e�itlerseniz rastkele inputlar girilecek sistem taraf�ndan ,ama bilinki inputa ne girerseniz girin sonradan e�itimn ama�l� sistem taraf�ndan de�i�tirilecektir
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
