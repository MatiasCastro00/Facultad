#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
Texture textureFondo;
Sprite fondo;
int main3()
{
	textureFondo.loadFromFile("fondo.jpg");
	fondo.setTexture(textureFondo);
	Vector2u textureSize= textureFondo.getSize();
	Vector2u windowSize(800, 800);
	float scaleX = (float)windowSize.x / textureSize.x;
	float scaleY = (float)windowSize.y / textureSize.y;
	fondo.setScale(scaleX, scaleY);
	sf::RenderWindow App(sf::VideoMode(windowSize.x, windowSize.y, 32),"Fondo");
	while (App.isOpen())
	{
		App.clear();
		App.draw(fondo);
		App.display();
	}
	return 0;
}