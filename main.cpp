#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // JAVÍTVA: NELEMENTS -> N_ELEMENTS
    int *b = new int[N_ELEMENTS];
    // JAVÍTVA: szimpla idézőjelek -> dupla idézőjelek; hozzáadva << std::endl;
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // JAVÍTVA: hozzáadva feltétel (i < N_ELEMENTS) és léptetés (i++)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    // JAVÍTVA: feltétel 'i' -> 'i < N_ELEMENTS'
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // JAVÍTVA: hozzáadva << b[i] << std::endl; és záró pontosvessző
        std::cout << "Ertek: " << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // JAVÍTVA: inicializálva 0-ra
    int atlag = 0;
    // JAVÍTVA: vessző (,) -> pontosvessző (;)
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // JAVÍTVA: hozzáadva pontosvessző
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;

    std::cout << "Cash or card" << std::endl;

    return 0;
}
