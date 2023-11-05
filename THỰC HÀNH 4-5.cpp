//Nhập lần lượt ba hệ số a, b, c của 1 phương trình bậc 2. Với a khác 0.
//In ra 1 trong 3 trường hợp của nghiệm của phương trình
//1 - Vô nghiệm
//2 - Co mot nghiem
//3 - Co 2 nghiem

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
	float a, b, c;
	cout << "Cho pt bac 2: ax^2 + bx + c = 0"
		 << "\nNhap lan luot a, b, c: ";
	cin >> a >> b >> c;

	float delta = pow(b,2) - 4 * a * c;

	if (delta == 0)
	{
		float x1 = -b / 2 * a;
		cout << "Pt da cho co nghiem kep: " << "x1 = x2 = " << x1;
	}
	else if (delta > 0)
	{
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "Pt da cho co 2 nghiem: " << "\nx1 = " << x1 << "\nx2 = " << x2;
	}
	else
	{
		cout << "Pt vo nghiem";
	}
}