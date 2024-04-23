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
	void bag_nrn_k();
	std::vector<std::vector<std::vector<std::vector<double>>>> r_bag();
	std::vector<std::vector<std::vector<double>>> r_nrn();
	veri vr;
	std::unordered_set<double> uniqueNumbers;
};