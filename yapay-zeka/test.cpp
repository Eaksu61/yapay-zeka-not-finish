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
void veri_print::print_2d(std::vector<std::vector<int>> ve) {
	for (int i = 0; i < ve.size(); i++) {
		for (int ii = 0; ii < ve[i].size(); ii++) {
			std::cout <<","<< ve[i][ii];
		}
		std::cout << "\n";
	}
	for (int i = 0; i < vr.nrn[vr.nrn.size() - 1].size(); i++) {
		std::cout << vr.nrn[vr.nrn.size() - 1][i][0] << "||";
	}
	std::cout << "\n";
	std::cout << "\n______________\n";
}
void veri_print::print_2d_d(std::vector<std::vector<int>> ve) {
	for (int i = 0; i < ve.size(); i++) {
		for (int ii = 0; ii < ve[i].size(); ii++) {
			std::cout << "," << ve[i][ii];
		}
		std::cout << "\n";
	}
	std::cout << "\n______________\n";
}
