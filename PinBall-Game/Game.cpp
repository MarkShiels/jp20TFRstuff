/// <summary>
/// @author Mantas Zalnierius
/// @author Denis Becle
/// @author Joshua Dunne
/// @author Mark Shiels
/// @date Feb-March 2019
///
/// </summary>

#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>


/// <summary>
/// default constructor
/// setup the window properties
/// load and setup the text 
/// load and setup thne image
/// </summary>
Game::Game() :
	m_window{ sf::VideoMode{ 1000U, 975U, 32U }, "SFML Game" },
	m_exitGame{false} //when true game will exit
{
	

	setupFontAndText(); // load font 
	setupSprite(); // load texture
}

/// <summary>
/// default destructor we didn't dynamically allocate anything
/// so we don't need to free it, but mthod needs to be here
/// </summary>
Game::~Game()
{
}


/// <summary>
/// main game loop
/// update 60 times per second,
/// process update as often as possible and at least 60 times per second
/// draw as often as possible but only updates are on time
/// if updates run slow then don't render frames
/// </summary>
void Game::run()
{	
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	const float fps{ 60.0f };
	sf::Time timePerFrame = sf::seconds(1.0f / fps); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}
/// <summary>
/// handle user and system events/ input
/// get key presses/ mouse moves etc. from OS
/// and user :: Don't do game update here
/// </summary>
void Game::processEvents()
{
	sf::Event newEvent;
	while (m_window.pollEvent(newEvent))
	{
		if ( sf::Event::Closed == newEvent.type) // window message
		{
			m_exitGame = true;
		}
		if (sf::Event::KeyPressed == newEvent.type) //user pressed a key
		{
			processKeys(newEvent);
		}
	}
}


/// <summary>
/// deal with key presses from the user
/// </summary>
/// <param name="t_event">key press event</param>
void Game::processKeys(sf::Event t_event)
{
	if (sf::Keyboard::Escape == t_event.key.code)
	{
		m_exitGame = true;
	}
}

/// <summary>
/// Update the game world
/// </summary>
/// <param name="t_deltaTime">time interval per frame</param>
void Game::update(sf::Time t_deltaTime)
{
	if (m_exitGame)
	{
		m_window.close();
	}
}

/// <summary>
/// draw the frame and then switch buffers
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::White);

	m_window.draw(gameSpace);
	m_window.draw(hudBox.spaceBGSprite);
	m_window.draw(hudBox.outlineBox);
	m_window.draw(playerName);
	m_window.draw(playerScore);

	m_window.display();
}

/// <summary>
/// load the font and setup the text message for screen
/// </summary>
void Game::setupFontAndText()
{
}

/// <summary>
/// load the texture and setup the sprite for the logo
/// </summary>
void Game::setupSprite()
{
	
	if (!font.loadFromFile("ASSETS/FONTS/Radio Space/radiospaceexpandital.ttf"))
	{
	}

	playerName.setFont(font);
	playerScore.setFont(font);
	playerName.setCharacterSize(30);
	playerScore.setCharacterSize(34);
	playerName.setPosition(680, 200);
	playerScore.setPosition(700, 300);
	playerName.setString("Weebs Must Die");
	playerScore.setString("696969NICE");
	playerName.setFillColor(sf::Color(238, 153, 15, 255));
	playerScore.setFillColor(sf::Color(238, 153, 15, 255));

	gameSpace.setSize(sf::Vector2f(650, 975));
	gameSpace.setFillColor(sf::Color::Black);
	gameSpace.setPosition(sf::Vector2f(0, 0));

	hudSpace.setSize(sf::Vector2f(350, 975));
	hudSpace.setFillColor(sf::Color(50, 90, 235, 255));
	hudSpace.setPosition(sf::Vector2f(650, 0));

	hudBox.spaceBGSprite.setPosition(sf::Vector2f(650, 0));
	hudBox.outlineBox.setPosition(sf::Vector2f(665, 150));
}
