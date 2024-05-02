#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include"aiveri.h"
#include"listol.h"

static std::mt19937 mt(std::random_device{}());
double liste::rd(){
	std::uniform_real_distribution<double> dist(0.0, 1.0);

	return dist(mt);
}
void liste::bag_nrn_k() {
	for (int i = 0; i < vr.katman.size(); i++) {
		vr.nrn.push_back({});
		if (i > 0) {
			vr.bag.push_back({});
		}
		for (int ii = 0; ii < vr.katman[i]; ii++) {
			if (i == 0) {
				vr.nrn[i].push_back({});
				vr.nrn[i][ii].push_back(vr.input[ii]);
				vr.nrn[i][ii].push_back(i);
				vr.nrn[i][ii].push_back(ii);
			}
			else {
				vr.nrn[i].push_back({});
				vr.nrn[i][ii].push_back(0);
				vr.nrn[i][ii].push_back(i);
				vr.nrn[i][ii].push_back(ii);
			}
		}
		if (i > 0) {
			vr.bag.push_back({});
			for (int ii = 0; ii < vr.katman[i - 1]; ii++) {
				vr.bag[i - 1].push_back({});
				for (int iii = 0; iii < vr.katman[i]; iii++) {
					vr.bag[i - 1][ii].push_back({});
					vr.bag[i - 1][ii][iii].push_back(i - 1);
					vr.bag[i - 1][ii][iii].push_back(ii);
					vr.bag[i - 1][ii][iii].push_back(rd());
					vr.bag[i - 1][ii][iii].push_back(i);
					vr.bag[i - 1][ii][iii].push_back(iii);
				}
			}
		}
	}
}
std::vector<std::vector<std::vector<std::vector<double>>>> liste::r_bag() {
	return vr.bag;
}
std::vector<std::vector<std::vector<double>>> liste::r_nrn() {
	return vr.nrn;
}