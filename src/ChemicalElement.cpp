#include "ChemicalElement.h"

ChemicalElement::ChemicalElement(std::string name_,
    std::string symbol_,
    int atomic_number_,
    float atomic_mass_
) : name(name_), 
    symbol(symbol_), 
    atomic_number(atomic_number_),
    atomic_mass(atomic_mass_) {}

int ChemicalElement::get_atomic_number()
{
    return atomic_number;
}

std::string ChemicalElement::get_name()
{
    return name;
}

std::string ChemicalElement::get_symbol()
{
    return symbol;
}
