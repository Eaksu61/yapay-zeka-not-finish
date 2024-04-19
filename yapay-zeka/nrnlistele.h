#pragma once

#include"aiveri.h"

class nrn_liste{
public:
	void vr_es(veri v);
	void nrn_hs();
	std::vector<std::vector<std::vector<double>>> nrn;
private:
	veri vr;
};