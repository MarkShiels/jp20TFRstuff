#include "Pausebox.h"

Pausebox::Pausebox()
{
}

Pausebox::~Pausebox()
{}

void Pausebox::init(sf::Font t_font)
{
	font = t_font;

	pauseOverlay.setSize(sf::Vector2f(650, 950));
	pauseOverlay.setFillColor(sf::Color(195, 195, 195, 80));
	pauseOverlay.setPosition(0, 0);

	pauseText.setFont(font);
	pauseText.setPosition(300, 300);
	pauseText.setString("PAUSE");
	pauseText.setFillColor(sf::Color(238, 153, 15, 255));

	for (int i{ 0 }; i < 2; i++)
	{
		menuItems[i].setFillColor(sf::Color(238, 153, 15, 255));
		menuItems[i].setCharacterSize(24);
		menuItems[i].setPosition(280, 340 + offsetY * i);
		menuItems[i].setFont(font);
	}


	menuItems[0].setString("Resume");
	menuItems[1].setString("Quit");

}