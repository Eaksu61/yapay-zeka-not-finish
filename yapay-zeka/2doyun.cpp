#include<iostream>
#include<vector>
#include"2doyun.h"
#include <random>

int oyun::rnd(int x) {
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(0, x);
	return dist(gen);
}
void oyun::harita_olustur() {
	for (int i = 0; i < x; i++) {
		ls.push_back({});
		for (int ii = 0; ii < y; ii++) {
			ls[i].push_back(0);
		}
	}
}
void oyun::karakter_olustur() {
	int ax = rnd(x);
	int ay = rnd(y);
	ls[ax][ay] = 1;
	kr[0] = ax;
	kr[1] = ay;
}
void oyun::yem_olustur() {
	int d = 0;
	while (d == 0) {
		int ax = rnd(x);
		int ay = rnd(y);
		if (ls[ax][ay] == 0) {
			ls[ax][ay] = 2;
			ym[0] = ax;
			ym[1] = ay;
			d = 1;
		}
	}
}
std::vector<std::vector<int>> oyun::harita() {
	return ls;
}
std::vector<int> oyun::karakter_yem_bosluk() {
	bs = { 0,0 };
	bs[0] = kr[0] - ym[0];
	bs[1] = kr[1] - ym[1];
	return bs;
}
void oyun::oyna(int ax, int bx, int ay, int by) {
	if (ax == bx) {
		//hicbirsey
	}
	else if (ax > bx) {
		if (kr[0] != 1) {
			ls[kr[0]][kr[1]] = 0;
			ls[kr[0] - 1][kr[1]] = 1;
		}
	}
	else if (ax < bx) {
		if (kr[0] != ls.size() - 1) {
			ls[kr[0]][kr[1]] = 0;
			ls[kr[0] + 1][kr[1]] = 1;
		}
	}
	if (ay == by) {
		//hicbirsey
	}
	else if (ay > by) {
		if (kr[1]!=0) {
			ls[kr[0]][kr[1]] = 0;
			ls[kr[0]][kr[1] - 1] = 1;
		}
	}
	else if (ay < by) {
		if (kr[1] != ls[kr[0]].size() - 1) {
			ls[kr[0]][kr[1]] = 0;
			ls[kr[0]][kr[1] + 1] = 1;
		}
	}
}
int oyun::puan_kont() {// yemin bitip bitmedðini kontrol ediyor
	if (ls[ym[0]][ym[1]] == 1) {
		return 1;
	}
}