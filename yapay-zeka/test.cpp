#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"

void veri_print::print_nrn() {
	for (int i = 0; i < vr.nrn.size(); i++) {
		for (int ii = 0; ii < vr.nrn[i].size(); ii++) {
			for (int iii = 0; iii < vr.nrn[i][ii].size(); iii++) {
				std::cout << vr.nrn[i][ii][iii] << "|";
			}
			std::cout << "\n";
		}
		std::cout << "\n----\n";
	}
}
void veri_print::print_bag() {
	int x=1;
	for (int i = 0; i < vr.bag.size(); i++) {
		for (int ii = 0; ii < vr.bag[i].size(); ii++) {
			for (int iii = 0; iii < vr.bag[i][ii].size(); iii++) {
				for (int iiii = 0; iiii < vr.bag[i][ii][iii].size(); iiii++) {
					std::cout << vr.bag[i][ii][iii][iiii] << "|";
					x = 1;
				}
				std::cout << "\n";
			}
			std::cout << "\n----\n";
		}
		if (x == 1) {
			std::cout << "\n|||||||\n\n----\n";
		}
		x = 0;
	}
}