#include <iostream>
using namespace std;

float rata_rata(floatn a, float b)
{
    return (a + b) / 2;
}

string status_lulus(float r)
{
    if (r >= 60)
       return "lolos";
    else
       return "gagal";
}

int main()
{
    float nilBI, nilMT, retars;
    string status;

    cout << "masukkan nilai bahasa inggris = ";
    cin >> nilBI;
    cout << "masukkan nilai matematika = ";
    cin >> nilMT;

    // rerata = ( nilBI=niLMT)/2
    // if (rerata >= 60)
    //     status = "lolos";
    // else
    // status = "gagal;
    rerata = rata_rata(nilBI, nilMT);
    // status = status_lulus(rerata);
    cout << "status kelulusan = " << status_lulus(rerata) << " ,dengan nilai rerata = " << rerata << endl;

}