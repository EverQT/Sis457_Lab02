#pragma once
#include<iostream>
using namespace std;


class Tile
{

private:
	string map_bg;
	string tile;
	string color;
	float map_bgTamañoXY;
	float tileTamañoXY;

public:

	//metodos accesores
	
	// Setter map_bg
	void setmap_bg(string _map_bg) {
		map_bg = _map_bg;
	}
	// Getter
	string getmap_bg() {
		return map_bg;
	}

	// Setter tile
	void settile(string _tile) {
		tile = _tile;
	}
	// Getter
	string gettile() {
		return tile;
	}

	// Setter map_bgTamañoXY
	void setmap_bgTamañoXY(float _map_bgTamañoXY) {
		map_bgTamañoXY = _map_bgTamañoXY;
	}
	// Getter
	float getmap_bgTamañoXY() {
		return map_bgTamañoXY;
	}

	// Setter tileTamañoXY
	void settileTamañoXY(float _tileTamañoXY) {
		tileTamañoXY = _tileTamañoXY;
	}
	// Getter
	float gettileTamañoXY() {
		return tileTamañoXY;
	}

	void effectsTile();
	void tilePlist();
	void nTmx();
};

