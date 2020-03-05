#pragma once
#ifndef XBOXCONTROLLER
#define XBOXCONTROLLER
#include <SFML/Graphics.hpp>

class Game;

enum controllerButtons//enum for controller buttons
{
	A,
	B,
	X,
	Y,
	LB,
	RB,
	Options,
	Menu,
	LeftClick,
	RightClick
};

struct GamePadState// states for the buttons
{
	bool A;
	bool B;
	bool X;
	bool Y;
	bool LB;
	bool RB;
	bool LeftThumbStickClick;
	bool RightThumbStickClick;
	bool DpadUp;
	bool DpadDown;
	bool DpadLeft;
	bool DpadRight;
	bool Options;
	bool Menu;
	float Righttrigger;
	float LeftTrigger;
	sf::Vector2f RightThumbStickAxis;
	sf::Vector2f LeftThumbStickAxis;
};

class xBxController
{
private:

	//dpad deadzone
	const int dpadThreshold{ 50 };

	//vector for the axis inputs
	sf::Vector2f dpadAxis;
	sf::Vector2f leftStickAxis;
	sf::Vector2f rightStickAxis;

public:

	//controller access
	sf::Joystick gamepad;

	//the current state of the controllers buttons
	GamePadState m_currentState;

	//the previous state of the controllers buttons
	GamePadState m_previousState;

	//default constructor
	xBxController();

	//destructor
	~xBxController();

	void update();
	void updateFace();
	void updateDpad();
	
};

#endif