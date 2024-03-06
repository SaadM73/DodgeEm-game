

/* Muhammad Saad Mursaleen
    22I-0835
   Bilal Raza
    22i-1325*/


#include <SFML/Graphics.hpp>
#include <time.h>
#include"player.h"
#include"Enemy.h"
#include <iostream>
#include <fstream>

using namespace std;

const char title[] = "OOP-Project, Spring-2023";
using namespace sf;



class Game
{
public:
    Sprite background; // Game background sprite
    Texture bg_texture;
    Sprite wall10;
    Texture wallTex;
    Texture wall2Tex;

    Text dispLives;
    
    int level;
    int score;

    Texture redFoodTexture, greenFoodTexture, orangeFoodTexture, whiteFoodTexture;






    Sprite pauseBackground; // Pause background 
    Texture pauseBg_texture;



    bool gamepaused = 0;
    Font style;



    float collisionCooldown = 0.0f;
    float pressCooldown = 0.0f;
    float checkCooldown = 0.0f;



    Text livesText; 
    Text scoreText;
    Text highScoreText;



    Player* p1;

    Enemy* e1;

    Food* f1;


    Food** RedRec;


    Food* RedRec1;
    Food* RedRec2;
    Food* RedRec3;
    Food* RedRec4;
    Food* RedRec5;
    Food* RedRec6;
    Food* RedRec7;
    Food* RedRec8;
    Food* RedRec9;
    Food* RedRec10;
    Food* RedRec11;
    Food* RedRec12;
    Food* RedRec13;
    Food* RedRec14;
    Food* RedRec15;
    Food* RedRec16;

    Food* Greencircle;
    Food* OrangeHex;
    Food* WhiteTri;


    int MAX_HIGH_SCORES = 5;
    int highScores[5] = { 0 };
    int highScore=0;



    Clock clk, clk2;
    float cordx = 0, cordy = 0;





    Game()
    {

        level = 1;

        p1 = new Player("img/player_ship.png");

        e1 = new Enemy("img/Enemyship.png");


        style.loadFromFile("img/Raleway-Black.ttf");

        redFoodTexture.loadFromFile("img/REDR.png");
        greenFoodTexture.loadFromFile("img/GREENC.png");
        orangeFoodTexture.loadFromFile("img/ORANGEH.png");
        whiteFoodTexture.loadFromFile("img/WHITET.png");

        pauseBg_texture.loadFromFile("img/background.png");
        pauseBackground.setTexture(pauseBg_texture);
        pauseBackground.setScale(2.5, 1.5);


        wall2Tex.loadFromFile("img/dodgeemfinal.png");

        wall10.setTexture(wall2Tex);
        wall10.setPosition(0,-100);
        wall10.setScale(1.05, 1.25);



        RedRec1 = new REDR;
        RedRec1->draw("img/REDR.png");
        RedRec1->sp1.setScale(1,1);
        RedRec1->sp1.setPosition(30, 700);

        RedRec2 = new REDR;
        RedRec2->draw("img/REDR.png");
        RedRec2->sp1.setScale(1,1);
        RedRec2->sp1.setPosition(870, 20);

        RedRec3 = new REDR;
        RedRec3->draw("img/REDR.png");
        RedRec3->sp1.setScale(1,1);
        RedRec3->sp1.setPosition(30, 20);

        RedRec4 = new REDR;
        RedRec4->draw("img/REDR.png");
        RedRec4->sp1.setScale(1,1);
        RedRec4->sp1.setPosition(240, 210);

        RedRec5 = new REDR;
        RedRec5->draw("img/REDR.png");
        RedRec5->sp1.setScale(1,1);
        RedRec5->sp1.setPosition(240, 520);

        RedRec6 = new REDR;
        RedRec6->draw("img/REDR.png");
        RedRec6->sp1.setScale(1,1);
        RedRec6->sp1.setPosition(770, 110);

        RedRec7 = new REDR;
        RedRec7->draw("img/REDR.png");
        RedRec7->sp1.setScale(1,1);
        RedRec7->sp1.setPosition(680, 520);

        RedRec8 = new REDR;
        RedRec8->draw("img/REDR.png");
        RedRec8->sp1.setScale(1,1);
        RedRec8->sp1.setPosition(680, 210);

        RedRec9 = new REDR;
        RedRec9->draw("img/REDR.png");
        RedRec9->sp1.setScale(1,1);
        RedRec9->sp1.setPosition(770, 600); 
        
        RedRec10 = new REDR;
        RedRec10->draw("img/REDR.png");
        RedRec10->sp1.setScale(1,1);
        RedRec10->sp1.setPosition(130, 600); 
        
        RedRec11 = new REDR;
        RedRec11->draw("img/REDR.png");
        RedRec11->sp1.setScale(1,1);
        RedRec11->sp1.setPosition(130, 110);   
        
        RedRec12 = new REDR;
        RedRec12->draw("img/REDR.png");
        RedRec12->sp1.setScale(1,1);
        RedRec12->sp1.setPosition(870, 700); 
        
        RedRec13 = new REDR;
        RedRec13->draw("img/REDR.png");
        RedRec13->sp1.setScale(1,1);
        RedRec13->sp1.setPosition(580, 430);    
        
        RedRec14 = new REDR;
        RedRec14->draw("img/REDR.png");
        RedRec14->sp1.setScale(1,1);
        RedRec14->sp1.setPosition(580, 300);   
        
        RedRec15 = new REDR;
        RedRec15->draw("img/REDR.png");
        RedRec15->sp1.setScale(1,1);
        RedRec15->sp1.setPosition(320, 430);     
        
        RedRec16 = new REDR;
        RedRec16->draw("img/REDR.png");
        RedRec16->sp1.setScale(1,1);
        RedRec16->sp1.setPosition(320, 300);   
        





        OrangeHex = new ORANGEH;
        OrangeHex->draw("img/ORANGEH.png");
        OrangeHex->sp1.setScale(1, 1);
        OrangeHex->sp1.setPosition(370, 540);

        Greencircle = new GREENC;
        Greencircle->draw("img/GREENC.png");
        Greencircle->sp1.setScale(0.4, 0.4);
        Greencircle->sp1.setPosition(30, 375);

        WhiteTri = new WHITET;
        WhiteTri->draw("img/WHITET.png");
        WhiteTri->sp1.setScale(1, 1);
        WhiteTri->sp1.setPosition(770, 375);



        //cordx = e1->enemySprite.getPosition().x;
        //cordy = e1->enemySprite.getPosition().y;

        ifstream highScoreFile("i220835_highscores.txt");
        if (highScoreFile.is_open())
        {
            highScoreFile >> highScore;
           // highScoreFile.close();
        }
        
        highScoreText.setFont(style);
        highScoreText.setCharacterSize(24);
        highScoreText.setFillColor(Color::White);
        highScoreText.setPosition(1000, 300);	

        highScoreText.setString("High Score: " + std::to_string(highScore));
// Position below the total_Score text




        bg_texture.loadFromFile("img/background.jpg");
        background.setTexture(bg_texture);
        background.setScale(2, 1.5);
    }


   void pauseGame(RenderWindow& saad) {  // function for functionalities after game is paused
        gamepaused = !gamepaused;
        if (gamepaused)
        {
            RenderWindow pauseWindow(VideoMode(780, 780), "Paused", Style::Close);
            Text op1("1. Resume", style, 40);      // SHOWING ALL THE OPTIONS ON PAUSE SCREEN
            Text op2("2. Restart", style, 40);
            Text op3("3. Save", style, 40);
            Text op4("4. Load", style, 40);
            Text op5("5. Exit", style, 40);

            op1.setPosition(300, 180);    // SETTIING POSITION OF ALL THE OPTIONS
            op2.setPosition(300, 280);
            op3.setPosition(300, 380);
            op4.setPosition(300, 480);
            op5.setPosition(300, 580);


            while (pauseWindow.isOpen()) {
                Event e;
                while (pauseWindow.pollEvent(e)) {
                    if (e.type == Event::Closed || (e.type == Event::KeyPressed && e.key.code == Keyboard::Num3))
                    {
                        pauseWindow.close();		//SAVE GAME IF 3 IS PRESSED
                     //   gameSaved();
                        gamepaused = !gamepaused;

                    }
                    else if (e.type == Event::KeyPressed && e.key.code == Keyboard::Num1)
                    {
                        pauseWindow.close();     //RESUME GAME IF 1 IS PRESSED
                        gamepaused = !gamepaused;
                    }

                    else if (e.type == Event::KeyPressed && e.key.code == Keyboard::Num5)
                    {
                        pauseWindow.close();  // EXIT GAME IF 5 IS PRESSED
                        saad.close();
                    }

                    else if (e.type == Event::KeyPressed && e.key.code == Keyboard::Num2)
                    {
                        pauseWindow.close();    //
                        //restart_game();
                    }
                    else if (e.type == Event::KeyPressed && e.key.code == Keyboard::Num4)
                    {
               //         gameLoadstate();
                        Game g2;
                      //  pauseWindow.close(); //LOAD GAME IF 4 IS PRESSED
                        gamepaused = !gamepaused;
                    }

                }

                pauseWindow.clear();
                pauseWindow.draw(pauseBackground);  // DRAWING ALL THE OBJECTS
                pauseWindow.draw(op1);
                pauseWindow.draw(op2);
                pauseWindow.draw(op3);
                pauseWindow.draw(op4);
                pauseWindow.draw(op5);
                pauseWindow.display();
            }
        }
    }


   void updateHS() {
       bool scoreUpdated = false;
       for (int i = 0; i < MAX_HIGH_SCORES; ++i) {
           if (score > highScores[i]) {
               for (int j = MAX_HIGH_SCORES - 1; j > i; --j) {
                   highScores[j] = highScores[j - 1];
               }
               highScores[i] = score;
               scoreUpdated = true;
               break;
           }
       }

       if (scoreUpdated) {
           ofstream highScoreFile("i220835_highscores.txt");
           if (highScoreFile.is_open()) {
               for (int i = 0; i < MAX_HIGH_SCORES; ++i) {
                   highScoreFile << highScores[i] << std::endl;
               }
               highScoreFile.close();
           }
       }
   }

 //  void updateHS(int score) {
   //    bool updated = false;

   //    // Temporary array to hold the new high scores
   //    int newHighScores[MAX_HIGH_SCORES];
   //    for (int i = 0, j = 0; j < MAX_HIGH_SCORES; ++i, ++j) {
   //        if (!updated && (i == MAX_HIGH_SCORES - 1 || score > highScores[i])) {
   //            newHighScores[j] = score;
   //            updated = true;
   //            if (i == MAX_HIGH_SCORES - 1) break; // If adding at the end of the array
   //            --i; // Stay on the current high score for the next iteration
   //        }
   //        else {
   //            newHighScores[j] = highScores[i];
   //        }
   //    }

   //    // Update the highScores array
   //    for (int i = 0; i < MAX_HIGH_SCORES; ++i) {
   //        highScores[i] = newHighScores[i];
   //    }

   //    // Update the highscores.txt file if there was an update
   //    if (updated) {
   //        std::ofstream highScoreFile("i220835_highscores.txt");
   //        if (highScoreFile.is_open()) {
   //            for (int i = 0; i < MAX_HIGH_SCORES; ++i) {
   //                highScoreFile << highScores[i] << std::endl;
   //            }
   //            highScoreFile.close();
   //        }
   //    }
   //}


    void FoodCollision() {

        if (checkCollision(p1->sprite, RedRec1->sp1))
        {
            score += 10;
         //   scoreText.setString("Score: " + std::to_string(score));
            //delete RedRec1;
            RedRec1->sp1.setPosition(-100, -100);
        }

        if (checkCollision(p1->sprite, RedRec2->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec2->sp1.setPosition(-100, -100);
        }

        if (checkCollision(p1->sprite, RedRec3->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec3->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec4->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec4->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec5->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec5->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec6->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec6->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec7->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec7->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec8->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec8->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec9->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec9->sp1.setPosition(-100, -100);
        }

        if (checkCollision(p1->sprite, RedRec10->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec10->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec11->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec11->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec12->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec12->sp1.setPosition(-100, -100);
        }

        if (checkCollision(p1->sprite, RedRec9->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec9->sp1.setPosition(-100, -100);
        }

        if (checkCollision(p1->sprite, RedRec13->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec13->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec14->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec14->sp1.setPosition(-100, -100);
        }


        if (checkCollision(p1->sprite, RedRec15->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec15->sp1.setPosition(-100, -100);
        }

        if (checkCollision(p1->sprite, RedRec16->sp1))
        {
            score += 10;
            //   scoreText.setString("Score: " + std::to_string(score));
            RedRec16->sp1.setPosition(-100, -100);
        }





        if (score >= 120) {
            if (checkCollision(p1->sprite, Greencircle->sp1))
            {
                p1->lives += 1;
                score += 20;
                //    scoreText.setString("Score: " + std::to_string(score));
                Greencircle->sp1.setPosition(-100, -100);
            }
        }

        if (score >= 30) {

            if (checkCollision(p1->sprite, OrangeHex->sp1))
            {
                p1->updateSpeed();
                score += 10;
                //   scoreText.setString("Score: " + std::to_string(score));
                OrangeHex->sp1.setPosition(-100, -100);
                clk2.restart();
            }

            if (clk2.getElapsedTime().asSeconds() > 10 && clk2.getElapsedTime().asSeconds() < 12) {
                p1->resetSpeed();
            }
        }

        if (score >= 90) {


            if (checkCollision(p1->sprite, WhiteTri->sp1))
            {
                
                    cordx = e1->enemySprite.getPosition().x;
                    cordy = e1->enemySprite.getPosition().y;
                    e1->enemySprite.setPosition(-100, -100);
                    clk.restart();
                

                WhiteTri->sp1.setPosition(-100, -100);
            }
            if (clk.getElapsedTime().asSeconds() > 10 && clk.getElapsedTime().asSeconds() < 11) {
             //   p1->resetSpeed();  // Reset player's speed to normal
                e1->enemySprite.setPosition(cordx, cordy);
               // e1->move();
            }

        }
    }



    void start_game()
    {


            srand(time(0));
            RenderWindow window(VideoMode(1280, 780), title);
            Clock clock;
            float timer = 0;

            while (window.isOpen())
            {
                float time = clock.getElapsedTime().asSeconds();
                clock.restart();
                timer += time;

                Event e;
                while (window.pollEvent(e))
                {
                    if (e.type == Event::Closed)
                        window.close();
                }

                if (Keyboard::isKeyPressed(sf::Keyboard::P)) // Pause the game if P is pressed
                {
                    pauseGame(window);
                }


                Text scoretxt("SCORE : ", style, 40);      // SHOWING score
                scoretxt.setPosition(1000, 180);

                Text livestxt("LIVES : ", style, 40);      // SHOWING Lives
                livestxt.setPosition(1000, 220);

                Text Leveltxt("LEVEL : ", style, 40);
                Leveltxt.setPosition(1000, 260);

                //Text highscoretxt("HIGHSCORE : ", style, 30);
                //highscoretxt.setPosition(1000, 300);

                //Text hs(std::to_string(highScore), style, 40);
                //hs.setPosition(1200, 300);

                Text scorenumtxt(std::to_string(score), style, 40);      // SHOWING Lives
                scorenumtxt.setPosition(1170, 180);

                Text Levelnumtxt(std::to_string(level), style, 40);      // SHOWING Lives
                Levelnumtxt.setPosition(1150, 260);


                Text livesnumtxt(std::to_string(p1->lives), style, 40);      // SHOWING Lives
                livesnumtxt.setPosition(1150, 220);


                FoodCollision();
                scoreText.setString("Score: " + std::to_string(score));
                //   updateHS();

                   //    f1 = new REDR;
                   //    f1->draw(window, 30, 400);

                   //if (p1->sprite.getGlobalBounds().intersects(f1->sp1.getGlobalBounds())) {
                   //    score += 10;
                   //    f1->draw(window, 0, 0);
                   //}


                   //  window.draw(f1->sp1);




                window.clear(Color::Black);
                window.draw(background);



                //p1->f1[0] = new REDR;
                //p1->f1[0]->draw(window,30,500);

                window.draw(wall10);
                window.draw(p1->sprite);
                window.draw(e1->enemySprite);
                window.draw(scoretxt);
                window.draw(scorenumtxt);
                window.draw(livestxt);
                window.draw(livesnumtxt);
                window.draw(Leveltxt);
                window.draw(Levelnumtxt);
                //window.draw(highscoretxt);
                //window.draw(hs);

                window.draw(highScoreText);

                window.draw(RedRec1->sp1);
                window.draw(RedRec2->sp1);
                window.draw(RedRec3->sp1);
                window.draw(RedRec4->sp1);
                window.draw(RedRec5->sp1);
                window.draw(RedRec6->sp1);
                window.draw(RedRec7->sp1);
                window.draw(RedRec8->sp1);
                window.draw(RedRec9->sp1);
                window.draw(RedRec10->sp1);
                window.draw(RedRec11->sp1);
                window.draw(RedRec12->sp1);
                window.draw(RedRec13->sp1);
                window.draw(RedRec14->sp1);
                window.draw(RedRec15->sp1);
                window.draw(RedRec16->sp1);


                if (score >= 40) {
                    window.draw(OrangeHex->sp1);
                }

                if (score >= 90) {
                    window.draw(WhiteTri->sp1);
                }

                if (score >= 120) {
                    window.draw(Greencircle->sp1);
                }


                if (score == 200) {
                    OrangeHex->sp1.setPosition(30, 100);
                    WhiteTri->sp1.setPosition(780, 500);
                    Greencircle->sp1.setPosition(680, 500);

                }
                if (score > 200) {
                    window.draw(OrangeHex->sp1);
                }

                if (score > 250) {
                    window.draw(WhiteTri->sp1);
                }

                if (score > 280) {
                    window.draw(Greencircle->sp1);
                }

                if (score == 400) {
                    OrangeHex->sp1.setPosition(230, 230);
                    WhiteTri->sp1.setPosition(330, 350);
                    Greencircle->sp1.setPosition(570, 600);

                }

                if (score > 420) {
                    window.draw(OrangeHex->sp1);
                }

                if (score > 480) {
                    window.draw(WhiteTri->sp1);
                }

                if (score > 530) {
                    window.draw(Greencircle->sp1);
                }


                window.draw(scoreText);
                window.draw(highScoreText);

                if (score == 380) {
                    level = 3;
                    e1->speed = 1.5;
                    RedRec1->sp1.setPosition(30, 700);
                    RedRec2->sp1.setPosition(870, 20);
                    RedRec3->sp1.setPosition(30, 20);
                    RedRec4->sp1.setPosition(240, 210);
                    RedRec5->sp1.setPosition(240, 520);
                    RedRec6->sp1.setPosition(770, 110);
                    RedRec7->sp1.setPosition(680, 520);
                    RedRec8->sp1.setPosition(680, 210);
                    RedRec9->sp1.setPosition(770, 600);
                    RedRec10->sp1.setPosition(130, 600);
                    RedRec11->sp1.setPosition(130, 110);
                    RedRec12->sp1.setPosition(870, 700);
                    RedRec13->sp1.setPosition(580, 430);
                    RedRec14->sp1.setPosition(580, 300);
                    RedRec15->sp1.setPosition(320, 430);
                    RedRec16->sp1.setPosition(320, 300);
                }


                if (score == 190) {

                    level=2;
                    RedRec1->sp1.setPosition(30, 700);
                    RedRec2->sp1.setPosition(870, 20);
                    RedRec3->sp1.setPosition(30, 20);
                    RedRec4->sp1.setPosition(240, 210);
                    RedRec5->sp1.setPosition(240, 520);
                    RedRec6->sp1.setPosition(770, 110);
                    RedRec7->sp1.setPosition(680, 520);
                    RedRec8->sp1.setPosition(680, 210);
                    RedRec9->sp1.setPosition(770, 600);
                    RedRec10->sp1.setPosition(130, 600);
                    RedRec11->sp1.setPosition(130, 110);
                    RedRec12->sp1.setPosition(870, 700);
                    RedRec13->sp1.setPosition(580, 430);
                    RedRec14->sp1.setPosition(580, 300);
                    RedRec15->sp1.setPosition(320, 430);
                    RedRec16->sp1.setPosition(320, 300);

                }

                if (level == 2) {
                    if (int(e1->enemySprite.getPosition().x) == 470) {
                        updateEnemyL2();
                    }
                }


                updateHS();



                p1->move();
                e1->move();


                checkCooldown -= time;

                if (e1->enemySprite.getPosition().y == 370 && checkCooldown <= 0.0f) {
                    updateEnemy();
                    checkCooldown = 2.0f;
                }

                pressCooldown -= time;

                if (Keyboard::isKeyPressed(sf::Keyboard::Right) && pressCooldown <= 0.0f) // Pause the game if P is pressed
                {
                    p1->moveright();
                    pressCooldown = 0.2f;
                }


                if (Keyboard::isKeyPressed(sf::Keyboard::Left) && pressCooldown <= 0.0f) {
                    p1->moveleft();
                    pressCooldown = 0.2f;
                }

                if (Keyboard::isKeyPressed(sf::Keyboard::Up) && pressCooldown <= 0.0f) {
                    p1->moveup();
                    pressCooldown = 0.2f;
                }

                if (Keyboard::isKeyPressed(sf::Keyboard::Down) && pressCooldown <= 0.0f) {
                    p1->movedown();
                    pressCooldown = 0.2f;
                }





                collisionCooldown -= time;
                if (collisionCooldown <= 0.0f && p1->sprite.getGlobalBounds().intersects(e1->enemySprite.getGlobalBounds())) {
                    p1->lives--;
                    collisionCooldown = 1.0f; // Set cooldown to 1 second
                }

                if (p1->lives == 0) {
                    window.close();
                }

                window.display();
            }
    }

    void updateEnemy() {
        if (e1->enemyRowNo == p1->rowNo) {
            return;
        }
        else if (e1->enemyRowNo > p1->rowNo && e1->goUp) {
            e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x) + 100,int( e1->enemySprite.getPosition().y));

            e1->enemyRowNo--;
        }

        else if (e1->enemyRowNo > p1->rowNo && !(e1->goUp)) {
            e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x) - 100, int(e1->enemySprite.getPosition().y));

            e1->enemyRowNo--;
        }

        else if (e1->enemyRowNo < p1->rowNo && e1->goUp) {
            e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x) - 100, int(e1->enemySprite.getPosition().y));

            e1->enemyRowNo++;
        }

        else if (e1->enemyRowNo < p1->rowNo && !(e1->goUp)) {
            e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x) + 100, int(e1->enemySprite.getPosition().y));

            e1->enemyRowNo++;
        }

        return;

    }


    void updateEnemyL2() {
        if (e1->enemyRowNo == p1->rowNo) {
            return;
        }
        else if (e1->enemyRowNo > p1->rowNo && e1->goRight) {
            if (e1->enemyRowNo == 3) {

                e1->enemySprite.setPosition(int((e1->enemySprite.getPosition().x)), int(e1->enemySprite.getPosition().y)+90);

                e1->enemyRowNo--;
            }

            else if (e1->enemyRowNo == 2) {
                e1->enemySprite.setPosition(int((e1->enemySprite.getPosition().x)), int(e1->enemySprite.getPosition().y) + 100);

                e1->enemyRowNo--;
            }

            else if (e1->enemyRowNo == 1) {
                e1->enemySprite.setPosition(int((e1->enemySprite.getPosition().x)), int(e1->enemySprite.getPosition().y) + 90);

                e1->enemyRowNo--;
            }
        }

        else if (e1->enemyRowNo > p1->rowNo && !e1->goRight) {
            if (e1->enemyRowNo == 1) {

                e1->enemySprite.setPosition(int((e1->enemySprite.getPosition().x)), int(e1->enemySprite.getPosition().y) - 90);

                e1->enemyRowNo--;
            }

            else if (e1->enemyRowNo == 2) {
                e1->enemySprite.setPosition(int((e1->enemySprite.getPosition().x)), int(e1->enemySprite.getPosition().y) - 80);

                e1->enemyRowNo--;
            }

            else if (e1->enemyRowNo == 3) {
                e1->enemySprite.setPosition(int((e1->enemySprite.getPosition().x)), int(e1->enemySprite.getPosition().y) - 100);

                e1->enemyRowNo--;
            }
        }



        else if (e1->enemyRowNo < p1->rowNo && e1->goRight) {
            if (e1->enemyRowNo == 0) {
                e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x), int(e1->enemySprite.getPosition().y) - 90);

                e1->enemyRowNo++;
            }
            else if (e1->enemyRowNo == 1) {
                e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x), int(e1->enemySprite.getPosition().y) - 100);

                e1->enemyRowNo++;
            }
            else if (e1->enemyRowNo == 2) {
                e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x), int(e1->enemySprite.getPosition().y) - 90);

                e1->enemyRowNo++;
            }
        }

        else if (e1->enemyRowNo < p1->rowNo && !e1->goRight) {
            if (e1->enemyRowNo == 0) {
                e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x), int(e1->enemySprite.getPosition().y) + 90);

                e1->enemyRowNo++;
            }
            else if (e1->enemyRowNo == 1) {
                e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x), int(e1->enemySprite.getPosition().y) +80);

                e1->enemyRowNo++;
            }
            else if (e1->enemyRowNo == 2) {
                e1->enemySprite.setPosition(int(e1->enemySprite.getPosition().x), int(e1->enemySprite.getPosition().y) +100);

                e1->enemyRowNo++;
            }
        }
        return;

    }




    bool checkCollision(Sprite a, Sprite b)
    {
        return a.getGlobalBounds().intersects(b.getGlobalBounds());
    }



};
