#include <fstream>
#include <ctime>
#include <string>
#include <vector>
#include "math.h"
#include "Row.h"

void writeData()
{
	std::ofstream file("data.txt", std::ios::out);

	srand(time(nullptr));
	for (int i = 0; i < 20; ++i)
	{
		Row row("Row #" + std::to_string(i), rand());
		file << row;
	}
	file.flush();
	file.close();
}

void readData() {
	std::vector<Row> dane;
	std::fstream plik;
	plik.open("data.txt", std::ios::in);
	if (!plik.good())
	{
		std::cout << "Unable to read data";
		return;
	}

	Row row;
	while (!plik.eof())
	{
		try
		{
			plik >> row;
			dane.push_back(row);
			std::cout << row;
		}
		catch (...) { }
	}

	plik.close();
}

int main()
{
	// writeData();
	readData();
}