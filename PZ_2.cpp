#include <iostream>
#include <string>
using namespace std;
string rez(int a[], int la, int nss, int kss, string u)
{
	string c="";
	int snos, j;
	do
	{
		j=0;
		snos=0;
		for(int i=0; i<la; i++)
		{
			snos = snos*nss;
			snos = snos+a[i];
			if ((snos<kss) && (i) && (j))		
			{a[j]=0;j++;}
			if (snos >= kss){
				a[j] = snos/kss;
				snos = snos%kss;
				j++;
			}
		}
		c = u[snos]+c;
		la = j;
		
	}while(la);
	return c;
}

int main()
{
	string u("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"), chislo;
	int nss, kss;
	cout << "vvedite chislo: "; cin >> chislo;
	cout << "vvedite nach SS: "; cin >> nss;
	cout << " vvedite kon SS: "; cin >> kss;
	int la = chislo.size();
	int *array = new int[la];
	for (int i=0; i<=la; i++)
	array[i]=u.find(toupper(chislo[i]));
	cout << rez(array,la,nss,kss,u) << endl;
}

