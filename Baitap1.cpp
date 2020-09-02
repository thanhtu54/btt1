
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
	void main()
	{
		phanso x, y;
		printf("\nNhap phan so thu nhat ");
		nhapphanso(x);
		xuatphanso(x);
		printf("\nNhap phan so thu 2");
		nhapphanso(y);
		xuatphanso(y);
		phanso tong = tongps(x, y);
		printf("\n tong ");
		xuatphanso(tong);
		phanso hieu = hieups(x, y);
		printf("\nHieu ");
		xuatphanso(hieu);
		phanso tich = tichps(x, y);
		printf("\nTich ");
		xuatphanso(tich);
		phanso thuong = thuongps(x, y);
		printf("\nThuong ");
		xuatphanso(thuong);
		getch();

	}

