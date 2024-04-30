#pragma once

#include<iostream>
#include<vector>
#include <chrono>
#include <thread>
#include"test.h"

class kaydet {
public:
	void kayýt_bastan_sona(double süre);
	std::vector<std::vector<std::vector<int>>> veri_all;
	veri_print vp;
};