

/* Muhammad Saad Mursaleen
	22I-0835
   Bilal Raza
	22i-1325*/


#include <SFML/Graphics.hpp>
#include<string.h>
#include"Food.h"
using namespace sf;
class Player {
public:




	Food* f1[15];

	Texture tex;
	Sprite sprite;
	float speed = 1;
	int x, y;

	int lives;
	int score;

	int rowNo;




	Player(std::string png_path)
	{

		lives = 3;
		rowNo = 3;
		score = 0;


		tex.loadFromFile(png_path);
		sprite.setTexture(tex);
		x = 420; y = 20;
		sprite.setPosition(x, y);
		sprite.setScale(0.6, 0.6);


	}

	//void move() {
	//	float delta_x = 0, delta_y = 0;



	//	//left row
	//	if (int(sprite.getPosition().y) == 20 && int(sprite.getPosition().x) > 30 && rowNo == 3) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipL.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}


	//	//left row 2

	//	if (int(sprite.getPosition().y) == 110 && int(sprite.getPosition().x) > 130 && rowNo==2) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipL.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}



	//	//left row 1

	//	if (int(sprite.getPosition().y) == 210 && int(sprite.getPosition().x) > 220 && rowNo == 1) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipL.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//left row 0

	//	if (int(sprite.getPosition().y) == 300 && int(sprite.getPosition().x) > 320 && rowNo == 0) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipL.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}




	//	//down  row 3



	//    if (int(sprite.getPosition().y) < 700 && int(sprite.getPosition().x) == 30 && rowNo == 3) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		tex.loadFromFile("img/player_shipD.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//down row2
	//	if (int(sprite.getPosition().y) < 600 && int(sprite.getPosition().x) == 130 && rowNo==2) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		tex.loadFromFile("img/player_shipD.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//down row1
	//	if (int(sprite.getPosition().y) < 520 && int(sprite.getPosition().x) == 220 && rowNo == 1) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		tex.loadFromFile("img/player_shipD.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}


	//	//down row0
	//	if (int(sprite.getPosition().y) < 430 && int(sprite.getPosition().x) == 320 && rowNo == 0) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		tex.loadFromFile("img/player_shipD.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}




	//	//right  row 3
	//    if (int(sprite.getPosition().x) < 870 && int(sprite.getPosition().y) == 700 && rowNo == 3) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipR.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//right row2
	//	if (int(sprite.getPosition().x) < 770 && int(sprite.getPosition().y) == 600 && rowNo == 2) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipR.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//right row 1
	//	if (int(sprite.getPosition().x) < 680 && int(sprite.getPosition().y) == 520 && rowNo == 1) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipR.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//right row 0
	//	if (int(sprite.getPosition().x) < 580 && int(sprite.getPosition().y) == 430 && rowNo == 0) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		tex.loadFromFile("img/player_shipR.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}



	//	//up row 3
	//	if (int(sprite.getPosition().x) == 870 && int(sprite.getPosition().y) > 20 && rowNo == 3) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		tex.loadFromFile("img/player_ship.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//up row 2
	//	if (int(sprite.getPosition().x) == 770 && int(sprite.getPosition().y) > 110 && rowNo == 2) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		tex.loadFromFile("img/player_ship.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}

	//	//up row 1
	//	if (int(sprite.getPosition().x) == 680 && int(sprite.getPosition().y) > 210 && rowNo == 1) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		tex.loadFromFile("img/player_ship.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}


	//	//up row 0
	//	if (int(sprite.getPosition().x) == 580 && int(sprite.getPosition().y) > 300 && rowNo == 0) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		tex.loadFromFile("img/player_ship.png");
	//		sprite.setTexture(tex);
	//		sprite.setScale(0.6, 0.4);
	//	}





	//	delta_x *= speed;
	//	delta_y *= speed;

	//	sprite.move(delta_x, delta_y);

	//}





	void move() {
		float delta_x = 0, delta_y = 0;
		const float threshold = 2.0f; // Threshold for position checks

		// Left movement for rows 3, 2, 1, 0
		if (std::abs(sprite.getPosition().y - 20) <= threshold && sprite.getPosition().x > 30 && rowNo == 3) {
			delta_x = -speed;
			tex.loadFromFile("img/player_shipL.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for left movement
		}
		else if (std::abs(sprite.getPosition().y - 110) <= threshold && sprite.getPosition().x > 130 && rowNo == 2) {
			delta_x = -speed;
			tex.loadFromFile("img/player_shipL.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for left movement
		}
		else if (std::abs(sprite.getPosition().y - 210) <= threshold && sprite.getPosition().x > 220 && rowNo == 1) {
			delta_x = -speed;
			tex.loadFromFile("img/player_shipL.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for left movement
		}
		else if (std::abs(sprite.getPosition().y - 300) <= threshold && sprite.getPosition().x > 320 && rowNo == 0) {
			delta_x = -speed;
			tex.loadFromFile("img/player_shipL.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for left movement
		}

		// Down movement for rows 3, 2, 1, 0
		else if (std::abs(sprite.getPosition().x - 30) <= threshold && sprite.getPosition().y < 700 && rowNo == 3) {
			delta_y = speed;
			tex.loadFromFile("img/player_shipD.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for down movement
		}
		else if (std::abs(sprite.getPosition().x - 130) <= threshold && sprite.getPosition().y < 600 && rowNo == 2) {
			delta_y = speed;
			tex.loadFromFile("img/player_shipD.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for down movement
		}
		else if (std::abs(sprite.getPosition().x - 220) <= threshold && sprite.getPosition().y < 520 && rowNo == 1) {
			delta_y = speed;
			tex.loadFromFile("img/player_shipD.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for down movement
		}
		else if (std::abs(sprite.getPosition().x - 320) <= threshold && sprite.getPosition().y < 430 && rowNo == 0) {
			delta_y = speed;
			tex.loadFromFile("img/player_shipD.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for down movement
		}

		// Right movement for rows 3, 2, 1, 0
		else if (std::abs(sprite.getPosition().y - 700) <= threshold && sprite.getPosition().x < 870 && rowNo == 3) {
			delta_x = speed;
			tex.loadFromFile("img/player_shipR.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for right movement
		}
		else if (std::abs(sprite.getPosition().y - 600) <= threshold && sprite.getPosition().x < 770 && rowNo == 2) {
			delta_x = speed;
			tex.loadFromFile("img/player_shipR.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for right movement
		}
		else if (std::abs(sprite.getPosition().y - 520) <= threshold && sprite.getPosition().x < 680 && rowNo == 1) {
			delta_x = speed;
			tex.loadFromFile("img/player_shipR.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for right movement
		}
		else if (std::abs(sprite.getPosition().y - 430) <= threshold && sprite.getPosition().x < 580 && rowNo == 0) {
			delta_x = speed;
			tex.loadFromFile("img/player_shipR.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for right movement
		}

		// Up movement for rows 3, 2, 1, 0
		else if (std::abs(sprite.getPosition().x - 870) <= threshold && sprite.getPosition().y > 20 && rowNo == 3) {
			delta_y = -speed;
			tex.loadFromFile("img/player_ship.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for up movement
		}
		else if (std::abs(sprite.getPosition().x - 770) <= threshold && sprite.getPosition().y > 110 && rowNo == 2) {
			delta_y = -speed;
			tex.loadFromFile("img/player_ship.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for up movement
		}
		else if (std::abs(sprite.getPosition().x - 680) <= threshold && sprite.getPosition().y > 210 && rowNo == 1) {
			delta_y = -speed;
			tex.loadFromFile("img/player_ship.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for up movement
		}
		else if (std::abs(sprite.getPosition().x - 580) <= threshold && sprite.getPosition().y > 300 && rowNo == 0) {
			delta_y = -speed;
			tex.loadFromFile("img/player_ship.png");
			sprite.setTexture(tex);
			sprite.setScale(0.6, 0.4);
			// Set texture and scale for up movement
		}

		// Apply the movement
		sprite.move(delta_x * speed, delta_y * speed);
	}






	//void moveright() {
	//	if (sprite.getPosition().x == 580 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(680,sprite.getPosition().y);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 680 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(770, sprite.getPosition().y);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 770 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(870, sprite.getPosition().y);
	//		rowNo = 3;
	//		return;

	//	}

	//	else if (sprite.getPosition().x == 30 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(130, sprite.getPosition().y);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 130 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(220, sprite.getPosition().y);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 220 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(320, sprite.getPosition().y);
	//		rowNo = 0;
	//		return;

	//	}

	//}


	void moveright() {
		const float threshold = 5.0f; // Threshold for position checks

		if (std::abs(sprite.getPosition().x - 580) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(680, sprite.getPosition().y);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 680) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(770, sprite.getPosition().y);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 770) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(870, sprite.getPosition().y);
			rowNo = 3;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 30) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(130, sprite.getPosition().y);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 130) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(220, sprite.getPosition().y);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 220) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(320, sprite.getPosition().y);
			rowNo = 0;
			return;
		}
	}







	//void moveleft() {

	//	if (sprite.getPosition().x == 870 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(770, sprite.getPosition().y);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 770 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(680, sprite.getPosition().y);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 680 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(580, sprite.getPosition().y);
	//		rowNo = 0;
	//		return;

	//	}

	//	else if (sprite.getPosition().x == 320 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(220, sprite.getPosition().y);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 220 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(130, sprite.getPosition().y);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().x == 130 && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
	//		sprite.setPosition(30, sprite.getPosition().y);
	//		rowNo = 3;
	//		return;

	//	}

	//}



	void moveleft() {
		const float threshold = 5.0f; // Threshold for position checks

		if (std::abs(sprite.getPosition().x - 870) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(770, sprite.getPosition().y);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 770) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(680, sprite.getPosition().y);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 680) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(580, sprite.getPosition().y);
			rowNo = 0;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 320) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(220, sprite.getPosition().y);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 220) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(130, sprite.getPosition().y);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().x - 130) <= threshold && sprite.getPosition().y > 280 && sprite.getPosition().y < 470) {
			sprite.setPosition(30, sprite.getPosition().y);
			rowNo = 3;
			return;
		}
	}





	//void moveup() {
	//	if (sprite.getPosition().y == 300 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 210);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 210 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 110);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 110 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 20);
	//		rowNo = 3;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 700 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 600);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 600 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 520);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 520 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 430);
	//		rowNo = 0;
	//		return;
	//	}


	//}


	void moveup() {
		const float threshold = 5.0f; // Threshold for position checks

		if (std::abs(sprite.getPosition().y - 300) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 210);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 210) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 110);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 110) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 20);
			rowNo = 3;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 700) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 600);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 600) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 520);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 520) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 430);
			rowNo = 0;
			return;
		}
	}





	//void movedown() {
	//	if (sprite.getPosition().y == 20 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 110);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 110 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 210);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 210 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 300);
	//		rowNo = 0;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 430 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 520);
	//		rowNo = 1;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 520 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 600);
	//		rowNo = 2;
	//		return;
	//	}

	//	else if (sprite.getPosition().y == 600 && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
	//		sprite.setPosition(sprite.getPosition().x, 700);
	//		rowNo = 3;
	//		return;
	//	}


	//}

	void movedown() {
		const float threshold = 5.0f; // Threshold for position checks

		if (std::abs(sprite.getPosition().y - 20) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 110);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 110) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 210);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 210) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 300);
			rowNo = 0;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 430) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 520);
			rowNo = 1;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 520) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 600);
			rowNo = 2;
			return;
		}

		else if (std::abs(sprite.getPosition().y - 600) <= threshold && sprite.getPosition().x > 390 && sprite.getPosition().x < 560) {
			sprite.setPosition(sprite.getPosition().x, 700);
			rowNo = 3;
			return;
		}
	}



	void resetSpeed() {
		speed = 1;
	}

	void updateSpeed() {
		speed = 1.5;
	}


	//void drawfood(RenderTarget& window) {

	//	for (int i = 0; i < 5; i++) {
	//		f1[i] = new REDR;
	//		f1[i]->draw(window, 200*(i+1), 30);

	//	}
	//}




};
