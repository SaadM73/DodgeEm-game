#pragma once

/* Muhammad Saad Mursaleen
	22I-0835
   Bilal Raza
	22i-1325*/


#include <SFML/Graphics.hpp>
#include<string.h>
using namespace sf;
class Enemy {
public:
	Texture enemytex;
	Sprite enemySprite;
	float speed = 1;
	int x, y;
	int enemyRowNo;

	bool goUp;
	bool goRight;
	Enemy(std::string png_path)
	{
		enemyRowNo = 3;


		enemytex.loadFromFile(png_path);
		enemySprite.setTexture(enemytex);
		x = 350; y =700;
		enemySprite.setPosition(x, y);
		enemySprite.setScale(0.6, 0.6);


	}

	//void move() {
	//	float delta_x = 0, delta_y = 0;

	//	//left row3
	//	if (int(enemySprite.getPosition().y) == 700 && int(enemySprite.getPosition().x) > 30 && enemyRowNo==3) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipL.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);


	//	}

	//	//left row2
	//	if (enemySprite.getPosition().y == 600 && enemySprite.getPosition().x > 130 && enemyRowNo == 2) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipL.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);


	//	}

	//	//left row1
	//	if (enemySprite.getPosition().y == 520 && enemySprite.getPosition().x > 230 && enemyRowNo == 1) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipL.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);


	//	}
	//	//left row0
	//	if (enemySprite.getPosition().y == 430 && enemySprite.getPosition().x > 330 && enemyRowNo == 0) {
	//		delta_x = -speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipL.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);


	//	}


	//	//down row3
	//	if (int(enemySprite.getPosition().y) < 700 && int(enemySprite.getPosition().x) == 880 && enemyRowNo == 3) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		enemytex.loadFromFile("img/EnemyShipD.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = false;


	//	}

	//	//down row 2
	//	if (enemySprite.getPosition().y < 600 && enemySprite.getPosition().x == 780 && enemyRowNo == 2) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		enemytex.loadFromFile("img/EnemyShipD.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = false;


	//	}

	//	//down row 1
	//	if (enemySprite.getPosition().y < 520 && enemySprite.getPosition().x == 680 && enemyRowNo == 1) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		enemytex.loadFromFile("img/EnemyShipD.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = false;


	//	}

	//	//down row 0
	//	if (enemySprite.getPosition().y < 430 && enemySprite.getPosition().x == 580 && enemyRowNo == 0) {
	//		delta_x = 0;
	//		delta_y = speed;
	//		enemytex.loadFromFile("img/EnemyShipD.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = false;


	//	}


	//	//right row 3
	//	if (int(enemySprite.getPosition().x) < 880 && int(enemySprite.getPosition().y) == 20 && enemyRowNo == 3) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipR.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);

	//	}


	//	//right row 2
	//	if (enemySprite.getPosition().x < 780 && enemySprite.getPosition().y == 110 && enemyRowNo == 2) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipR.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);

	//	}

	//	//right row 1
	//	if (enemySprite.getPosition().x < 680 && enemySprite.getPosition().y == 210 && enemyRowNo == 1) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipR.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);

	//	}

	//	//right row 0
	//	if (enemySprite.getPosition().x < 580 && enemySprite.getPosition().y == 300 && enemyRowNo == 0) {
	//		delta_x = speed;
	//		delta_y = 0;
	//		enemytex.loadFromFile("img/EnemyShipR.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);

	//	}

	//	//up row3
	//	if (int(enemySprite.getPosition().x) == 30 && int(enemySprite.getPosition().y) > 20 && enemyRowNo == 3) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		enemytex.loadFromFile("img/EnemyShip.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = true;

	//	}



	//	//up row2
	//	if (enemySprite.getPosition().x == 130 && enemySprite.getPosition().y > 110 && enemyRowNo == 2) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		enemytex.loadFromFile("img/EnemyShip.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = true;


	//	}


	//	//up row1
	//	if (enemySprite.getPosition().x == 230 && enemySprite.getPosition().y > 210 && enemyRowNo == 1) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		enemytex.loadFromFile("img/EnemyShip.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = true;


	//	}

	//	//up row0
	//	if (enemySprite.getPosition().x == 330 && enemySprite.getPosition().y > 300 && enemyRowNo == 0) {
	//		delta_x = 0;
	//		delta_y = -speed;
	//		enemytex.loadFromFile("img/EnemyShip.png");
	//		enemySprite.setTexture(enemytex);
	//		enemySprite.setScale(0.6, 0.4);
	//		goUp = true;


	//	}





	//	delta_x *= speed;
	//	delta_y *= speed;

	//	enemySprite.move(delta_x, delta_y);

	//}

	void move() {
		float delta_x = 0, delta_y = 0;
		const float threshold = 5.0f; // Threshold for position checks

		// Left movement for rows 3, 2, 1, 0
		if (std::abs(enemySprite.getPosition().y - 700) <= threshold && enemySprite.getPosition().x > 30 && enemyRowNo == 3) {
			delta_x = -speed;
			enemytex.loadFromFile("img/EnemyShipL.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 0;

			// Set texture and scale for left movement
		}
		else if (std::abs(enemySprite.getPosition().y - 600) <= threshold && enemySprite.getPosition().x > 130 && enemyRowNo == 2) {
			delta_x = -speed;
			enemytex.loadFromFile("img/EnemyShipL.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 0;

			// Set texture and scale for left movement
		}
		else if (std::abs(enemySprite.getPosition().y - 520) <= threshold && enemySprite.getPosition().x > 230 && enemyRowNo == 1) {
			delta_x = -speed;
			// Set texture and scale for left movement
			enemytex.loadFromFile("img/EnemyShipL.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 0;

		}
		else if (std::abs(enemySprite.getPosition().y - 430) <= threshold && enemySprite.getPosition().x > 330 && enemyRowNo == 0) {
			delta_x = -speed;
			enemytex.loadFromFile("img/EnemyShipL.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 0;

			// Set texture and scale for left movement
		}

		// Down movement for rows 3, 2, 1, 0
		else if (std::abs(enemySprite.getPosition().x - 880) <= threshold && enemySprite.getPosition().y < 700 && enemyRowNo == 3) {
			delta_y = speed;
			enemytex.loadFromFile("img/EnemyShipD.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = false;
			// Set texture and scale for down movement
		}
		else if (std::abs(enemySprite.getPosition().x - 780) <= threshold && enemySprite.getPosition().y < 600 && enemyRowNo == 2) {
			delta_y = speed;
			enemytex.loadFromFile("img/EnemyShipD.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = false;
			// Set texture and scale for down movement
		}
		else if (std::abs(enemySprite.getPosition().x - 680) <= threshold && enemySprite.getPosition().y < 520 && enemyRowNo == 1) {
			delta_y = speed;
			enemytex.loadFromFile("img/EnemyShipD.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = false;
			// Set texture and scale for down movement
		}
		else if (std::abs(enemySprite.getPosition().x - 580) <= threshold && enemySprite.getPosition().y < 430 && enemyRowNo == 0) {
			delta_y = speed;
			enemytex.loadFromFile("img/EnemyShipD.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = false;
			// Set texture and scale for down movement
		}

		// Right movement for rows 3, 2, 1, 0
		else if (std::abs(enemySprite.getPosition().y - 20) <= threshold && enemySprite.getPosition().x < 880 && enemyRowNo == 3) {
			delta_x = speed;
			enemytex.loadFromFile("img/EnemyShipR.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 1;
			// Set texture and scale for right movement
		}
		else if (std::abs(enemySprite.getPosition().y - 110) <= threshold && enemySprite.getPosition().x < 780 && enemyRowNo == 2) {
			delta_x = speed;
			enemytex.loadFromFile("img/EnemyShipR.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 1;

			// Set texture and scale for right movement
		}
		else if (std::abs(enemySprite.getPosition().y - 210) <= threshold && enemySprite.getPosition().x < 680 && enemyRowNo == 1) {
			delta_x = speed;
			enemytex.loadFromFile("img/EnemyShipR.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 1;

			// Set texture and scale for right movement
		}
		else if (std::abs(enemySprite.getPosition().y - 300) <= threshold && enemySprite.getPosition().x < 580 && enemyRowNo == 0) {
			delta_x = speed;
			enemytex.loadFromFile("img/EnemyShipR.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goRight = 1;

			// Set texture and scale for right movement
		}

		// Up movement for rows 3, 2, 1, 0
		else if (std::abs(enemySprite.getPosition().x - 30) <= threshold && enemySprite.getPosition().y > 20 && enemyRowNo == 3) {
			delta_y = -speed;
			enemytex.loadFromFile("img/EnemyShip.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = true;
			// Set texture and scale for up movement
		}
		else if (std::abs(enemySprite.getPosition().x - 130) <= threshold && enemySprite.getPosition().y > 110 && enemyRowNo == 2) {
			delta_y = -speed;
			enemytex.loadFromFile("img/EnemyShip.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = true;
			// Set texture and scale for up movement
		}
		else if (std::abs(enemySprite.getPosition().x - 230) <= threshold && enemySprite.getPosition().y > 210 && enemyRowNo == 1) {
			delta_y = -speed;
			enemytex.loadFromFile("img/EnemyShip.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = true;
			// Set texture and scale for up movement
		}
		else if (std::abs(enemySprite.getPosition().x - 330) <= threshold && enemySprite.getPosition().y > 300 && enemyRowNo == 0) {
			delta_y = -speed;
			enemytex.loadFromFile("img/EnemyShip.png");
			enemySprite.setTexture(enemytex);
			enemySprite.setScale(0.6, 0.4);
			goUp = true;
			// Set texture and scale for up movement
		}

		// Apply the movement
		enemySprite.move(delta_x * speed, delta_y * speed);
	}



};
