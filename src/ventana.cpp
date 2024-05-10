#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Pieza.hpp>
#include <Tablero.hpp>
#include <thread>
#include <list>
#include <experimental/random>
using namespace ftxui;
using namespace std;

int main(int argc, char const *argv[])
{
    // Crear objetos Tablero para cargar las representaciones de las piezas.
    Tablero tablero1("./assets/images/PiezaI.txt");
    Tablero tablero2("./assets/images/PiezaJ.txt");
    Tablero tablero3("./assets/images/PiezaL.txt");
    Tablero tablero4("./assets/images/PiezaO.txt");
    Tablero tablero5("./assets/images/PiezaS.txt");
    Tablero tablero6("./assets/images/PiezaT.txt");
    Tablero tablero7("./assets/images/PiezaZ.txt");

    // Crear una lista de tableros para iterar sobre todas las piezas.
    list<Tablero> tableros = {tablero1, tablero2, tablero3, tablero4, tablero5, tablero6, tablero7};

    // Crear la pantalla.
    auto screen = Screen::Create(Dimension::Full(), Dimension::Full());
    screen.Clear();

    // Lista para almacenar las piezas.
    list<Pieza> piezas;

    // Bucle para crear las piezas y establecer su posición inicial.
    for (auto& tablero : tableros) {
        Pieza pieza = tablero.CrearDibujo();
        pieza.EstablecerPosicion(experimental::randint(0, screen.dimx() - 1), 0);
        piezas.push_back(pieza);
    }

    // Bucle principal del programa.
    while (true) {
        screen.Clear();

        // Hacer caer todas las piezas.
        for (auto& pieza : piezas) {
            pieza.DesplazarY(1);
            pieza.Caer(screen);
        }

        // Imprimir la pantalla.
        screen.Print();

        // Esperar un breve período de tiempo.
        this_thread::sleep_for(200ms);
    }

    return 0;
}
