#pragma once

#include<iostream>
#include<string>
#include<vector>
#include <unordered_set>
#include <cstdlib>
#include <ctime>
#include"aiveri.h"
#include"listol.h"

class liste{
public:
	double rd();
	void vr_es(veri v);
	void bag_nrn_k();
	std::vector<std::vector<std::vector<std::vector<double>>>> r_bag();
	std::vector<std::vector<std::vector<double>>> r_nrn();
private:
	veri vr;
	std::unordered_set<double> uniqueNumbers;
};