#pragma once
#include<iostream>
using namespace std;


class Tile
{

private:
	string map_bg;
	string tile;
	string color;
	float map_bgTama�oXY;
	float tileTama�oXY;

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

	// Setter map_bgTama�oXY
	void setmap_bgTama�oXY(float _map_bgTama�oXY) {
		map_bgTama�oXY = _map_bgTama�oXY;
	}
	// Getter
	float getmap_bgTama�oXY() {
		return map_bgTama�oXY;
	}

	// Setter tileTama�oXY
	void settileTama�oXY(float _tileTama�oXY) {
		tileTama�oXY = _tileTama�oXY;
	}
	// Getter
	float gettileTama�oXY() {
		return tileTama�oXY;
	}

	void effectsTile();
	void tilePlist();
	void nTmx();
};

