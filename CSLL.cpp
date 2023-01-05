#include "CSLL.h"

void createList_1301200475(listLagu &R) {
    first(R) = nil;
}

void createElement_1301200475(infotype laguBaru, adr &p){
    p = new element;
    info(p).artis = laguBaru.artis;
    info(p).genre = laguBaru.genre;
    info(p).judul = laguBaru.judul;
    info(p).playtime = 0;
    next(p) = nil;
}

void insertFirst_1301200475(listLagu &R, adr p) {
    adr last;
    if (first(R) == nil) {
        first(R) = p;
        next(p) = p;
    }else {
        last = first(R);
        while (next(last) != first(R)) {
            last = next(last);
        }
        next(p) = first(R);
        first(R) = p;
        next(last) = p;
    }
}

void deletLast_1301200475(listLagu &R, adr &p) {
    adr k;
    adr last;
    last = first(R);

    if (first(R) == nil) {
        cout << "List Kosong. ";
    } else if (next(first(R)) == last) {
        p = first (R);
        first(R) = nil;
    } else {
        k = first(R);
        while (next(next(k)) != first(R)) {
            k = next(k);
        }
        p = next(k);
        next(k) = first(R);
        next(p) = nil;
    }
}

void showSemuaLagu_1301200475(listLagu R) {
    adr p;

    if(first(R) != nil) {
        p = first(R);
        while (next(p) != first(R)) {
            cout << info(p).artis << endl << info(p).judul << endl << info(p).genre << endl << info(p).playtime << endl << endl;
            p = next(p);
        }
        cout << info(p).artis << endl << info(p).judul << endl << info(p).genre << endl << info(p).playtime << endl << endl;
    } else {
        cout << "List Kosong. ";
    }
}
