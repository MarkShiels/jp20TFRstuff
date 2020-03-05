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

	guideText[0].setString("Legend Guide");
	guideText[1].setString("A: Select / Move /\n   Place Object");
	guideText[2].setString("B: Delete Object \n    (in cursor mode)");
	guideText[3].setString("X: Open Radial Menu \n    (Hold)");
	guideText[4].setString("Y: Undo /\n      Clear Board(Hold)");
	guideText[5].setString("D-Pad: Move Cursor /\n             Move Object");
	guideText[6].setString("Start: Open Menu");
	guideText[7].setString("Bumpers: Cycle Object");
	guideText[8].setString("Left Stick: Move Radial");

	for (int i{ 0 }; i < 9; i++)
	{
		guideText[i].setFont(font);
		guideText[i].setCharacterSize(20);
		guideText[i].setFillColor(sf::Color(238, 153, 15, 255));
		guideText[i].setPosition(sf::Vector2f(675, 100 + (yOffsetG * i)));
	}
	
}

ButtonLegend::~ButtonLegend()
{}

