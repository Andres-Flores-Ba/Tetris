#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <fstream>
#include <Pieza.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Tablero dTanque("./assets/images/PiezaI.txt");
    Tablero dAlien("./assets/images/PiezaJ.txt");

    int fotograma = 0;
    while(true)
    {
        fotograma++;
        Element tanque = dTanque.GetElement() | bold | color(Color::Green) | bgcolor(Color::Blue);
        Element lienzo = hbox({dTanque, dAlien.GetElement() });


        Screen pantalla = Screen::Create(
            Dimension::Full(),
            Dimension::Fit(lienzo));
        
        Render(pantalla, lienzo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();

        this_thread::sleep_for(0.1s);
    }

    return 0;
}