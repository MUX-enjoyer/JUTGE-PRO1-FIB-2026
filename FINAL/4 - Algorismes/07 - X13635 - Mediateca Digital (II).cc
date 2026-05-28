#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Track {
  string artist, title, genre;
  int year;
};

bool comp(const Track &a, const Track &b) {
    if (a.artist < b.artist) return true;
    else if (a.artist > b.artist) return false;

    // a.artist == b.artist
    if (a.year < b.year) return true;
    else if (a.year > b.year) return false;

    // a.artist == b.artist && a.year == b.year
    if (a.title < b.title) return true;
    else return false;
}

vector<Track> read_tracks(int n) {
    vector<Track> c(n);
    for (int i = 0; i < n; i++) {
        int any;
        string artista, genere, titol;
        cin >> artista >> titol >> genere >> any;

        c[i].artist = artista;
        c[i].genre = genere;
        c[i].title = titol;
        c[i].year = any;
    }

    return c;
}

void print_track(const Track &t) {
  cout << t.artist;
  cout << " (" << t.year;
  cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<Track> cançons = read_tracks(n);

    sort(cançons.begin(), cançons.end(), comp);

    for (int i = 0; i < n; i++) {
        print_track(cançons[i]);
    }
}