#include <iostream>
#include <vector>
#include <random>
#include <conio.h> // Para _getch()
#include <cstdlib> // Para system("cls")

int main() {
    std::vector<std::string> opciones = {
        "Akali + Zed (wombo ninja)",
        "Akshan + Pyke (wombo invisible)",
        "Ashe + Mundo (los frenadores del infierno)",
        "Chino + Pantheon",
        "Darius + Sett (duo mascachapa)",
        "Graves + Teemo (combo cegador)",
        "Kaisa + Cartitas",
        "Miss Fortune + Veigar (jaula infernal)",
        "Maokai + Teemo (wombo de cagadiñas)",
        "Morgana + Veigar",
        "Nautilus + Leona (wombo de stun infinito)",
        "Nocturne + Cartitas (wombo de ultis)",
        "Nocturne + Shen (wombo de ultis 2.0)",
        "Olaf + Mundo (duo de achazos al horto)",
        "Pantheon + Leona",
        "Seraphine + Sona (doble sona combo)",
        "Tahm + Yasuo",
        "Tahm + Zac (doble catapulta)",
        "Talon + Zed (wombo de asesinos)",
        "Tresh + Blitz (wombo de ganchos)",
        "Urgot + Singed (doble catapulta)",
        "Varus + Ashe (wombo ulti de flechas)",
        "Vexx + Neeko",
    
        "Xerath + Lux (castigadores del infierno)"
    };

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis;

    char tecla;
    while (true) {
        if (opciones.empty()) {
            system("cls");
            std::cout << "Elije uno, coño" << std::endl;
            std::cout << "Presiona cualquier tecla para salir." << std::endl;
            _getch(); // Esperar a que el usuario presione una tecla
            break;
        }

        // Actualizar el rango de la distribución aleatoria
        dis = std::uniform_int_distribution<>(0, opciones.size() - 1);

        // Seleccionar un índice aleatorio
        int indice_aleatorio = dis(gen);
        std::string resultado = opciones[indice_aleatorio];

        // Mostrar el resultado
        system("cls");
        std::cout << resultado << std::endl << std::endl;
        std::cout << "Si no te atreves con este wombo, pulsa Enter para generar un nuevo resultado, o Escape para salir." << std::endl;

        // Eliminar el resultado de la lista
        opciones.erase(opciones.begin() + indice_aleatorio);

        // Leer la tecla presionada
        tecla = _getch();
        if (tecla == 27) { // Escape para salir
            break;
        }
    }

    return 0;
}
