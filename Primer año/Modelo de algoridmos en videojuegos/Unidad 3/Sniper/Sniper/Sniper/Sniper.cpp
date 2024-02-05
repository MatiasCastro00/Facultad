#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture;
Sprite cirlce1;
Sprite cirlce2;
Sprite cirlce3;
Sprite cirlce4;
int main5() {
	texture.loadFromFile("rcircle.png");
	cirlce1.setTexture(texture);
	cirlce1.setPosition(0,0);
	cirlce2.setTexture(texture);
	cirlce2.setPosition(675, 0);
	cirlce3.setTexture(texture);
	cirlce3.setPosition(0, 480);
	cirlce4.setTexture(texture);
	cirlce4.setPosition(675, 480);
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Sniper");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(cirlce1);
		App.draw(cirlce2);
		App.draw(cirlce3);
		App.draw(cirlce4);

		App.display();
	}
	return 0;
}
