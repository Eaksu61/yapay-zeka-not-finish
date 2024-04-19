#pragma once

#include<iostream>
#include<vector>
#include <random>

class oyun {
public:
	int rnd(int x);
	void harita_olustur();
	void karakter_olustur();
	void yem_olustur();
	std::vector<std::vector<int>> harita();
	std::vector<int> karakter_yem_bosluk();
	void oyna(int ax, int bx, int ay, int by);
	int puan;
private:
	std::random_device rd;
	int x, y;
	std::vector<std::vector<int>> ls;
	std::vector<std::vector<int>> bos_konum;
	std::vector<int> kr;
	std::vector<int> ym;
	std::vector<int> bs;
};