#pragma once
#include<iostream>
using namespace std;


class Effects
{

private:
	string tipeEffect;
	string Forma;
	string Color;
	float Tamaño;
	
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

	// Setter tamaño
	void setTamaño(float _Tamaño) {
		Tamaño = _Tamaño;
	}
	// Getter
	float getTamaño() {
		return Tamaño;
	}

	void effectPlist();

};

