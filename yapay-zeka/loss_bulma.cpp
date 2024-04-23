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
	for (int i = 0; i < vr.nrn[0].size(); i++) {
		
	}
}
void loss::x_pred_h() {
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

