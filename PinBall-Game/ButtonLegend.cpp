#include "ButtonLegend.h"

ButtonLegend::ButtonLegend() 
{

}

void ButtonLegend::init(sf::Font t_font)
{
	font = t_font;

	if (!ButtTex[0].loadFromFile("ASSETS/IMAGES/BoardStuff/flippersprite.png"))
	{
	}
	if (!ButtTex[1].loadFromFile("ASSETS/IMAGES/BoardStuff/slinghotsingle.png"))
	{
	}
	if (!ButtTex[2].loadFromFile("ASSETS/IMAGES/BoardStuff/mush.png"))
	{
	}
	if (!ButtTex[3].loadFromFile("ASSETS/IMAGES/BoardStuff/gravShroom.png"))
	{
	}
	if (!ButtTex[4].loadFromFile("ASSETS/IMAGES/BoardStuff/Hole45.png"))
	{
	}

	if (!guideSpriteTex[0].loadFromFile("ASSETS/IMAGES/BoardStuff/a.png"))
	{
	}

	if (!guideSpriteTex[1].loadFromFile("ASSETS/IMAGES/BoardStuff/b.png"))
	{
	}

	if (!guideSpriteTex[2].loadFromFile("ASSETS/IMAGES/BoardStuff/x.png"))
	{
	}

	if (!guideSpriteTex[3].loadFromFile("ASSETS/IMAGES/BoardStuff/y.png"))
	{
	}

	if (!guideSpriteTex[4].loadFromFile("ASSETS/IMAGES/BoardStuff/dpad.png"))
	{
	}

	if (!guideSpriteTex[5].loadFromFile("ASSETS/IMAGES/BoardStuff/start.png"))
	{
	}

	if (!guideSpriteTex[6].loadFromFile("ASSETS/IMAGES/BoardStuff/bumpers.png"))
	{
	}

	if (!guideSpriteTex[7].loadFromFile("ASSETS/IMAGES/BoardStuff/triggers.png"))
	{
	}

	if (!guideSpriteTex[8].loadFromFile("ASSETS/IMAGES/BoardStuff/lstick.png"))
	{
	}

	for (int i{ 0 }; i < 5; i++)
	{
		butt[i].setTexture(ButtTex[i]);
		butt[i].setPosition(sf::Vector2f(700, 550 + (yOffsetB * i)));
		buttonTags[i].setPosition(butt[i].getPosition() + sf::Vector2f(butt[i].getGlobalBounds().width + 20, 0));
		buttonTags[i].setFont(font);
		buttonTags[i].setFillColor(sf::Color(238, 153, 15, 255));
		buttonTags[i].setCharacterSize(20);
	}
 
	buttonTags[0].setString("Flipper");
	buttonTags[1].setString("Slingshot");
	buttonTags[2].setString("Mushroom");
	buttonTags[3].setString("Gravity Switch");
	buttonTags[4].setString("Hole");

	//guideText[0].setString("Legend Guide");
	guideText[0].setString("Select / Move /\n Place Object");
	guideText[1].setString("Delete Object \n  (in cursor mode)");
	guideText[2].setString("Open Radial Menu \n    (Hold)");
	guideText[3].setString("Undo /\n Clear Board(Hold)");
	guideText[4].setString("Move Cursor /\n Move Object");
	guideText[5].setString("Open Menu");
	guideText[6].setString("Cycle Object");
	guideText[7].setString("Rotate Object");
	guideText[8].setString("Move Radial");

	for (int i{ 0 }; i < 9; i++)
	{
		guideSprites[i].setTexture(guideSpriteTex[i]);
		guideSprites[i].setPosition(sf::Vector2f(680, 100 + (yOffsetG * i)));
	}

	for (int i{ 0 }; i < 9; i++)
	{
		guideText[i].setFont(font);
		guideText[i].setCharacterSize(20);
		guideText[i].setFillColor(sf::Color(238, 153, 15, 255));
		guideText[i].setPosition(guideSprites[i].getPosition() + sf::Vector2f(guideSprites[i].getGlobalBounds().width + 10, 0));
	}

	
	
}

ButtonLegend::~ButtonLegend()
{}

