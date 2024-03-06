#pragma once

/* Muhammad Saad Mursaleen
	22I-0835
   Bilal Raza
	22i-1325*/

#include <SFML/Graphics.hpp>
#include<string.h>
#include<iostream>
using namespace std;
using namespace sf;

class Food {

public:

	Texture tex1;

	Sprite sp1;

//	virtual void draw(RenderTarget& window,int x,int y) = 0;
	virtual void draw(std::string png_path) = 0;


};
//
//
//class REDR : public Food {
//public:
//
//	void draw(RenderTarget& window, int x, int y) {
//		tex1.loadFromFile("img/REDR.png");
//		sp1.setTexture(tex1);
//		sp1.setPosition(x, y);
//		sp1.setScale(1, 1);
//		window.draw(sp1);
//	}
//
//
//};
//
//class GREENC : public Food {
//public:
//
//	void draw(RenderTarget& window, int x, int y) {
//		tex1.loadFromFile("img/GREENC.png");
//		sp1.setTexture(tex1);
//		sp1.setPosition(x, y);
//		sp1.setScale(0.6, 0.6);
//		window.draw(sp1);
//	}
//
//
//};
//
//
//class ORANGEH : public Food {
//public:
//
//	void draw(RenderTarget& window, int x, int y) {
//		tex1.loadFromFile("img/ORANGEH.png");
//		sp1.setTexture(tex1);
//		sp1.setPosition(x, y);
//		sp1.setScale(0.6, 0.6);
//		window.draw(sp1);
//	}
//
//
//};
//
//
//
//class WHITET : public Food {
//public:
//
//	void draw(RenderTarget& window, int x, int y) {
//		tex1.loadFromFile("img/WHITET.png");
//		sp1.setTexture(tex1);
//		sp1.setPosition(x, y);
//		sp1.setScale(0.6, 0.6);
//		window.draw(sp1);
//	}
//
//
//};



class REDR : public Food {
public:

	void draw(std::string png_path) {
		tex1.loadFromFile("img/REDR.png");
		sp1.setTexture(tex1);
	//	sp1.setScale(100, 100);
	//	sp1.setPosition(500, 500);
	}


};

class GREENC : public Food {
public:

	void draw(std::string png_path) {
		tex1.loadFromFile("img/GREENC.png");
		sp1.setTexture(tex1);
		
	//	sp1.setScale(0.6, 0.6);
	}


};


class ORANGEH : public Food {
public:

	void draw(std::string png_path) {
		tex1.loadFromFile("img/ORANGEH.png");
		sp1.setTexture(tex1);
	//	sp1.setScale(0.6, 0.6);
	}


};



class WHITET : public Food {
public:

	void draw(std::string png_path) {
		tex1.loadFromFile("img/WHITET.png");
		sp1.setTexture(tex1);
	//	sp1.setScale(0.6, 0.6);
	}


};


