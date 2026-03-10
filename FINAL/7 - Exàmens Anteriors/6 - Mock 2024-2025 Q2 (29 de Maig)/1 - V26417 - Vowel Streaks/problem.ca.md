# Vowel Streaks

Una paraula \"extruida\" és aquella en que té una o més vocals, i alguna
d'elles té un nombre de repeticions major que 1. Per exemple,
\"boneeees\" és una paraula extruida i \"miiiiira\" i \"ooooleeee\"
també. *No* són paraules extruides: \"pa\", \"sol\", i \"torus\".

Donada una paraula \"extruida\", les seves repeticions de vocals es
poden representar amb un vector. Si la vocal $v$ és la $i$-èssima de la
paraula, la casella $i-1$ del vector contindrà el nombre de repeticions
de $v$. És a dir, les repeticions de la primera vocal van a la casella 0
del vector, les de la segona vocal a la casella 1, etc. El vector,
doncs, tindrà un tamany igual que el nombre de vocals de la paraula (que
pot ser 0).

Feu una funció `vowel_streaks` que, donada una paraula \"extruida\",
retorna el vector de les repeticions de vocals que la defineixen. La
declaració és la següent:

    /**
     * @brief   Retorna un vector amb els nombres de repeticions de 
     *          les vocals de la paraula, per ordre d'aparició.
     *
     * Exemples:
     *   vowel_streaks("eeoo") -> [2, 2]
     *   vowel_streaks("aeeiouu") -> [1, 2, 1, 1, 2]
     *   vowel_streaks("paraaulaaa") -> [1, 2, 1, 3]
     *   vowel_streaks("aaaabrakadaaavraaaa") -> [4, 1, 1, 3, 4]
     *
     * @returns Un vector d'enters a on cada enter v[i] és el nombre 
     *          de repeticions de la vocal (i+1)-èssima.
     * 
     * @pre     `word` està formada per caràcters en minúscules i pot 
     *          ser una paraula no "extruida"
     */
    vector<int> vowel_streaks(string word);

Es pot suposar que les paraules totes estan compostes de lletres
minúscules sense accents ni signes de puntuació.

## Observació

Descarregueu el programa principal, que té la funció declarada, i
treballeu directament en aquest fitxer. Un cop feta la funció podeu
enviar al Jutge el fitxer sencer perquè la funció `main` s'ignorarà.

Recordeu que un `string` és, en essència, un vector de caràcters, i té
molts mètodes equivalents als d'un `vector`.

## Entrada

Una seqüència de paraules, algunes \"extruides\" i altres no. La
seqüència no té sentinella. El programa principal ja fa aquesta lectura
i crida la funció `vowel_streaks` per a cadascuna.

## Sortida

El programa principal ja s'encarrega de la sortida, no cal programar res
d'això. La sortida és com segueix. Per a cada paraula de l'entrada es
produeix una línia a la sortida. Si la paraula no té vocals, es mostra
un guió. Si la paraula té vocals, es mostra la seqüència de repeticions
tal com són retornades per `vowel_streaks`, amb els nombres separats per
espais.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T13:07:03.537Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
