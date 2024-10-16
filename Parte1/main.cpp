#include <iostream>

#include "Estudiante.h"
#include "Persona.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;

    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona persona1 = Persona();
    persona1.setNombre("John");
    persona1.setEdad(33);
    persona1.setGenero("M");

    std::cout << "La persona se llama: " << persona1.getNombre() << std::endl;
    std::cout << "La persona tiene una edad de: " << persona1.getEdad() << std::endl;
    std::cout << "La persona se concibe como: " << persona1.getGenero() << std::endl;

    Estudiante estudiante1 = Estudiante();
    estudiante1.setNombre("Gabriel");
    estudiante1.setEdad(21);
    estudiante1.setGenero("M");
    estudiante1.setGrado("1 Ingenieria Informatica");

    estudiante1.mostrarDetalles();
    return 0;
    }




