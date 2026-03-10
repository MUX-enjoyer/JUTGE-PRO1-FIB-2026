# Pòquer

L'Anna i en Bernat juguen al pòquer amb daus (en una versió
simplificada). A cada partida, primer l'Anna llença cinc daus de pòquer,
i després els llença en Bernat. Cada dau té sis cares, amb valors, de
més a menys: as, rei, reina, cavall, deu i nou. Cada vegada guanya qui
aconsegueixi la jugada més alta. En cas d'empat, guanya l'Anna.

Aquestes són les possibles jugades, ordenades de més a menys valor:

- Repòquer: cinc daus iguals.

- Pòquer: quatre daus iguals.

- Full: tres daus iguals i dos daus iguals.

- Trio: tres daus iguals.

- Doble parella: dos daus iguals i dos daus iguals.

- Parella: dos daus iguals.

- Res: tots els daus diferents.

Si els dos jugadors tenen les mateixes jugades, guanya qui l'hagi
aconseguit amb el dau més alt. Així, per exemple, un trio d'asos guanya
a un trio de reis, i una doble parella de reis i nous guanya a una doble
parella de reines i cavalls.

Si encara hi ha empat després d'usar els daus de la combinació més
valuosa, s'usen els de la segona combinació per desempatar, i així
successivament. Per exemple, un trio de cavalls amb un rei guanya a un
trio de cavalls amb una reina, una doble parella de reis i reines guanya
a una doble parella de reis i deus, un trio de cavalls amb un rei i un
deu guanya a un trio de cavalls amb un rei i un nou, i res amb un as i
un rei guanya a res amb un as i una reina.

Feu un programa que decideixi qui guanya cada partida, i que calculi
quantes partides ha guanyat cadascú.

## Entrada

L'entrada consisteix amb les tirades de cada partida, codificades amb
dues paraules amb cinc caràcters cadascuna, d'entre '`A`', '`R`', '`Q`',
'`C`', '`D`' i '`N`', corresponents respectivament a as, rei, reina
(*queen*, en anglès), cavall, deu i nou.

## Sortida

Per a cada partida, cal escriure "`Anna`" o "`Bernat`" depenent de qui
guanyi. Al final, cal escriure el nombre total de partides guanyades per
cadascú.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T10:27:57.092Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
