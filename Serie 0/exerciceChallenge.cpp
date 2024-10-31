#include <iostream>
#include <string>
#include <algorithm> // pour std::sort

using namespace std;

// Structure pour représenter un contact
struct Contact {
    string nom;
    string prenom;
    string numero;
};

// Fonction pour afficher un contact
void afficherContact(const Contact& contact) {
    cout << "Nom: " << contact.nom << endl;
    cout << "Prénom: " << contact.prenom << endl;
    cout << "Numéro: " << contact.numero << endl;
    cout << "------------------" << endl;
}

// Fonction pour rechercher un contact par nom et/ou prénom
void rechercherContact(const Contact contacts[], int nbContacts) {
    string nomRecherche;
    cout << "Entrez le nom à rechercher (laisser vide pour ignorer): ";
    getline(cin >> ws, nomRecherche);
    bool trouve = false;
    for (int i = 0; i < nbContacts; i++) {
        if ((contacts[i].nom == nomRecherche) || (contacts[i].prenom == nomRecherche )) {
            afficherContact(contacts[i]);
            trouve = true;
        }
    }

    if (!trouve) {
        cout << "Aucun contact trouvé." << endl;
    }
}

// Fonction pour comparer deux contacts par nom de famille
bool comparerParNom(const Contact& a, const Contact& b) {
    return a.nom < b.nom;
}

int main() {
    // Tableau dynamique pour stocker les contacts
    Contact contacts[20];
    int nbContacts = 0; 

    int choix;
    do {
        // Afficher le menu
        cout <<endl<< "Menu :" << endl;
        cout << "1. Ajouter un contact" << endl;
        cout << "2. Afficher le répertoire" << endl;
        cout << "3. Rechercher un contact" << endl;
        cout << "4. Trier le répertoire" << endl;
        cout << "5. Quitter" << endl;
        cout << "Entrez votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1: // Ajouter un contact
                if (nbContacts < 20) {
                    cout << "Entrez le nom : ";
                    getchar();
                    getline(cin >> ws, contacts[nbContacts].nom); 
                    cout << "Entrez le prénom : ";
                    getline(cin >> ws, contacts[nbContacts].prenom);
                    cout << "Entrez le numéro : ";
                    cin >> contacts[nbContacts].numero;
                    nbContacts++;
                } else {
                    cout << "Le répertoire est plein !" << endl;
                }
                break;

            case 2: // Afficher le répertoire
                if (nbContacts > 0) {
                    for (int i = 0; i < nbContacts; i++) {
                        afficherContact(contacts[i]);
                    }
                } else {
                    cout << "Le répertoire est vide." << endl;
                }
                break;

            case 3: // Rechercher un contact
                rechercherContact(contacts, nbContacts);
                break;

            case 4: // Trier le répertoire
                sort(contacts, contacts + nbContacts, comparerParNom);
                cout << "Répertoire trié par nom de famille." << endl;
                break;

            case 5: // Quitter
                cout << "Au revoir !" << endl;
                break;

            default:
                cout << "Choix invalide." << endl;
        }
    } while (choix != 5);

    return 0;
}