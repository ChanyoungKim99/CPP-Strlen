#include <iostream>
#include <cstring>

// 영어로 된 자료를 찾자
// 북마크한 사이트들에서 검색


int GetLength(char* pc)
{
	char* p = pc;
	int count{};

	while (*p != '\0')
	{
		p++;
		count++;
	}

	return count;
};

int main()
{
	char input[1000];

	std::cin >> input;
	std::cout << strlen(input) << std::endl;
}