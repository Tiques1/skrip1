#include <iostream>

void BigEndian(unsigned char* data, size_t size) {
    for (size_t i = size; i-- > 0;) {
        unsigned char byte = data[i];
        for (size_t n = CHAR_BIT; n-- > 0;) {
            if (byte & (1 << n)) {
                std::cout << "1";
            }
            else {
                std::cout << "0";
            }
        }
    }
}
void LittleEndian(unsigned char* data, size_t size) {
    for (size_t i = 0; i < size; i++) {
        unsigned char byte = data[i];
        for (size_t n = CHAR_BIT; n-- > 0;) {
            if (byte & (1 << n)) {
                std::cout << "1";
            }
            else {
                std::cout << "0";
            }
        }
    }
}void Show(unsigned char* data, size_t size) {
    std::cout << "\nBig-Endian:";
    BigEndian(data, size);
    std::cout << "\nLittle-Endian:";
    LittleEndian(data, size);
}
int main() {
    int inx = 11;
    std::cin >> inx;
    double dbx = double(inx);
    float flx = float(inx);
    std::cout << "int: ";
    Show((unsigned char*)&inx, sizeof(inx));
    std::cout << "\ndouble: ";
    Show((unsigned char*)&dbx, sizeof(dbx));
    std::cout << "\nfloat: ";
    Show((unsigned char*)&flx, sizeof(flx));
}


