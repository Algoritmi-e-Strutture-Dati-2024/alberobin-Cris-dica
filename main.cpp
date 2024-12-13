#include <iostream>
#include "classe.cpp"
int main() {
    AlberoBinario<int> albero;

    albero.insRadice(2);
    
    albero.insFiglioSinistro(0, 4);
    albero.insFiglioDestro(0, 6);
    albero.insFiglioSinistro(1, 8);
    albero.insFiglioDestro(1, 10);
    
    // Stampa della struttura dell'albero
    cout << "Struttura dell'albero:" << endl;
    albero.stampa();
    
    // Rimozione di un nodo (solo se è una foglia)
    albero.rimuovi(4);  
    cout << "Dopo la rimozione di un nodo foglia:" << endl;
    albero.stampa();
    
    // Prova a rimuovere un nodo che non è una foglia
    albero.rimuovi(0); 

    return 0;
    }
