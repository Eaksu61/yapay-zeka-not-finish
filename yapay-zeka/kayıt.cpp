#include<iostream>
#include<vector>
#include <chrono>
#include <thread>
#include"kay�t.h"
#include"test.h"

void kaydet::kay�t_bastan_sona(double s�re) {
	s�re = s�re * 1000;
	vp.vr = vr;
	for (int i = 0; i < veri_all.size(); i++) {
		vp.print_2d(veri_all[i]);
		std::this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(s�re)));
	}
}
void kaydet::kay�t_son() {
	vp.vr = vr;
	vp.print_2d(veri_all[veri_all.size() - 1]);
}
