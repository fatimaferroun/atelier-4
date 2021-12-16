#include<iostream>
using namespace std;

class Complexe
{
public:
Complexe(float x, float y); 
void Lis(); 
void Affiche(); 
Complexe operator+(Complexe g); 
private:
float re, im; 

Complexe::Complexe(float x, float y) 
{
re = x;
im = y;
}
Complexe::Complexe()
{
re = 0.0;
im = 0.0;
}
void Complexe::Lis() 
{
cout << "Partie r´eelle ? ";
cin >> re;
cout << "Partie imaginaire ? ";
cin >> im;
}
void Complexe::Affiche() 
{
cout << re << " + i " << im;
}
Complexe Complexe::operator+(Complexe g) 
{

return Complexe(re + g.re, im + g.im); 
}

int main() 
{
Complexe z1(0.0, 1.0);
Complexe z2; 
z1.Affiche(); 
cout << "\nEntrer un nombre complexe : ";
z2.Lis(); 
cout << "\nVous avez entr´e : ";
z2.Affiche(); 
Complexe z3 = z1 + z2; 
cout << "\n\nLa somme de ";
z1.Affiche();
cout << " et ";
z2.Affiche();
cout << " est ";
z3.Affiche();
}
