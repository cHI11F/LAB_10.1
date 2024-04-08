#include <iostream>
#include <fstream>
#include <string>

int CalculateTotalSymbolOccurrences(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Couldn't open the file." << std::endl;
        return -1;
    }

    int count = 0;
    char ch;
    while (file.get(ch)) {
        if (ch == '+' || ch == '-' || ch == '=')
            count++;
    }

    file.close();
    return count;
}

int main() {
    std::string filename;
    std::cout << "Enter filename: ";
    std::getline(std::cin, filename);

    int symbolsCount = CalculateTotalSymbolOccurrences(filename);
    if (symbolsCount != -1) {
        std::cout << "Total occurrences of '+', '-', and '=' symbols in the file: " << symbolsCount << std::endl;
    }

    return 0;
}
