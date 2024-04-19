#pragma once

#include<iostream>
#include<vector>
#include<string>
#include"aiveri.h"
#include"listol.h"
#include"islem.h"
#include"test.h"
#include"loss_bulma.h"

class delta {
public:
	void inp_veri(veri v);
	double delta_cikt();
private:
	veri vr;
};