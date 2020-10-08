/*
Programa para inicializar el monitor en modo grafico
MiniTaller: Tecnicas avanzadas de programacion en Lenguaje C++
Instructor: M.C. Bruno Lopez Takeyas
*/
#include <graphics.h> // Encabezado con declaraciones de
graficos
#include <conio.h> // Para el uso de kbhit()
#include <stdlib.h> // Para el uso de random()
#include <dos.h> // Para el uso de delay
void main(void)
{
int monitor=VGA, modo=VGAHI; // Declaracion de tipo de monitor
y modo
initgraph(&monitor,&modo,"\\tc\\bgi");
// Inicializa el modo grafico indicando el monitor y modo
utilizado
// El subdirectorio \\tc\\bgi indica la ruta de localizacion de
los
// archivos *.BGI (monitores) y *.CHR (tipos de letras)
while(!kbhit()) // Mientras no se oprima cualquier tecla
{
putpixel(random(getmaxx()),random(getmaxy()),random(getmaxcolor
()));
// Coloca un pixel en la pantalla, seleccionando al azar la
columna
// (1..getmaxx), el renglon (1..getmaxy) y el color
(1..getmaxcolor)
delay(5);
}
closegraph(); // Termina el modo grafico (vuelve a su modo
normal)
}
