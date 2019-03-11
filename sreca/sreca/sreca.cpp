// sreca.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int N, i, br_bombona, br = 0; // br je brojač koji broji sretne učenike

	cin >> N;

	for (i = 1; i <= N; i++) {

		cin >> br_bombona;

		if (br_bombona >= i)
		{
			br++;					//brojač sretnih učenika
		}

	}
	cout << br;

	return 0;
}
