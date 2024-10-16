#include <iostream>
#include <fmt/core.h>
#include "cmake-build-debug/_deps/fmt-src/include/fmt/color.h"
#include "funciones.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))


int main() {
    std::cout << "Hola Mundo" << std::endl;
    fmt::print("Hola Mundo FMT\n");
    std::cout << "El codigo PI es: " << PI << std::endl;
    std::cout << "El area del circulo es: " << AREA_CIRCULO(5) << std::endl;

    int DNI;
    std::cout << "¿Cual es numero de tu DNI?";
    std::cin >> DNI;
    std::cout << "El número de tu DNI es: " << DNI << std::endl;
    return 0;
}