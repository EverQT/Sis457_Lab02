#pragma once
#include<iostream>
using namespace std;


class Skills
{

private:
	string skill;
	string Color;
	float TamañoX;
	float TamañoY;



public:

	//metodos accesores

	// Setter skill
	void setskill(string _skill) {
		skill = _skill;
	}
	// Getter
	string getskill() {
		return skill;
	}

	// Setter tamañoX
	void setTamañoX(float _tamañoX) {
		TamañoX = _tamañoX;
	}
	// Getter
	float getTamañoX() {
		return TamañoX;
	}

	// Setter tamañoY
	void setTamañoY(float _tamañoY) {
		TamañoY = _tamañoY;
	}
	// Getter
	float getTamañoY() {
		return TamañoY;
	}

	void skillPlist();
	void timeReload();
	void matar();

};

