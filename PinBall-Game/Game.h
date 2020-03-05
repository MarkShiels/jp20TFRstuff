/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>
#include "HudBox.h"
#include "ConObjBox.h"
#include "xBxCon.h"
#include "ButtonLegend.h"

enum class GameState
{
	Gameplay,
	Designer

};

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	sf::RectangleShape	gameSpace;
	sf::RectangleShape	hudSpace;
	sf::Text			playerName;
	sf::Text			playerScore;
	sf::Text			missionInfo;
	sf::Text			boardText;
	sf::Text			ballCount;
	sf::Font			font;

	HudBox				hudBox;
	ConObjBox			conObjsL[3];
	ConObjBox			conObjsR[3];
	int					yOffset{ 180 };

	sf::Text			Title;

	GameState			gameState;

	xBxController		xCon;

	ButtonLegend		buttLeg;

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	bool m_exitGame; // control exiting game
};

#endif // !GAME_HPP

