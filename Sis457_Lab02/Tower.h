#pragma once
#include<iostream>
using namespace std;

class Tower
{

private:
	string tower;
	string color;
	string forma;
	float tamaño;
	float posicionX;
	float posicionY;

public:

	//metodos accesores

	// Setter tower
	void settower(string _tower) {
		tower = _tower;
	}
	// Getter
	string gettower() {
		return tower;
	}

	// Setter forma
	void setforma(string _forma) {
		forma = _forma;
	}
	// Getter
	string getforma() {
		return forma;
	}

	// Setter tamaño
	void settamaño(float _tamaño) {
		tamaño = _tamaño;
	}
	// Getter
	float gettamaño() {
		return tamaño;
	}

	// Setter posicionX
	void setposicionX(float _posicionX) {
		posicionX = _posicionX;
	}
	// Getter
	float getposicionX() {
		return posicionX;
	}

	// Setter posicionY
	void setposicionY(float _posicionY) {
		posicionY = _posicionY;
	}
	// Getter
	float getposicionY() {
		return posicionY;
	}

	void towerDate();
	void centerDate();
	void towerPlist();
	void towerDeath();
};

