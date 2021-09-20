#include <iostream>
#include <vector>

#include "ChemicalElement.h"
#include "sorts.h"

bool test_sort(std::vector<ChemicalElement> sorted, 
    std::vector<ChemicalElement> expected
)
{
    for (int i = 0; i < sorted.size(); i++)
    {
        if (sorted[i] != expected[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ChemicalElement hydrogen = ChemicalElement();
    ChemicalElement helium = ChemicalElement("Hellium", "He", 2, 4.00260);
    ChemicalElement oxygen = ChemicalElement("Oxygen", "O", 8, 15.999);
    ChemicalElement magnesium = ChemicalElement("Magnesium", "Mg", 12, 24.305);
    ChemicalElement molybdenum = ChemicalElement("Molybdenum", "Mo", 42, 95.95);
    ChemicalElement xenon = ChemicalElement("Xenon", "Xe", 54, 131.29);

    std::vector<ChemicalElement> elements_unsorted { xenon, 
        helium, molybdenum, hydrogen, magnesium, oxygen };
    std::vector<ChemicalElement> elements_sorted { hydrogen,
        helium, oxygen, magnesium, molybdenum, xenon };

    Sorts::merge_sort(elements_unsorted);
    std::cout << "Sort was successful? ";
    std::cout << std::boolalpha 
        << test_sort(elements_unsorted, elements_sorted)
        << "\n";

    return 0;
}
