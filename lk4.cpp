#include <iostream>
#include <exception>
using namespace std;
class Image {
    int* img;
    int mx;
    int my;
public:
    Image(int tmx, int tmy) :mx(tmx), my(tmy) {
        img = new int[mx * my]();
    }
    virtual ~Image()
    {
        delete [] img;
    }
    int get(int x, int y) {
       
            if (x >= mx || y >= my || x < 0 || y < 0) {
                throw 993;
            }
        
        return img[y * mx + x];
    }
    int set(int x, int y, int color) {
       
            if (x >= mx || y >= my || x < 0 || y < 0) {
                throw 993;
            }
        
         img[y * mx + x] = color;
    }
    void show()
    {
        for (int i = 0; i < my; i++)
        {
            for (int j = 0; j < mx; j++)
            {
                cout << img[i * mx + j] << " ";
            }
            cout << endl;
        }
    }
    friend bool operator ==(Image& arrInt, Image& arrInt2)
    {
        return (arrInt.mx == arrInt2.mx && arrInt.my == arrInt2.my);
    }
};

int main() {

    Image img1(8, 8);
    Image img2(8, 8);
    if (img1 == img2)
        cout << "(((((" << endl;
    try {
        img1.set(3, 4, 245);
        img2.set(3, 3, 124);
    }
    catch (int error) {
        cout << error << endl;
    }
    try {
        img1.get(4, 4);
        img2.get(3, 3);
    }
    catch (int error) {
        cout << error << endl;
    }

    img1.show();
    cout << endl;
    img2.show();
    return 0;
}