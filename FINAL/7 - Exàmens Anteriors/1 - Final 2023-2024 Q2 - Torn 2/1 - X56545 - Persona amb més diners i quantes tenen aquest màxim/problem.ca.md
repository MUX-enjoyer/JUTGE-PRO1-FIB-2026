# Persona amb més diners i quantes tenen aquest màxim

En aquest exercici us donem un programa que heu de completar. Al
principi del programa es defineix un struct `Person`, que defineix una
persona, amb un nom i quants diners té. El programa principal llegeix
varis casos d'entrada. Cada cas consisteix en la descripció d'una llista
de persones. Per a cada cas, el programa principal crida a una funció
anomenada `compute` que és l'única que heu d'implementar (no heu de
canviar res més). La funció `compute` rep la llista de persones com a
paràmetre, i també té dos paràmetres per referència `namemax` i
`nummax`. La funció `compute` ha de desar sobre `namemax` el nom de la
persona que tingui més diners. En cas que n'hi hagi més d'una amb màxim
nombre de diners, `namemax` haurà de valer la que aparegui en primer
lloc d'entre les que tenen màxim nombre de diners. Alhora, `nummax`
haurà de valer quantes persones tenen aquest màxim nombre de diners.

Aquest és el codi que heu de completar:

    #include <iostream>
    #include <string>
    #include <vector>

    using namespace std;

    struct Person {
        string name;
        int money;
    };

    typedef vector<Person> VPerson;

    // Pre:  v conté com a mínim una persona.
    //       Totes les persones tenen name no buit i money major o igual a 0.
    // Post: namemax conté el nom de la persona amb màxim nombre de diners.
    //       En cas que hi hagi més d'un màxim, namemax conté el nom de la primera persona amb màxim nombre de diners.
    //       nummax conté quantes persones tenen màxim nombre de diners.
    void compute(const VPerson &v, string &namemax, int &nummax)
    {
        // Implementeu aquesta funcio.
        // ...
    }

    int main()
    {
        int n;
        while (cin >> n) {
            VPerson v(n);
            for (int i = 0; i < n; i++)
                cin >> v[i].name >> v[i].money;
            string namemax;
            int nummax;
            compute(v, namemax, nummax);
            cout << namemax << " " << nummax << endl;
        }
    }

## Entrada

L'entrada té varis casos. Cada cas comença amb un natural positiu $n$
major o igual a 1 en una primera línia. En una segona línia hi ha la
descripció d'una llista d'$n$ persones, amb els seus noms (strings sobre
lletres minúscules) i quants diners tenen (naturals majors o iguals a
0). De fet, no us heu de preocupar massa per com son aquestes entrades
perquè el programa que us donem ja té la part de lectura implementada.
Només us heu de preocupar d'implementar la funció `compute` abans
esmentada.

## Sortida

Per a cada cas, el programa ha d'escriure en una nova línia el
corresponent nom de la primera persona amb màxim nombre de diners, i
quantes persones tenen aquest màxim. De fet, no us heu de preocupar
massa per com son aquestes sortides perquè el programa que us donem ja
té la part d'escriptura implementada. Només us heu de preocupar
d'implementar la funció `compute` abans esmentada.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T17:00:59.946Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
