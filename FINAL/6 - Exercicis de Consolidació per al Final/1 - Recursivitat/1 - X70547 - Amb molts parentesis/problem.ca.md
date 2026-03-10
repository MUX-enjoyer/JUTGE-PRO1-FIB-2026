# Amb molts parèntesis

Implementeu una funció **recursiva** que, donat un `string` $s$ i un
nombre natural $n$, retorni $s$ delimitat per parèntesis $n$ vegades, i
alhora alternant el tipus de parèntesis. Cal alternar entre parèntesis
\"`()`\" i corxets \"`[]`\", i la primera vegada (és a dir, amb $n = 1$)
utilitzar parèntesis.

La capçalera és la següent:

    string parenthesize(string s, int n);

*Pista*: és bona idea utilitzar l'operador `+` que en el cas dels
`string`s produeix la concatenació dels valors. Per exemple, en el
següent codi

    string a = "ae", b = "iou";
    string c = a + b;

la variable `c` tindrà el valor `"aeiou"`.

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Observació

Fixeu-vos que es demana una solució **recursiva**. Solucions no
recursives s'invalidaran a l'avaluació.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-25T19:20:01.007Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
