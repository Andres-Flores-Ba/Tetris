# Tetris
## Objetivo 
El objetivo de este proyecto es hacer un juego tipo ascii art basado en el juego de tetris.
### Exploracion 

## Carpetas
- bin/ - Contiene los ejecutables del proyecto 
- src/ - Contiene el codigo fuente 
- include/ - Los archivos de cabecera 
- assets/ - Contiene los recursos del proyecto 
- docs/ - Contiene la documentacion del archivo 

# Descripcion 
- Se basa en tetrominós, figuras geométricas compuestas por cuatro bloques cuadrados unidos de forma ortogonal, las cuales se generan de una zona que ocupa 5x5 bloques en el área superior de la pantalla. 
- No hay consenso en cuanto a las dimensiones para el área del juego, que varía en cada versión.​ Sin embargo, dos filas de más arriba están ocultas al jugador.
- El jugador no puede impedir esta caída, pero puede decidir la rotación de la pieza (0°, 90°, 180°, 270°) y en qué lugar debe caer. 
- Cuando una línea horizontal se completa, esa línea desaparece, todas las piezas que están por encima descienden una posición y liberan espacio de juego y por tanto facilitando la tarea de situar nuevas piezas. La caída de las piezas se acelera progresivamente. 
- El juego acaba cuando las piezas se amontonan hasta llegar a lo más alto (3x5 bloques en el área visible), interfiriendo la caída de más piezas.