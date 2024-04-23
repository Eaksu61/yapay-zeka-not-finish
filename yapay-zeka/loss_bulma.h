#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"
#include<cmath>
#include<algorithm>
#include"2doyun.h"

class loss {
public:
	void x_true_h();
	void x_pred_h();
	double logloss();
	veri vr;
	std::vector<double> y_true;
	std::vector<double> y_pred;
};