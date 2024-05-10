bin/space : src/main.cpp
	g++ src/main.cpp -o bin/space -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude      

bin/ventana : src/ventana.cpp
	g++ src/ventana.cpp -o bin/ventana -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude      

run : bin/space
	./bin/space

runVentana : bin/ventana
	./bin/ventana