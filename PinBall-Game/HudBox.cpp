#include "HudBox.h"

HudBox::HudBox()
{

	outlineBox.setSize(sf::Vector2f(320, 865));
	outlineBox.setFillColor(sf::Color::Transparent);
	outlineBox.setOutlineColor(sf::Color(238, 153, 15, 255));
	outlineBox.setOutlineThickness(5);
	
	if (!spaceBGTexture.loadFromFile("ASSETS/IMAGES/spaceBG.jpg"))
	{
	}

	spaceBGSprite.setTexture(spaceBGTexture);

	

}


HudBox::~HudBox()
{}