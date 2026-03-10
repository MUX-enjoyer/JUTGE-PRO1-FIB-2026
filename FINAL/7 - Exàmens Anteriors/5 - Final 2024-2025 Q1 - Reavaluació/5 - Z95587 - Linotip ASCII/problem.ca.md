# Linotip ASCII

Volem un programa que actua com una Linotip, una màquina de fa força
temps que ajuntava caràcters d'una font per imprimir textos. En el
nostre programa, es tracta de mostrar només paraules fent servir una
font ASCII. Per exemple, si volem imprimir la paraula \"`magpie`\", la
sortida hauria de ser:

                           _                  
     _____  ___  ___  ___ |_| ___             
    |     || .'|| . || . || || -_|            
    |_|_|_||__,||_  ||  _||_||___|            
                |___||_|                      

Si descarregueu el fitxer `main.cc` a la icona de nom \"**.CPP**\",
veureu que la font ja ve declarada com a constant en una matriu
`abecedari` de tipus `vector<string>`:

    const vector<string> abecedari = { /*
    	                                                                
         0      1      2      3      4      5      6      7      8   
         |      |      |      |      |      |      |      |      |   
    */  "        _               _           ___           _      _   . . .
        " ___   | |_    ___    _| |   ___   |  _|   ___   | |_   |_|  . . .
        "| .'|  | . |  |  _|  | . |  | -_|  |  _|  | . |  |   |  | |  . . .
        "|__,|  |___|  |___|  |___|  |___|  |_|    |_  |  |_|_|  |_|  . . .
        "                                          |___|              . . .
    };

Cada submatriu de $5 \times 7$ caràcters d'`abecedari` conté una lletra
de la font, i la majoria de lletres ocupen 5 caràcters d'ample. Tota la
part sense \"pintar\" són espais blancs (`' '`). Com que hi ha algunes
lletres més estretes o més amples, tenim les següents excepcions a
l'amplada de 5 caràcters: la lletra \"`l`\" i la lletra \"`i`\" tenen
una amplada de 3 caràcters, i la lletra \"`m`\" i la lletra \"`w`\"
tenen una amplada de 7 caràcters (com a mostra teniu la paraula
\"`magpie`\" de més amunt).

Així doncs, el nostre programa ha d'anar mirant cada lletra de la
paraula que volem imprimir, anar a l'abecedari a buscar la lletra
corresponent, i acumular les submatrius de cada lletra de la font en una
matriu resultat. Un cop fet això, s'ha de mostrar la matriu resultat per
pantalla.

Fes, doncs, un programa que llegeixi una seqüència de paraules sense
sentinella i les mostri per pantalla usant la font ASCII donada, tal com
feia la Linotip.

## Observació

- Recordeu que el tipus `vector<string>` és, en realitat, una matriu de
  caràcters, ja que es pot pensar que cada `string` és pràcticament com
  un `vector<char>`. Tanmateix, és important mantenir el tipus
  `vector<string>` ja que algunes operacions són més senzilles.

- L'equivalent a `vector<char>(7, 'x')` és `string(7, 'x')`. Això t'ha
  de permetre inicialitzar una matriu de caràcters.

- Es pot fer servir `push_back` per afegir elements a un vector, i
  l'operador `+` per fer créixer un `string`.

- No rebusqueu algorismes eficients de fer aquest problema, l'únic
  desafiament és aconseguir imprimir les paraules.

- Descomposeu el problema en operacions més petites que siguin funcions
  més còmodes i fàcils d'escriure.

## Entrada

L'entrada és una seqüència de paraules sense espais, i sense sentinella.

## Sortida

La sortida és la seqüència de paraules impreses en la font ASCII,
cadascuna ocupant 5 línies de text. Les línies de text tenen espais en
els buits de cada lletra però no hi ha espais extra al final ni entre
lletres. Per tant cada paraula és exactament una concatenació de les
submatrius de les lletres tenint en compte la seva amplada.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T20:03:38.498Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
