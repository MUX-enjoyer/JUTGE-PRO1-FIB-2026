# Progressió en una cursa ciclista

Al final d'aquest enunciat hi podeu trobar un programa a mig fer que
haureu de completar. Concretament, hi han dues funcions que estan
pendents d'implementar. A continuació us expliquem amb quines dades
treballa el programa i què han de fer aquestes funcions.

El programa treballa amb un tipus de dada `Cyclist`, que representa un
ciclista que participa en una carrera, que inclou el nom del ciclista,
la seva posició actual i la seva velocitat actual. Per simplificar,
utilitzem variables enteres enlloc de reals.

    struct Cyclist {
      string name;
      int position;
      int velocity;
    };

El programa també treballa amb un tipus de dada `ListCyclists`, que
representa una llista de ciclistes:

    typedef vector<Cyclist> ListCyclists;

Haureu d'implementar una funció que rep una llista de ciclistes i un
temps transcorregut, i ha d'actualitzar la posició de tots els ciclistes
afegint-los-hi la seva velocitat multiplicada per aquest temps
transcorregut. Si algú vol pensar en termes d'unitats específiques, us
podeu imaginar que la posició és en metres, el temps en segons, i la
velocitat en metres per segon.

    void progressCyclists(int time, ListCyclists &listcyclists)

A més a més, haureu d'implementar una funció que rep dos ciclistes i
retorna cert si el primer ciclista és menor que el segon d'acord al
criteri que descrivim seguidament. Un ciclista és menor que un altre si
està en una posició estrictament menor que l'altre, o està a la mateixa
posició que l'altre i té estrictament menys velocitat, o està a la
mateixa posició i té la mateixa velocitat que l'altre però el seu nom és
menor que el nom de l'altre en ordre lexicogràfic.

    bool smallerCyclist(Cyclist c1, Cyclist c2)

La funció anterior es fa servir des d'un altre lloc del programa per a
ordenar tots els ciclistes.

Completeu el següent codi a mig per per tal de solucionar l'exercici:

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    // Here you can add more includes if you wish.
    // ...

    using namespace std;

    struct Cyclist {
      string name;
      int position;
      int velocity;
    };

    typedef vector<Cyclist> ListCyclists;

    // Auxiliary functions (you can add more functions if you wish)

    // Pre:  
    // Post: Prints all cyclists from first to last, one per line, and with the format:
    //       name position velocity
    void printCyclists(const ListCyclists &listcyclists)
    {
      for (int i = 0; i < int(listcyclists.size()); i++) {
        const Cyclist &c = listcyclists[i];
        cout << c.name << " " << c.position << " " << c.velocity << endl;
      }
    }

    // Pre:  variable 'time' is strictly positive and represents a time elapsed.
    // Post: All positions of cyclists in listcyclists have been updated
    //       according to the given time elapsed and their corresponding velocity.
    void progressCyclists(int time, ListCyclists &listcyclists)
    {
      // Implement this function.
      //...
    }

    // Pre:  c1, c2 represent correct cyclists.
    // Post: Returns true iff one of the following conditions holds:
    //         - position of c1 is strictly smaller than position of c2.
    //         - c1 and c2 have same position but velocity of c1 is strictly smaller than velocity of c2.
    //         - c1 and c2 coincide in position and velocity, but c1 has smaller name than c2.
    bool smallerCyclist(Cyclist c1, Cyclist c2)
    {
      // Implement this function.
      //...
    }

    int main()
    {
      int n;
      cin >> n;
      ListCyclists listcyclists(n);
      for (int i = 0; i < n; i++) {
        Cyclist &c = listcyclists[i];
        cin >> c.name;
        c.position = 0;
        c.velocity = 0;
      }
      string command;
      while (cin >> command) {
        if (command == "UPDATEVELOCITY") {
          int i, velocity;
          cin >> i >> velocity;
          listcyclists[i].velocity = velocity;
        } else if (command == "SORT") {
          sort(listcyclists.begin(), listcyclists.end(), smallerCyclist);
        } else if (command == "PRINT") {
          cout << "Current list cyclists:" << endl;
          printCyclists(listcyclists);
          cout << endl;
        } else if (command == "PROGRESSCYCLISTS") {
          int time;
          cin >> time;
          progressCyclists(time, listcyclists);
        }
      }
    }

## Entrada

La entrada consisteix en una llista de comandes per a actualitzar la
velocitat d'un ciclista, ordenar-los, escriure'ls tots, i fer progressar
tots els ciclistes. No us n'heu de preocupar massa perquè el main que us
donem ja s'encarrega de llegir les comandes i cridar a les corresponents
funcions.

## Sortida

La sortida mostra els resultats de les comandes. No us n'heu de
preocupar massa perquè el main que us donem ja s'encarrega de produïr
aquesta sortida cridant a les corresponents funcions.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T22:06:54.752Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
