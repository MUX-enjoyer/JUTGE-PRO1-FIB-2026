# Actualitza Inventari

Una botiga disposa d'un **inventari** de productes que consisteix en una
llista dels productes que ven, incloent el nombre exacte d'unitats de
cada producte que té en estoc. L'inventari es dóna [ordenat]{.underline}
pel codi del producte.

També disposa del **llistat de compres** que s'han fet, per ordre
cronològic, que és una llista dels codis dels productes comprats pels
clients i quantes unitats se n'han comprat.

Fes un **programa** que llegeixi, primer, l'inventari de la botiga; tot
seguit, el llistat de les compres; i finalment, mostri l'[inventari
actualitzat]{.underline}. Actualitzar l'inventari vol dir restar les
unitats comprades a l'estoc de cada producte, per saber quantes unitats
haurien de quedar.

**Possibles errors**

En general, les compres troben suficient estoc, però si una compra vol
més unitats d'un producte de les que hi ha disponibles, s'ha de
considerar que la compra no ha estat possible i per tant aquella compra
s'ignora i no afecta l'inventari.

Per altra banda, sovint la llista de compres conté errors i s'intenten
comprar productes que no apareixen a l'inventari. Quan una compra té un
producte no existent, també s'ignora.

Per tenir una idea de les compres que no eren correctes, ja sigui per
estoc o pel producte inexistent, el programa he de mostrar al final el
[total d'errors]{.underline} (compres invàlides) que s'han detectat.

## Observació

## Entrada

L'entrada consisteix en dues parts: **1)** l'inventari: un enter $n$
seguit de $n$ parelles del codi del producte (un enter) i el nombre
d'unitats en estoc (un enter); **2)** el llistat de compres: un enter
$m$ seguit de $m$ parelles del codi del producte (un enter) i el nombre
d'unitats comprades (un enter). Els codis de producte tenen una lletra
majúscula seguida de 8 dígits.

## Sortida

La sortida serà l'inventari actualitzat, és a dir, una llista de parells
d'enters amb el codi de cada producte i les unitats en estoc finals,
ordenats per l'identificador del producte. La última línia de la sortida
dirà \"`N errors`\" a on `N` és el número de compres invàlides.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T13:07:14.309Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
