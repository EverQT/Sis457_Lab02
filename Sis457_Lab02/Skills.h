#pragma once
#include<iostream>
using namespace std;


class Skills
{

private:
	string skill;
	string Color;
	float Tama�oX;
	float Tama�oY;



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

	// Setter tama�oX
	void setTama�oX(float _tama�oX) {
		Tama�oX = _tama�oX;
	}
	// Getter
	float getTama�oX() {
		return Tama�oX;
	}

	// Setter tama�oY
	void setTama�oY(float _tama�oY) {
		Tama�oY = _tama�oY;
	}
	// Getter
	float getTama�oY() {
		return Tama�oY;
	}

	void skillPlist();
	void timeReload();
	void matar();

};

