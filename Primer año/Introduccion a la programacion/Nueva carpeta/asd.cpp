

int main()
{
    // Obtén la resolución del monitor
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    unsigned int screenWidth = desktop.width;
    unsigned int screenHeight = desktop.height;

    // Calcula la relación de aspecto
    float aspectRatio = static_cast<float>(screenWidth) / static_cast<float>(screenHeight);

    // Crea una ventana con la misma relación de aspecto que el monitor
    sf::RenderWindow window(sf::VideoMode(screenWidth, static_cast<unsigned int>(screenWidth / aspectRatio)), "SFML Window");

    while (window.isOpen())
    {
        // Maneja los eventos
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Lógica de tu aplicación y renderizado aquí
        
        // Limpia la ventana
        window.clear();

        // Dibuja los elementos aquí

        // Muestra lo que se ha dibujado
        window.display();
    }

    return 0;
}