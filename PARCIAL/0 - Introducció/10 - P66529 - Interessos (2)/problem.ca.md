# Interessos (2)

Considereu una inversió de $c$ euros en un dipòsit que us dóna un
interès $i$ (expressat en %) anual. Suposeu, però, que es cobra una part
proporcional dels interessos cada cert temps, el qual és un divisor d'un
any (per exemple, un mes, o un trimestre, ...). Sigui $b$ el benefici
obtingut al final d'un any, suposant que tots els interessos s'acumulen
sempre al capital inicial. La taxa anual equivalent (TAE) de la inversió
es defineix com $100b/c$.

Per exemple, suposeu que invertiu 1000 euros en un dipòsit amb un
interès d'un 10%, cobrat semestralment. Després de sis mesos cobreu un
5% dels 1000 euros, i teniu un total de 1050 euros. Després de sis mesos
més cobreu un 5% dels 1050 euros (és a dir, 52.5 euros), i obteniu un
capital final de 1102.5 euros, que es correspon a un benefici de 102.5
euros. Per tant, el TAE és $100 \cdot 102.5/1000 = 10.25$.

Feu un programa que calculi el TAE corresponent a un dipòsit donat.

## Entrada

L'entrada consisteix en l'interès $i$ (un nombre real estrictament
positiu), seguit de la paraula "`setmanal`", "`mensual`",
"`trimestral`", o "`semestral`". Per fer els càlculs, suposeu que un any
té exactament 52 setmanes.

## Sortida

Escriviu el TAE amb 4 decimals. Fixeu-vos que no us cal $c$ per
calcular-lo.

## Observació

Si programeu en C++, feu servir el tipus `double`, i poseu aquestes dues
línies al principi del vostre `main()`:

        cout.setf(ios::fixed);
        cout.precision(4);

## Informació del problema

Autoria: David Virgili

Generació: 2026-01-25T11:29:25.457Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
