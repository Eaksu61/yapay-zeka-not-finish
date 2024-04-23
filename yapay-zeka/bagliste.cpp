#include<iostream>
#include"aiveri.h"
#include"bagliste.h"

void bag_liste::bag_list() {
	for (int i = 0; i < vr.bag.size(); i++) {
		for (int ii = 0; ii < vr.bag[i].size(); ii++) {
			for (int iii = 0; iii < vr.bag[i][ii].size(); iii++) {
				vr.bag[i][ii][iii][2] = vr.bag[i][ii][iii][2] + vr.delta;
			}
		}
	}
	bag = vr.bag;
}