#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: 'NELEMENTS' nem létező azonosító, helyesen 'N_ELEMENTS' (hiányzó alulvonás)
    int *b = new int[NELEMENTS];
    // HIBA: szimpla idézőjelek ('...') karakter literált jelölnek, string literálhoz dupla idézőjelek ("...") kellenek; hiányzó << std::endl; és záró pontosvessző
    std::cout << '1-100 ertekek duplazasa'
    // HIBA: a for ciklusból hiányzik a feltétel (pl. i < N_ELEMENTS) és a léptetés (i++), végtelen/érvénytelen ciklus
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    // HIBA: a feltétel 'i' (azaz 0) mindig hamis, a ciklus soha nem fut le; helyesen: i < N_ELEMENTS
    for (int i = 0; i; i++)
    {
        // HIBA: hiányzik a kiírandó érték (pl. << b[i]) és a záró << std::endl; valamint a pontosvessző
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // HIBA: 'atlag' inicializálatlan, indetermináns (szemét) értéket tartalmaz; helyesen: int atlag = 0;
    int atlag;
    // HIBA: a for fejlécében feltétel és léptetés között vessző (,) szerepel pontosvessző (;) helyett
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: hiányzó pontosvessző az utasítás végéről
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
