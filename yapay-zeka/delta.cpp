#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"islem.h"
#include"test.h"
#include"loss_bulma.h"
#include"delta.h"

void delta::inp_veri(veri v) {
	vr = v;
}
double delta::delta_cikt() {
	return vr.loss * vr.alpha;
}
