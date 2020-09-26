#include<iostream>
#include<string>
#include<vector>
#include"operator.h"
using namespace std;

int main(int argc, char *argv[]) {
	integer ing(4);
	integer rng(8);
	cout<<(ing < rng);
	cout<<compare(ing, rng);



	return 1;
}