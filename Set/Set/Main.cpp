// Main.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Set.h"
#include <iostream>
using namespace std;

int main()
{
	Set<char> setA;
	cout << "=======����A=======" << endl;
	cin >> setA;
	cout << "===================" << endl;
	Set<char> setB;
	cout << "=======����B=======" << endl;
	cin >> setB;
	cout << "===================" << endl;
	cout << "A=" << setA << endl;
	cout << "B=" << setB << endl;
	cout << "A��B=" << setA.unionSet(setB).sort() << endl;
	cout << "A��B=" << setA.intersectionSet(setB).sort() << endl;
	cout << "A-B=" << setA.differenceSet(setB).sort() << endl;
	cout << "A��B=" << setA.sysmmetricDifferenceSet(setB).sort() << endl;
	cout << "P(A)=" << setA.powerSet().sort() << endl;
	cout << "A x B=" << setA.cartesianProductSet(setB).sort() << endl;
	cout << "P(B)=" << setB.powerSet().sort() << endl;
	cout << "B x A=" << setB.cartesianProductSet(setA).sort() << endl;
	getchar();

	return 0;
}