#ifndef  STARTBOX
#define STARTBOX
#include "SFML/Graphics.hpp"

class Startbox
{

public:

	Startbox();
	~StartBox();
	void init();

	sf::Font	font;
	sf::Text	menuItems[4]

};

#endif // ! STARTBOX

