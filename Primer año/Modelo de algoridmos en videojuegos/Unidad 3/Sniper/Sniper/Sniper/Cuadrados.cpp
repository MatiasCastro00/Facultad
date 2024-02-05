#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <list>
using namespace sf;
std::list<Texture> texturesSquares;
Sprite spriteSquare;
int main() {
	Texture tex;
	tex.loadFromFile("cuad_yellow.png");
	texturesSquares.push_back(tex);
	tex.loadFromFile("cuad_red.png");
	texturesSquares.push_back(tex);
	tex.loadFromFile("cuad_grey.png");
	texturesSquares.push_back(tex);
	tex.loadFromFile("cuad_blue.png");
	texturesSquares.push_back(tex);

	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Ajedrez");
	while (App.isOpen())
	{
		App.clear();
		int i = 0;
		for (const auto& texture : texturesSquares) {
			if (i % 2 == 0) {
				spriteSquare.setTexture(texture);

				App.draw(spriteSquare); 
			}
			i++;
		}
		App.display();
	}

	return 0;
}