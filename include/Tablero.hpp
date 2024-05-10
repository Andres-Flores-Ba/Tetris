#pragma once
#include <fstream>
#include <list>
#include <Pieza.hpp>
using namespace std;

class Tablero
{
private:
    fstream tablero;
    list<string> contenido;    
public:
    Tablero(string path)
    {
        tablero.open(path);
        if (!tablero.is_open()) {
            cerr << "Error: No se pudo abrir el archivo " << path << endl;
            return;
            }
        string linea;
        while (getline(tablero, linea))
        {
            contenido.push_back(linea);
        }
    tablero.close();
    }
    Pieza CrearDibujo(){
        Pieza temp(contenido,0,0);
        return temp;
    }
    ~Tablero();
};

