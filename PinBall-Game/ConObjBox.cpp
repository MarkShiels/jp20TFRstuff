#include "ConObjBox.h"

ConObjBox::ConObjBox()
{

	conObj.setFillColor(sf::Color::Transparent);
	conObj.setOutlineColor(sf::Color(238, 153, 15, 255));
	conObj.setOutlineThickness(2.5);
	conObj.setSize(sf::Vector2f(120, 120));

}

ConObjBox::~ConObjBox()
{
}
