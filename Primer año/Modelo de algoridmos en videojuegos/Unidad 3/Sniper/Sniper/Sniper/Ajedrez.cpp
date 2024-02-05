#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture textureW;
Texture textureB;
Sprite spriteW;
Sprite spriteB;
int main2() {
	textureW.loadFromFile("chessw.png");
	textureB.loadFromFile("chessb.png");
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Ajedrez");
	int squareSize = 800 / 8;
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		for (size_t i = 0; i < 8; i++)
			for (size_t j = 0; j < 8; j++)
				if ((i + j) % 2 == 0)
				{
					spriteW.setTexture(textureW);
					spriteW.setPosition(i * squareSize, j * squareSize);
					App.draw(spriteW);
				}
				else
				{
					spriteB.setTexture(textureB);
					spriteB.setPosition(i * squareSize, j * squareSize);
					App.draw(spriteB);
				}

		App.display();
	}
	return 0;
}
