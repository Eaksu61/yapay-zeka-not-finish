#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"
#include"loss_bulma.h"
#include <cmath>
#include"2doyun.h"


void loss::x_true_h() {
	// y_true vekt�r�n� s�f�rlayarak ba�layal�m.
	y_true = { 0.0, 0.0, 0.0, 0.0 };

	// E�er bs[0] ve bs[1] her ikisi de 0 ise, hareket yok anlam�na gelir.
	if (vr.bs[0] == 0 && vr.bs[1] == 0) {
		return; // y_true zaten [0, 0, 0, 0] olarak ayarland�.
	}

	// Dikey hareketler i�in y_true vekt�r�n� g�ncelle.
	if (vr.bs[1] > 0) {
		y_true[1] = 1.0; // A�a��
	}
	else if (vr.bs[1] < 0) {
		y_true[0] = 1.0; // Yukar�
	}

	// Yatay hareketler i�in y_true vekt�r�n� g�ncelle.
	if (vr.bs[0] > 0) {
		y_true[2] = 1.0; // Sol
	}
	else if (vr.bs[0] < 0) {
		y_true[3] = 1.0; // Sa�
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
double loss::mse() {
	std::vector<double> trueValues = y_true;
	std::vector<double> predictedValues = y_pred;
	if (trueValues.size() != predictedValues.size()) {
		// Boyutlar uyumsuzsa hata f�rlat
		throw std::invalid_argument("True and predicted values must have the same size.");
	}

	double sumSquaredError = 0.0;
	for (size_t i = 0; i < trueValues.size(); ++i) {
		double error = trueValues[i] - predictedValues[i];
		sumSquaredError += error * error; // Hatan�n karesini topla
	}

	return sumSquaredError / trueValues.size(); // Toplam hatan�n ortalama de�erini hesapla
}