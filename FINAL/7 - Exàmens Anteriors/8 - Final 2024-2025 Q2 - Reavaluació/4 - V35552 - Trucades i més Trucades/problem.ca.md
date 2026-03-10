# Trucades i més Trucades

Tenim números de telèfons que van rebent trucades en una hora
determinada. Un telèfon pot rebre trucades en qualsevol hora, amb
repeticions i sense cap tipus d'ordre. Volem saber quan un telèfon ha
rebut almenys 3 trucades en 4 hores diferents. Per exemple, si tenim el
telèfon $666102030$, suposeu que rebi aquestes trucades:

    666102030 15:45  666102030 09:45  666102030 15:10  666102030 14:00
    666102030 19:01  666102030 14:45  666102030 11:45  666102030 15:22  
    666102030 09:09  666102030 10:45  666102030 20:22  666102030 11:21  
    666102030 14:22  666102030 19:45  666102030 11:42  666102030 15:11  
    666102030 10:43  666102030 13:45  666102030 17:40  666102030 19:51  

Just després de la darrera trucada `666102030 19:51`, aquest telèfon ha
rebut 2 trucades a les 9h, 2 trucades a les 10h, 3 trucades a les 11h, 1
trucada a les 13h, 3 trucades a les 14h, 4 trucades a les 15h, 1 trucada
a les 17h, 3 trucades a les 19h i 1 trucada a les 20h. i, per tant, té 4
hores diferents (11h, 14h, 15h, 19h) amb almenys 3 trucades. **Just** en
aquest moment, cal treure aquest telèfon pel canal de sortida. Com podeu
veure, el fet que hi hagi una hora (15h) amb més de $3$ trucades no
importa, simplement cal que *almenys* tingui 3 trucades.

Cal fer un **programa** que tregui pel canal de sortida els números de
telèfon tan aviat com compleixin aquesta condició: *tenen 4 hores
diferents amb almenys 3 trucades*. L'entrada té aquest format:

1.  Un enter $N$ amb el nombre de telèfons diferents que hi haurà.

2.  $N$ nombres de telèfon diferents ordenats.

3.  Un nombre indeterminat de **trucades**, és a dir, de parells
    `telefon, hora`. Tot telèfon en la llista de trucades haurà aparegut
    a la primera llista ordenada de telèfons.

Tingueu en compte que el telèfon es pot considerar un enter i que l'hora
consisteix en un enter (l'hora), un caràcter (el separador `:`) i un
enter (els minuts).

Un exemple de l'entrada podria ser aquest:

    3 
    666321000 934500000 979808080

    979808080 15:45
    666321000 19:01
    934500000 09:09
    979808080 14:22
    666321000 10:43
    ...

## Observació

Aquest problema té com a centre d'interès l'*eficiència*. Feu servir els
millors algorismes i estructures de dades que pogueu i considereu que
rebreu dades d'entrada de grans dimensions.

Aquest problema tindrà les següents penalitzacions (a la correcció
manual segons els criteris de correcció):

1.  Si es fa servir una estructura per a desar dades que no cal
    emmagatzemar: 5 punts per estructura .

2.  Si no es fan servir els algoritmes més eficients possibles: 5 punts
    per a cada cas.

3.  Recorregut en comptes de cerca: 8 punts.

En cas que no completeu l'algoritme, la nota manual la decidirà el
corrector depenent del que hagueu arribat a fer.

## Entrada

L'entrada és:

1.  Un enter $N$ amb el nombre de telèfons diferents que hi haurà.

2.  $N$ nombres de telèfon diferents ordenats.

3.  Un nombre indeterminat de **trucades**, és a dir, de parells
    `telefon hora` separats per un espai.

## Sortida

Els nombres de telèfon que compleixen aquesta condició: *tenir almenys 4
hores diferents amb almenys 3 trucades*. Important: cal que apareguin
tan aviat com compleixin aquesta condició.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:08:03.999Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
