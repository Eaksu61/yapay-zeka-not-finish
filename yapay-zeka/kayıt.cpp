#include<iostream>
#include<vector>
#include <chrono>
#include <thread>
#include"kayýt.h"
#include"test.h"

void kaydet::kayýt_bastan_sona(double süre) {
	süre = süre * 1000;
	vp.vr = vr;
	for (int i = 0; i < veri_all.size(); i++) {
		vp.print_2d(veri_all[i]);
		std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(süre)));
	}
}
void kaydet::kayýt_son() {
	vp.vr = vr;
	vp.print_2d(veri_all[veri_all.size() - 1]);
}
