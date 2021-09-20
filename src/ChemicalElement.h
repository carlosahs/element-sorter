#ifndef CHEMICAL_ELEMENT
#define CHEMICAL_ELEMENT

#include <string>

class ChemicalElement
{
    private:
        int atomic_number { 1 };
        float atomic_mass { 1.008 };
        std::string name { "Hydrogen" };
        std::string symbol { "H" };
    public:
        ChemicalElement();
        ChemicalElement(std::string, std::string, int, float);
        int get_atomic_number();
        float get_atomic_mass();
        std::string get_name();
        std::string get_symbol();
        bool operator<(ChemicalElement&);
        bool operator>(ChemicalElement&);
        bool operator==(ChemicalElement&);
        bool operator!=(ChemicalElement&);
};

#endif
