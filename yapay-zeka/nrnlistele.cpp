#include<iostream>
#include"aiveri.h"
#include"nrnlistele.h"


void nrn_liste::vr_es(veri v){
        vr=v;
}
void nrn_liste::nrn_hs() {
		double tp = 0;
		for (int i = 0; i < vr.nrn.size(); i++) {
			if (i > 0) {
				for (int ii = 0; ii < vr.nrn[i].size(); ii++) {
					for (int iii = 0; iii < vr.nrn[i - 1].size(); iii++) {
						tp = tp + vr.nrn[i - 1][iii][0] * vr.bag[i - 1][iii][ii][2];
					}
					tp = vr.r_fonk(tp);
						vr.nrn[i][ii][0] = tp;
					tp = 0;
				}
			}
		}
		nrn = vr.nrn;
}
