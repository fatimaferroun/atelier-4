#include <iostream>
#include <list>
#include <iterator>
using namespace std;
//function for printing the elements in a list
void showlist(list <int> g)
{
list <int> :: iterator it;
for(it = g.begin(); it != g.end(); ++it)
cout << '\t' << *it;
cout << '\n';
}
int main()
{
list <int> gqlist1;
for (int i = 0; i < 10; ++i)
{
	cout<< "entrer le nombre"<<endl;
	int a;
	cin>>a;

gqlist1.push_front(a);}

cout << "\ngqlist2.sort(): ";
gqlist1.sort();
showlist(gqlist1);
}
