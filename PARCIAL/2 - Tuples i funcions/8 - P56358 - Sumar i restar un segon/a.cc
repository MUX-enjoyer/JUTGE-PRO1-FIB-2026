#include <iostream>
using namespace std;

struct Temps {
    int hora, minut, segon;
};

// PRE: Rep un temps determinat
// POST: Retorna el nombre de segons totals
int temps_a_segons(const Temps& t) {
    return t.hora*3600+ t.minut*60 + t.segon;
}

// PRE: Li entra un nombre determinat de hores minuts i segons
// POST: Ho converteix a una hora "normal" en un rellotge
// Hora <24, minut < 60 i segon < 60
Temps normalitzar_segons_a_temps(int segons) {
    Temps t;
    if (segons >= 60) {
        t.minut = segons/60;
        t.segon = segons%60;
    }
    if (t.minut >= 60) {
        t.hora = t.minut/60;
        t.minut = t.minut%60;
    }

    if (t.hora >= 24) {
        t.hora = t.hora%24;
    }


    if (t.segon < 0) {
        t.segon +=60;
        t.minut -= 1;
    }
    if (t.minut < 0) {
        t.minut +=60;
        t.hora -= 1;
    }
    if (t.hora < 0) {
        t.hora += 24;
    }

    return t;
}

// Post t1 = t + 1 segon; t2 = t - 1 segon
void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    int segons_totals = temps_a_segons(t);
    
    t1 = normalitzar_segons_a_temps(segons_totals + 1);

    t2 = normalitzar_segons_a_temps(segons_totals - 1);
}

int main() {
    Temps hora_inicial, hora_1seg_mes, hora_1seg_menys;
    cin >> hora_inicial.hora >> hora_inicial.minut >> hora_inicial.segon;

    // hora_1seg_mes NO ESTA INICIALITZAT
    un_segon(hora_inicial, hora_1seg_mes, hora_1seg_menys);
    // hora_1seg_mes SI S'HA INICIALITZAT

    cout << hora_1seg_mes.hora << " " << hora_1seg_mes.minut << " " << hora_1seg_mes.segon << endl;
    cout << hora_1seg_menys.hora << " " << hora_1seg_menys.minut << " " << hora_1seg_menys.segon << endl;
}