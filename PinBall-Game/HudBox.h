#ifndef HUDBOX
#define HUDBOX
#include <SFML/Graphics.hpp>

class HudBox
{
public:

	HudBox();
	~HudBox();

	sf::RectangleShape	outlineBox;

	sf::Texture spaceBGTexture;
	sf::Sprite	spaceBGSprite;
};

#endif // !HUDBOX