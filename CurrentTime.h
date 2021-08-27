#include <ctime>

//Функция выводит текущее число календаря
int CurrentTime()
{
	
	struct tm today;
	std::time_t t = std::time(nullptr);
	localtime_s(&today, &t);
	return today.tm_mday;
}

