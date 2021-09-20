#include "ChemicalElement.h"

ChemicalElement::ChemicalElement() {}

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

float ChemicalElement::get_atomic_mass()
{
    return atomic_mass;
}

std::string ChemicalElement::get_name()
{
    return name;
}

std::string ChemicalElement::get_symbol()
{
    return symbol;
}

bool ChemicalElement::operator<(ChemicalElement& obj)
{
    return atomic_mass < obj.get_atomic_mass();
}

bool ChemicalElement::operator>(ChemicalElement& obj)
{
    return atomic_mass > obj.get_atomic_mass();
}

bool ChemicalElement::operator==(ChemicalElement& obj)
{
    return (atomic_mass == obj.get_atomic_mass()
        && atomic_number == obj.get_atomic_number());
}

bool ChemicalElement::operator!=(ChemicalElement& obj)
{
    return !(atomic_mass == obj.get_atomic_mass()
        && atomic_number == obj.get_atomic_number());
}
