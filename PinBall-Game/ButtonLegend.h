#ifndef BUTTON_LEGEND
#define	BUTTON_LEGEND

#include <SFML/Graphics.hpp>

class ButtonLegend
{
public:

	sf::Sprite  butt[5];
	sf::Texture ButtTex[5];
	sf::Texture	guideSpriteTex[9];
	sf::Sprite	guideSprites[9];
	sf::Text	guideText[9];
	sf::Text	buttonTags[5];
	sf::Font	font;
	int			yOffsetB{ 80 };
	int			yOffsetG{ 80 };


	void		init(sf::Font t_font);
	ButtonLegend();
	~ButtonLegend();
};
#endif // !BUTTON_LEGEND
