#ifndef MENU_H
#define MENU_H


/* Muhammad Saad Mursaleen
    22I-0835
   Bilal Raza
    22i-1325*/
#include "Game.h"
#include<SFML/Audio.hpp>
#include<iostream>

#include <SFML/Graphics.hpp>
#include <fstream>
#include <string>

using namespace sf;
using namespace std;



class Menu {
public:


    // declaring the class attributes
    // rendering objects for differnet things
    RenderWindow window;
    Font font;
    Text menu;

    Text starttext;
    Text instructionsmenu;
    Text exit;
    Text highScoreOption;
    Text levelsOption;
    Text Name;


    Sprite bgimg;
    Texture bgtex;

    Music music;  // object for the music

    Music click;  // object for the sound if any option on the menu is selected


    Sprite insbg;
    Texture insbgtex;


    int MAX_HIGH_SCORES = 5;
    int highScores[5] = { 0 };

    Menu() {
        window.create(VideoMode(800, 800), "Dodge Em Menu");
        window.setFramerateLimit(40);

        font.loadFromFile("img/Raleway-Black.ttf");

        bgtex.loadFromFile("img/background.jpg");
        insbgtex.loadFromFile("img/background.jpg");

        // adding music to the game            
        music.openFromFile("music.ogg");
        music.setPosition(0, 1, 10);
        music.setVolume(100);
        music.setLoop(true);
        music.play();

        // setting backgounnd image
        bgimg.setTexture(bgtex);
        bgimg.setScale(2.5, 1.5);

        insbg.setTexture(insbgtex);
        insbg.setScale(2.5, 1.5);


        //setting menu heading
        menu.setFont(font);
        menu.setString("Dodge Em");
        menu.setCharacterSize(60);
        menu.setFillColor(Color::Green);
        menu.setPosition(200, 50);

        // adding start game option
        starttext.setFont(font);
        starttext.setString("1. Start Game");
        starttext.setCharacterSize(28);
        starttext.setFillColor(Color::White);
        starttext.setPosition(50, 200);

        // adding viewing instructions option
        instructionsmenu.setFont(font);
        instructionsmenu.setString("2. Instructions");
        instructionsmenu.setCharacterSize(28);
        instructionsmenu.setFillColor(Color::White);
        instructionsmenu.setPosition(50, 300);
        // adding exit option text
        exit.setFont(font);
        exit.setString("3. Exit");
        exit.setCharacterSize(28);
        exit.setFillColor(Color::White);
        exit.setPosition(50, 400);

        // adding high score option text
        highScoreOption.setFont(font);
        highScoreOption.setString("4. High Scores");
        highScoreOption.setCharacterSize(28);
        highScoreOption.setFillColor(Color::White);
        highScoreOption.setPosition(50, 500);



        // adding levels option
        levelsOption.setFont(font);
        levelsOption.setString("5. levels");
        levelsOption.setCharacterSize(28);
        levelsOption.setFillColor(Color::White);
        levelsOption.setPosition(50, 600);


        // Adding name at the bottom
        Name.setFont(font);
        Name.setString("Muhammad Saad Mursaleen          &           Bilal Raza\n                         22I-0835                                              22I-1325");
        Name.setCharacterSize(18);
        Name.setFillColor(Color::White);
        Name.setPosition(150, 720);
    }  
    void dsmenu() {
        Game g;

        while (window.isOpen()) {
            Event sa;
            while (window.pollEvent(sa)) {
                if (sa.type == Event::Closed)
                    window.close();
            }

            // Add functionality for menu options

            if (Keyboard::isKeyPressed(Keyboard::Num1)) {
                // calling start game function is 1 is pressed
                click.openFromFile("click.ogg");
                click.setPosition(0, 1, 10);
                click.setVolume(100);
                click.setLoop(0);
                click.play();
                g.start_game();
            }

            if (Keyboard::isKeyPressed(Keyboard::Num2)) {
                // calling instructions function if 2 is pressed
                click.openFromFile("click.ogg");
                click.setPosition(0, 1, 10);
                click.setVolume(100);
                click.setLoop(0);
                click.play();
                instructions();
            }

            if (Keyboard::isKeyPressed(Keyboard::Num3)) {
                // closing the game if the exit option is pressed
                click.openFromFile("click.ogg");
                click.setPosition(0, 1, 10);
                click.setVolume(100);
                click.setLoop(0);
                click.play();
                window.close();
            }

            if (Keyboard::isKeyPressed(Keyboard::Num4)) {
                // option to display the current highscore
                click.openFromFile("click.ogg");
                click.setPosition(0, 1, 10);
                click.setVolume(100);
                click.setLoop(0);
                click.play();
                highscore();
            }

            if (Keyboard::isKeyPressed(Keyboard::Num5)) {
                // option to display the current level
                click.openFromFile("click.ogg");
                click.setPosition(0, 1, 10);
                click.setVolume(100);
                click.setLoop(0);
                click.play();
                LEVELS();
            }



            window.clear(Color::Black);  // drawing all the things
            window.draw(bgimg);
            window.draw(menu);
            window.draw(starttext);
            window.draw(instructionsmenu);
            window.draw(exit);
            window.draw(highScoreOption);
            window.draw(levelsOption);
            window.draw(Name);
            window.display();
        }
    }





    void readHighScores() {
        std::ifstream highScoreFile("i220835_highscores.txt");
        if (highScoreFile.is_open()) {
            for (int i = 0; i < MAX_HIGH_SCORES; ++i) {
                if (highScoreFile >> highScores[i]) {
                    // Successfully read a high score
                }
                else {
                    // No more scores in the file or an error occurred
                    break;
                }
            }
            highScoreFile.close();
        }
        else {
            std::cout << "Unable to open high score file." << std::endl;
        }
    }




    

    void highscore1()
    {



        ifstream file("i220835_highestcore.txt");
        if (!file.is_open())
        {
            cout << "Highscore file couldn't be openened :(" << endl;
        }
        RenderWindow window(VideoMode(780, 780), "Highest Score Even Made?", Style::Close);
        Text  hst;
        hst.setFont(font);
        // hst.setString("Press esc to end");
        hst.setCharacterSize(24);
        hst.setFillColor(Color::White);
        hst.setPosition(150, 280);


        string line;
        string  hs;
        hs = "Name : Saad Mursaleen\nRank : Gold\nScore : ";
        while (getline(file, line)) {
            hs += line + "\n";
        }
        hs += " \n\n Press Esc to go back";

        hst.setString(hs);


        while (window.isOpen()) {
            Event e;
            while (window.pollEvent(e)) {
                if (e.type == Event::Closed)
                    window.close();
            }

            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                return;
            }

            window.clear(Color::Black);
           // window.draw(pb);
            window.draw(hst);
            window.display();
        }
    }


    void highscore() {

        readHighScores();


        ifstream file("i220835_highscores.txt");
        if (!file.is_open()) {
            cout << "Highscore file couldn't be opened :(" << endl;
        }

        RenderWindow window(VideoMode(780, 780), "Top 5 High Scores", Style::Close);
        Text hst;
        hst.setFont(font);
        hst.setCharacterSize(24);
        hst.setFillColor(Color::White);
        hst.setPosition(150, 280);

        string line;
        string hs = "Top 5 High Scores:\n";
        int lineCount = 0;
        while (getline(file, line) && lineCount < MAX_HIGH_SCORES) {
            hs += "Score " + std::to_string(lineCount + 1) + ": " + line + "\n";
            lineCount++;
        }
        hs += "\nPress Esc to go back";
        hst.setString(hs);

        while (window.isOpen()) {
            Event e;
            while (window.pollEvent(e)) {
                if (e.type == Event::Closed)
                    window.close();
            }

            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                return;
            }

            window.clear(Color::Black);
            window.draw(hst);
            window.display();
        }
    }




    //void highScore() {
    //    // Print the current working directory

    //    ifstream loadfile("i220835_highestcore.txt");

    //    // Check if file opened successfully
    //    if (!loadfile.is_open()) {
    //        cout << "Unable to open i220835_saved.txt" << endl;
    //        return;
    //    }

    //    Font font;
    //    // Load your font here
    //     font.loadFromFile("arial.ttf");

    //    Text high_score_text;
    //    high_score_text.setFont(font);
    //    high_score_text.setCharacterSize(24);
    //    high_score_text.setFillColor(Color::White);
    //    high_score_text.setPosition(200, 300);

    //    string line; // File handling for highscore
    //    string high_scores_string;

    //    //while (getline(loadfile, line)) {
    //    //    high_scores_string += line + "\n";
    //    //}

    //    loadfile.close();
    //    high_scores_string += "Name : Saad Mursaleen\nRank : Gold\nScore : ";
    //    while (getline(loadfile, line)) {
    //        high_scores_string += line + "\n";
    //    }
    //    cout << line << endl;
    //    high_scores_string += line;
    //    cout << high_scores_string;
    //    high_score_text.setString(high_scores_string);

    //    RenderWindow window(VideoMode(800, 600), "High Scores");

    //    while (window.isOpen()) {
    //        Event e;
    //        while (window.pollEvent(e)) {
    //            if (e.type == Event::Closed)
    //                window.close();
    //        }

    //        // Using escape to go back to main menu
    //        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
    //            return;
    //        }

    //        window.clear(Color::Black);
    //        window.draw(high_score_text);
    //        window.display();
    //    }
    //}

    //void load_game()
    //{
    //    ifstream loadFile("i220822_saved.txt");
    //    if (loadFile.is_open())
    //    {
    //        loadFile >> c_score;
    //        scoreText.setString("Score: " + std::to_string(c_score));

    //        loadFile >> p->lives;
    //        livesText.setString("Lives: " + std::to_string(p->lives));

    //        float x, y;
    //        loadFile >> x >> y;
    //        p->sprite.setPosition(x, y);

    //        loadFile.close();
    //    }
    //}




    void LEVELS() {
        Text level;
        level.setFont(font);
        // displaying levels in the level option
        level.setString("~ LEVELS:\n\n\n"
            "~ You are currently on level 1 \n\n"
            "~ Press Esc to return to the main menu.");
        level.setCharacterSize(24);
        level.setFillColor(Color::White);
        level.setPosition(50, 50);


        while (window.isOpen()) {
            Event e;
            while (window.pollEvent(e)) {
                if (e.type == Event::Closed)
                    window.close();
            }
            // using escape to go back to main menu
            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                return;
            }

            window.clear(Color::Black);
            window.draw(level);
            window.display();
        }
    }

    void instructions() {
        window.draw(insbg);
        Text instructions;
        instructions.setFont(font);
        // displaying instructions in the instruction option
        instructions.setString("~ Instructions:\n\n"
            "~ Collect as many rewards as possible while avoiding collisions with opponent cars\n\n"
            "~ Use arrow keys to steer your car clockwise around the arena.\n\n"
            "~ Dodge opponent cars moving counter-clockwise and survive.\n\n"
            "~ Look for special items that grant extra points, lives, or temporary powers.\n\n"
            "~ Press 'P' to Pause your game.\n\n\n\n\n\n\n\n\n\n\n"
            "~ Press Esc to return to the main menu.");
        instructions.setCharacterSize(24);
        instructions.setFillColor(Color::White);
        instructions.setPosition(50, 50);

        while (window.isOpen()) {
            Event e;
            while (window.pollEvent(e)) {
                if (e.type == Event::Closed)
                    window.close();
            }
            // using escape to go back to main menu
            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                return;
            }

            window.clear(Color::Black);
            window.draw(instructions);
            window.display();
        }
    }// function to display the insructions





};

#endif
