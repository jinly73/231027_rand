#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int box[52];

	for (int i = 0; i < 52; ++i)
	{ 

		box[i] = i + 1;
	}

	srand((unsigned int)time(nullptr));
	
	for (int i = 0; i < 10000; ++i)
	{

		int first = rand() % 52;
		int second = rand() % 52;
		int Temp = box[first];
		box[first] = box[second];
		box[second] = Temp;
	}

	for (int i = 0; i < 4; ++i)
	{

		cout << box[i] << endl;
	}

	return 0;

}

