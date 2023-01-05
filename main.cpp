#include <iostream>

using namespace std;

int main() {

    listLagu R;
    adr p;
    infotype infoLagu;
    int z;
    z = 1;

    createList_1301200475(R);

    while (z <= 2) {
        string artis, judul, genre;
        cout << endl;
        cout << "Artis: ";
        cin >> infoLagu.artis;
        cout << "Judul: ";
        cin >> infoLagu.judul;
        cout << "Genre: ";
        cin >> infoLagu.genre;

        createElement_1301200475(infoLagu, p);
        insertFirst_1301200475(R, p);
        z++;
    }
    showSemuaLagu_1301200475(R);
    deleteLast_1301200475(R, p);
    cout << "List setelah procedure deleteLast: " << endl;
    showSemuaLagu_1301200475(R);
}
