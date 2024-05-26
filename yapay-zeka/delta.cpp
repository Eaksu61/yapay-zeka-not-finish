#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"test.h"
#include"loss_bulma.h"
#include"delta.h"

double delta::delta_cikt() {
	std::cout<<vr.loss<<"\n";
	return vr.loss * vr.alpha;
}
