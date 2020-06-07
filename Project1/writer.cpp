#include <fstream>
#include <ctime>
#include <string>
#include "math.h"
#include "Row.h"

int writeData()
{
	std::ofstream file("data.txt", std::ios::out);

	srand(time(nullptr));
	for (int i = 0; i < 20; ++i)
	{
		Row row("Row #"+std::to_string(i), rand());
		file << row;
	}
	file.flush();
	file.close();
}