// ----------- ZAD32 -----------
//(string) Zaparkowałeś samochód na parkingu i chcesz obliczyć całkowity koszt biletu.
//Zasady rozliczeń są następujące:
//	Opłata za wjazd na parking wynosi 2;
//	Pierwsza rozpoczęta godzina kosztuje 3;
//	Każda kolejna rozpoczęta godzina kosztuje 4.
//Wjechałeś na parking o godzinie E i wyjechałeś o godzinie L.
//Czasy są reprezentowane jako ciągi w formacie „GG:MM”
//(gdzie „GG” to dwucyfrowa liczba z zakresu od 0 do 23, która oznacza godziny, a „MM” to dwucyfrowa liczba z zakresu od 0 do 59, oznaczająca minuty).
//Program ma wydrukować całkowity koszt rachunku za parking od wjazdu w czasie E do wyjazdu w czasie L.
//Program przyjmuje E i L w parametrach programu

//Np.
//./parking 10:00 13:21 ➞ WYDRUKUJE: 17
//./parking 09:42 11:42 ➞ WYDRUKUJE: 9

//Możesz założyć, że:
//godziny E i L są zawsze w formacie „GG:MM”;
//E < L i są tego samego dnia.



// ROZWIĄZANIE POCZATEK
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string wjazd = argv[1];
    string wyjazd = argv[2];
    int enterHour = (wjazd[0] - '0') * 10 + (wjazd[1] - '0');
    int enterMinute = (wjazd[3] - '0') * 10 + (wjazd[4] - '0');
    int exitHour = (wyjazd[0] - '0') * 10 + (wyjazd[1] - '0');
    int exitMinute = (wyjazd[3] - '0') * 10 + (wyjazd[4] - '0');

    // Obliczenie czasu parkowania w minutach.
    int czasp = (exitHour * 60 + exitMinute) - (enterHour * 60 + enterMinute);
    // Obliczenie kosztu parkingu.
    int oplata = 2 + 3; // Opłata za wjazd + pierwsza rozpoczętą godzinę.

    if (czasp > 60) {
        // Dodatkowe opłaty za każdą kolejną rozpoczętą godzinę.
        if (czasp % 60 != 0) {
            oplata += 4 * ((czasp - 60) / 60 + 1);
        } else {
            oplata += 4 * ((czasp - 60) / 60);
        }
    }
    if (czasp < 0) {
        oplata = 0;
    }
    cout << oplata << endl;

    return 0;
}

// ROZWIĄZANIE KONIEC
