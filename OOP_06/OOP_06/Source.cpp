﻿#include <iostream>

using namespace std;

#define _USE_MATH_DEFINES
#include <math.h>

class Circle {
protected:
	float radius;
public:
	Circle(float r) //Konstuktor pro objekt Circle
	{
		this->radius = r;
	}

	float GetRad()	//Funkce Vracející radius
	{
		return this->radius;
	}

	float getArea() //Funkce pro vracení Circle area
	{
		return (M_PI * radius * radius);
	}

};

class Rectangle {
protected:
	float length, height;
public:
	Rectangle(float l, float w) //Konstuktor pro objekt Rectangle
	{
		this->length = l;
		this->height = w;
	}
	float getLength() //Funkce vracející hodnotu length
	{
		return this->length;
	}
	float getHeight() //Funkce vracející hodnotu height
	{
		return this->height;
	}

	float getPerimeter() //funkce vracející RectanglePerimete
	{

		return(2 * length + 2 * height);
	}
	float getArea()		//funkce vracející RectangleArea
	{
		return(length * height);
	}
};

class Square : public Rectangle {
private:
	float length;
public:
	Square(float l) : Rectangle(l, l) //Konstuktor pro objekt Square s využítím dědičnosti rectangle
	{
		this->length = l;
	}
	float getPerimeter() //Funkce vracející Square Perimeter
	{
		return(4 * length);
	}
	float getLength() //Funkce vracející hodnotu length
	{
		return this->length;
	}

	float getArea()		//Funkce vracející Square area
	{
		return(length * length);
	}
};

class Cylinder : public Circle, public Rectangle {
public:
	Cylinder(float r, float l, float h) : Circle(r), Rectangle(l, h) //Konstruktor pro třídu Cylinder s použítím dědičnosti
	{

	}
	float getCyliVol() //Funkce vracející CylinderVolume
	{
		return(M_PI * radius * radius * length);
	}


};


int main()
{
	Circle* c = new Circle(5);				//Vytvoření objektu třídy Circle
	Cylinder* cyl = new Cylinder(3, 4, 5);	//Vytvoření objektu třídy Cylinder
	Rectangle* r = new Rectangle(10, 15);	//Vytvoření objektu třídy Rectangle
	Square* s = new Square(4);				//Vytvoření objektu třídy Square

	cout << c->getArea() << endl;	//Vypis Circle Radius na obrazovku
	cout << cyl->getCyliVol() << endl;	//Vypis Cylinder Volume na obrazovku
	cout << s->getPerimeter() << endl;	//Vypis Square Perimeter na obrazovku

	Rectangle* t = s;					//Vytvoření objektu rectangle s hodnotami Square s
	cout << t->getPerimeter() << endl;	//Vypis Rectangle Perimeter

	//Program vytvoří par geometrických obrazců
	//Vypiše obvod a obsah 
	//Využíva dědičnosti, překrytí i protected proměnných 


	return 0;
}