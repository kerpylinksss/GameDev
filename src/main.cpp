#include <SFML/Graphics.hpp>

int main()
{
    // Создаем окно размером 800x600 пикселей с заголовком "SFML Test"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test");

    // Основной цикл приложения, который работает до тех пор, пока окно открыто
    while (window.isOpen())
    {
        // Обработка событий
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Если пользователь закрыл окно, то закрываем его
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Очищаем окно зеленым цветом
        window.clear(sf::Color::Green);

        // Отображаем содержимое окна
        window.display();
    }

    return 0;
}

