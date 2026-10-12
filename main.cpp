#include <iostream>
#include <print>
#include <string>
enum class Aliment {
    BURGER,
    SUSHI,
    SALADE,
    PIZZA
};

std::string name(Aliment food) {
    switch (food) {
        case Aliment::BURGER:
            return "Burger";
        case Aliment::SUSHI:
            return "Sushi";
        case Aliment::SALADE:
            return "Salade";
        case Aliment::PIZZA:
            return "Pizza";
        default:
            return "Unknown";
    }
}
int prix(Aliment food) {
    switch (food) {
        case Aliment::BURGER:
                return 12;
            case Aliment::SUSHI:
                return 18;
            case Aliment::SALADE:
                return 9;
            case Aliment::PIZZA:
                return 15;
            default:
            return 0;
    }
}
int main() {
    int choix = 0;
    int total = 0;
    do {
        for (int idxaliment = 0; idxaliment < 4; idxaliment++) {
            Aliment food = static_cast<Aliment>(idxaliment);

            std::println("{}.{} ",idxaliment+1, name(food));
        }
        std::println("votre choix : ");
        std::cin >> choix;
        Aliment food = static_cast<Aliment>(choix - 1);
        total += prix(food);
        if (choix >= 5) {
            std::println("ce plat n'existe pas");
        }
        else if (choix == 0) {
            break;
        }
            else{
            std::println("{} ajoute : {} CHF",name(food),prix(food));
        }
    }while (choix != 0);
    std::print("Total : {} CHF",total);
    return 0;
}
