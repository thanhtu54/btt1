#pragma once
class nx
{
	struct phanso
	{
		int tu;
		int mau;
	};
	void nhapphanso(phanso& ps);
	void xuatphanso(phanso ps);
	int ULCN(int a, int b);
	void rutgon(phanso& ps);
	phanso tongps(phanso x, phanso y);
	phanso hieups(phanso a, phanso b);
	phanso tichps(phanso a, phanso b);
	phanso thuongps(phanso a, phanso b);
	void nhapphanso(phanso& ps)
	{
		printf("\nNhap vao tu so ");
		scanf("%d", &ps.tu);
		do
		{
			printf("\nNhap vao mau so ");
			scanf("%d", &ps.mau);
			if (ps.mau == 0)
				printf("\nMau phai khac khong\nVui long kiem tra lai");
		} while (ps.mau == 0);
	}
	void xuatphanso(phanso ps)
	{
		printf("Phan so: %d / %d", ps.tu, ps.mau);
	}
	void rutgon(phanso& ps)
	{
		int c = UCLN(ps.tu, ps.mau);
		ps.tu = ps.tu / c;
		ps.mau = ps.mau / c;
	}
	phanso tongps(phanso a, phanso b)
	{
		phanso tong;
		tong.tu = a.tu * b.mau + b.tu * a.mau;
		tong.mau = a.mau * b.mau;
		rutgon(tong);
		return tong;
	}
	phanso tongps(phanso a, phanso b)
	{
		phanso tong;
		tong.tu = a.tu * b.mau + b.tu * a.mau;
		tong.mau = a.mau * b.mau;
		rutgon(tong);
		return tong;
	}
	phanso tichps(phanso a, phanso b)
	{
		phanso tich;
		tich.tu = a.tu * b.tu;
		tich.mau = a.mau * b.mau;
		rutgon(tich);
		return tich;
	}
	phanso thuongps(phanso a, phanso b)
	{
		phanso thuong;
		thuong.tu = a.tu * b.mau;
		thuong.mau = a.mau * b.tu;
		rutgon(thuong);
		return thuong;
	}
};

