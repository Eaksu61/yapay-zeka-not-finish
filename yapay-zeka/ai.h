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


class ai_create {
public:
	std::string gizlimod_ac(std::vector<int> a);
	std::string ai_main();
	std::string listele();
	std::string dogruluk();
	std::string ogrenme();
	std::string dongu();
	
private:
	std::vector<int> ai_gizli;

	std::vector<std::vector<std::vector<double>>> nrn_i;
	std::vector<std::vector<std::vector<std::vector<double>>>> bag_i;
	int inp_a_i;
	std::vector<double> input_i;
	double delta_i;
	double alpha_i;
	double loss_i;
	double cikt_i;
	double is_cikt_kosullari_i;

	std::string cikt();
	veri vr();
	liste lt();
	veri_print pr();
	delta dt();
	loss ls();
	nrn_liste nl();
	bag_liste bl();
};
