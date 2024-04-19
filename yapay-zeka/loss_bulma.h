#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"islem.h"
#include"test.h"
#include<cmath>
#include<algorithm>

class loss {
public:
	void vr_es(veri v);
	void x_true_h();
	void x_pred_h();
	double logloss();
private:
	veri vr;
	std::vector<double>& y_true;
	std::vector<double>& y_pred;
};