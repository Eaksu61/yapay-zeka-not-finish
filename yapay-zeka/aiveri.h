#ifndef AIVERI_H_INCLUDED
#define AIVERI_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <random>

struct veri {
public:
	std::vector<double> softmax(const std::vector<double>& inputs);
	double r_fonk(double x);
	double rd();
	void veri_es();
	void input_es();
	std::vector<int> katman;
	int bag_tur;
	std::vector<std::vector<int>> bag_sek;
	std::vector<std::vector<std::vector<double>>> nrn;
	std::vector<std::vector<std::vector<std::vector<double>>>> bag;
	double delta;
	double alpha;
	double cikt;
	double is_cikt_kosullari;
	float dg;
	int tur;
	int hedef_tur;
	int inp_a;
	double loss;
	std::vector<double> input;
	std::vector<int> bs;
};

#endif // AIVERI_H_INCLUDED
