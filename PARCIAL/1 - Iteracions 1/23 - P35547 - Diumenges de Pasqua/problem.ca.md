# Diumenges de Pasqua

El Diumenge de Pasqua és una festa mòbil que es correspon al primer
diumenge després de la primera lluna plena de la primavera. Feu un
programa per calcular el dia $D$ i el més $M$ en què cau el Diumenge de
Pasqua de cada any donat $A$.

A continuació, `:=` indica assignació, `div` indica divisió entera, i
`mod` indica el residu de la divisió entera. Per resoldre aquest
problema, utilitzeu el mètode de Gauss:

- Calculeu

  1.  $k := A~\text{div}~100$

  2.  $x := A ~\text{mod}~ 19$

  3.  $b := A ~\text{mod}~ 4$

  4.  $c := A ~\text{mod}~ 7$

  5.  $q := k~\text{div}~4$

  6.  $p := (13+8k)~\text{div}~25$

  7.  $y := (15-p+k-q) ~\text{mod}~ 30$

  8.  $z := (19x+y) ~\text{mod}~ 30$

  9.  $n := (4+k-q) ~\text{mod}~ 7$

  10. $e := (2b+4c+6z+n) ~\text{mod}~7$

- Si $z+e \le 9$, llavors $D := 22+z+e$ i $M := 3$.

- Altrament, si $z=29$ i $e=6$, llavors $D := 19$ i $M := 4$.

- Altrament, si $z=28$ i $e=6$ i $x>10$, llavors $D := 18$ i $M := 4$.

- Altrament, $D := z+e-9$ i $M := 4$.

## Entrada

L'entrada consisteix en diversos naturals entre 1800 i 9999.

## Sortida

Cal escriure el dia i el més en què cau el Diumenge de Pasqua de cada
any.

## Informació del problema

Autoria: Jordi Petit

Generació: 2026-01-25T10:26:10.357Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
