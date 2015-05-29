


#include"stdafx.h"



Ramie::Ramie(HDC hdc, FLOAT wspX, FLOAT wspY, INT size) :pen(Color(255, 255, 0, 0), size) {

	pen = new Pen(Color(255, 255, 0, 0), size);

	pen->SetStartCap(LineCapRoundAnchor);

	graphics = new Graphics(hdc);

	X = wspX;
	Y = wspY;
	lenght = 200;
	graphics->TranslateTransform(X, Y);

	

}



void Ramie::draw(){



	graphics->DrawLine(pen,0,0, lenght,0);


}