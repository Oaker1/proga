
#include <iostream>
#include <cmath>
int razr(int chislo)
{
  int n = chislo, x = 0;
  while(n != 0){
     n /= 10;
     x++;
    }
  return x;
}
	
int main(){
	int v1 = 0, v2 = 0, znak = 0;
	std::cin >> v1 ;
	if (v1 > 0) 
		znak = 0;
		else
		znak = 1;
	int rz = razr(v1);
	double a = 10;
	for (int k = 1; k <=rz; k++)
	{
		double a = 10;
		double b = rz-(k);
		int l = pow(a,b);  // не убивайте за pow пожалуйста
		std::cout  << v1/l << "*" << 10 << "^" << rz-(k-1);
		if (k<=rz-1)
			std::cout << " + ";
		v1 = v1 - (v1-(v1%l));
	}
}


