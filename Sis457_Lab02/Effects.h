#pragma once
#include<iostream>
using namespace std;


class Effects
{

private:
	string tipeEffect;
	string Forma;
	string Color;
	float Tama�o;
	
public:

	//metodos accesores

	// Setter effect
	void settipeEffect(string _tipeEffect) {
		tipeEffect = _tipeEffect;
	}
	// Getter
	string gettipeEffect() {
		return tipeEffect;
	}

	// Setter forma
	void setForma(string _Forma) {
		Forma = _Forma;
	}
	// Getter
	string getForma() {
		return Forma;
	}

	// Setter tama�o
	void setTama�o(float _Tama�o) {
		Tama�o = _Tama�o;
	}
	// Getter
	float getTama�o() {
		return Tama�o;
	}

	void effectPlist();

};

