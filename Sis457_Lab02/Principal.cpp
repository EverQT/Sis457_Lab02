#include <iostream>
using namespace std;

#include"Sprite.h"
#include"Tile.h"
#include"Tower.h"
#include"Skills.h"
#include"Effects.h"


void posicion(float *psx, float *psy, float n1, float n2) {
	*psx = n1/n2;
	*psy = n2/n1;
}

void lifeData(float *a, float *r, float *m, float l1, float l2 ) {
	*a = l1 + l2;
	*r = l1 - l2;
	if (*r > 10) {
		*m = *r;
	}
	
}

void aumento(int *i) {
	*i += 30;
}

int main() {
	Sprite s01 = Sprite();

	s01.atacar();
	s01.morir();
	s01.revivir();
	s01.matar();

	s01.setAlto(10.9);
	s01.setAncho(5.4);
	s01.spriteXml();
	float posicionX = 0;
	float posicionY = 0;
	float au = 0, re = 0, mu = 0;
	
	int n1 = 12, n2 = 2, i = 5;
	float l1 = 50, l2 = 30;

	cout << "Nombre Sprite: " << s01.getsprite() << endl;
	cout << "Ancho: " << s01.getAncho() << "\nAlto: " << s01.getAlto() << endl;
	
	posicion(&posicionX, &posicionY, n1, n2);
	aumento(&i);
	lifeData(&au, &re, &mu, l1, l2);

	cout << "posicionXY: " << posicionX << "," << posicionY << endl;
	cout << "incremento vida 30%: " << i << "\ndireccion: "<< aumento << endl;
	cout << "vida antes: " << l1 << " ahora + aumento: " << au << endl;
	cout << "vida antes: " << l2 << " ahora - daño " << re << endl;

	if (mu > 0) {
		cout << "vida: " << mu << endl;
	}
	else {
		cout << "muerto" << endl;
	}

	/*int  main() {

		int num, * dir_num;
		num = 20;
		dir_num = &num;

		cout << "La posisicion de memoria es : " << dir_num << endl;
		cout << "El valor es :" << *dir_num << endl;

		return 0;
	}*/
	

	return 0;
}