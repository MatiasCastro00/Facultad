#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
Texture rotationTexture;
Sprite rotationSprite;
int main1()
{
	rotationTexture.loadFromFile("plataforma.jpg");
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Rotation");
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		rotationSprite.setTexture(rotationTexture);
		//rotationSprite.rotate(1);
		App.draw(rotationSprite);
		App.display();
	}
	return 0;
}