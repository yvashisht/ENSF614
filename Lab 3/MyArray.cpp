#include <iostream>
using namespace std;

#include "MyArray.h"
#include <cassert>
#include <algorithm>

MyArray::MyArray() : sizeM(0), storageM(nullptr) {}

MyArray::MyArray(const EType *builtin, int sizeA):sizeM(sizeA) {
    if (sizeM > 0) {
        storageM = new EType[sizeM];
        for (int i = 0; i < sizeM; ++i) {
            storageM[i] = builtin[i];
        }
    } else {
        storageM = nullptr;
    }
  }

MyArray::MyArray(const MyArray& source) : sizeM(source.sizeM) {
    if (sizeM > 0) {
        storageM = new EType[sizeM];
        for (int i = 0; i < sizeM; ++i) {
            storageM[i] = source.storageM[i];
        }
    } else {
        storageM = nullptr;
    }
}

MyArray& MyArray::operator =(const MyArray& rhs) {
    if (this != &rhs) {
        delete[] storageM;

        sizeM = rhs.sizeM;

        if (sizeM > 0) {
            storageM = new EType[sizeM];
            for (int i = 0; i < sizeM; ++i) {
                storageM[i] = rhs.storageM[i];
            }
        } else {
            storageM = nullptr;
        }
    }
    return *this;
}

MyArray::~MyArray() {
    delete[] storageM;
}

int MyArray::size() const {
    return sizeM;
}

EType MyArray::at(int i) const {
    if (i >= 0 && i < sizeM) {
        return storageM[i];
    } else {
        cout << "Not valid." << endl;
    }
}

void MyArray::set(int i, EType new_value) {
    if (i >= 0 && i < sizeM) {
        storageM[i] = new_value;
    } else {
        cout << "Not valid." << endl;
    }
}

void MyArray::resize(int new_size) {
    if (new_size == sizeM) {
        return;
    }

    EType* newStorage = new EType[new_size];
    
    int copySize = std::min(new_size, sizeM);

    for (int i = 0; i < copySize; ++i) {
        newStorage[i] = storageM[i];
    }

    delete[] storageM;

    sizeM = new_size;
    storageM = newStorage;
}
