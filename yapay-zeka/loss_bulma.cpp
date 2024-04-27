#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"
#include"loss_bulma.h"
#include <cmath>
#include"2doyun.h"


void loss::x_true_h() {//burasý kullanýcýya göre þekillenmesi gerekiyor
	std::vector<double> sk;
	y_true = {};
	for (int i = 0; i < vr.nrn[vr.nrn.size()-1].size(); i++) {
		sk.push_back(vr.nrn[vr.nrn.size() - 1][i][0]);
	}
	if (vr.bs[0] > 0) {
		y_true.push_back(0.0);
		y_true.push_back(1.0);
	}
	else if (vr.bs[0] < 0) {
		y_true.push_back(1.0);
		y_true.push_back(0.0);
	}
	else if (vr.bs[0] == 0) {
		y_true.push_back(0.0);
		y_true.push_back(0.0);
	}
	if (vr.bs[1] > 0) {
		y_true.push_back(0.0);
		y_true.push_back(1.0);
	}
	else if (vr.bs[1] < 0) {
		y_true.push_back(1.0);
		y_true.push_back(0.0);
	}
	else if (vr.bs[1] == 0) {
		y_true.push_back(0.0);
		y_true.push_back(0.0);
	}
}
void loss::x_pred_h() {
	y_pred = {};
	for (int i = 0; i < vr.nrn[vr.nrn.size() - 1].size(); i++) {
		y_pred.push_back(vr.nrn[vr.nrn.size() - 1][i][0]);
	}
}
double loss::logloss() {
	double loss = 0.0;
	for (size_t i = 0; i < y_true.size(); ++i) {
		loss -= y_true[i] * std::log(y_pred[i]) + (1 - y_true[i]) * std::log(1 - y_pred[i]);
	}
	return loss / y_true.size();
}

