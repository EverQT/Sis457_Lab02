#pragma once
#include<iostream>
using namespace std;


class Sprite
{
private:
	string sprite;
	string Color;
	float Alto;
	float Ancho;
	float PosicionX;
	float PosicionY;
	float Velocidad;
	int life;

public:

	//metodos accesores
	
	// Setter sprite
	void setsprite(string _sprite) {
		sprite = _sprite;
	}
	// Getter
	string getsprite() {
		return sprite;
	}

	// Setter alto
	void setAlto(float _Alto) {
		Alto = _Alto;
	}
	// Getter
	float getAlto() {
		return Alto;
	}

	// Setter ancho
	void setAncho(float _Ancho) {
		Ancho = _Ancho;
	}
	// Getter
	float getAncho() {
		return Ancho;
	}

	// Setter posicionX
	void setPosicionX(float _PosicionX) {
		PosicionX = _PosicionX;
	}
	// Getter
	float getPosicionX() {
		return PosicionX;
	}

	// Setter posicionY
	void setPosicionY(float _PosicionY) {
		PosicionY = _PosicionY;
	}
	// Getter
	float getPosicionY() {
		return PosicionY;
	}


	void spriteXml();
	void spritePlist();
	void mosterXml();
	void bulletXml();
	void atacar();
	void morir();
	void revivir();
	void matar();

};

