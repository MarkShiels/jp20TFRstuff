#ifndef  PAUSEBOX
#define PAUSEBOX
#include "SFML/Graphics.hpp"

class Pausebox
{

public:

	Pausebox();
	~Pausebox();
	void init(sf::Font t_font);

	int					offsetY{ 40 };
	int					pauseMenuIndex;
	sf::Font			font;
	sf::RectangleShape	pauseOverlay;
	sf::Text			pauseText;
	sf::Text			menuItems[4];

};

#endif // ! PAUSEBOX

