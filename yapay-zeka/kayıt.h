#pragma once

#include<iostream>
#include<vector>
#include <chrono>
#include <thread>
#include"test.h"
#include"aiveri.h"

class kaydet {
public:
	void kay�t_bastan_sona(double s�re);
	void kay�t_son();
	std::vector<std::vector<std::vector<std::vector<int>>>> veri_kesit;
	std::vector<std::vector<std::vector<int>>> veri_all;
	veri_print vp;
	veri vr;
};