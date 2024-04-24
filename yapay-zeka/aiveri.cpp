#include<iostream>
#include<string>
#include<vector>
#include <iomanip>
#include <random>
#include"aiveri.h"
#include<algorithm>
#include"bagliste.h"
#include"nrnlistele.h"

std::vector<double> veri::softmax(const std::vector<double>& inputs) {
	std::vector<double> exp_values(inputs.size());
	double sum = 0.0;
	for (size_t i = 0; i < inputs.size(); ++i) {
		exp_values[i] = std::exp(inputs[i]);
		sum += exp_values[i];
	}
	for (size_t i = 0; i < inputs.size(); ++i) {
		exp_values[i] /= sum;
	}
	return exp_values;
}
double veri::r_fonk(double x) {
	return 1 / (1 + std::exp(-x));
}
double veri::rd() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);
	return std::round(dis(gen) * 100) / 100;
}
void veri::veri_es() {
	katman = { 4,3,2,2 };
	bag_tur = 1;
	bag_sek = {};
	nrn = {};
	bag = {};
	delta = 0;
	alpha = 0.1;
	cikt = 0;
	is_cikt_kosullari = 0;
	dg = false;
	tur = 0;
	hedef_tur = 10;
	inp_a = 1;
}
void veri::input_es() {

}