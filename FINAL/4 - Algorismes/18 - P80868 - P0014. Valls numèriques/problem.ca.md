# P0014. Valls numèriques

Feu un programa que, donats dos naturals $n$ i $f$, usi $n$ per escriure
una vall amb $f$ files segons es mostra als exemples. Fixeu-vos que
l'última fila té $f$ nombres $n$ separats amb guions, el punt central, i
$f$ nombres $n$ separats amb guions, que cada fila té dos nombres $n$
menys que la immediatament a sota, i que la part del mig s'ha d'omplir
amb tants punts com calgui.

Per resoldre aquest problema, implementeu *recursivament* la funció

        int nombre_digits(int n);

que retorna el nombre de dígits de \@n@, sota la precondició \@n@
$\ge 0$.

## Entrada

L'entrada consisteix en dos naturals $n$ i $f$, amb $f > 0$.

## Sortida

Escriviu una vall de $f$ files usant el nombre $n$ tal i com es pot
veure als exemples.

## Observacions

- No podeu usar strings. Òbviament tampoc no podeu usar vectors.

- Recordeu implementar \@nombre_digits(n)@ recursivament.

## Informació del problema

Autoria: Professorat de P1

Generació: 2026-01-25T11:51:29.275Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
