#include <iostream>
#include <cstring>

// ����� �� �ڷḦ ã��
// �ϸ�ũ�� ����Ʈ�鿡�� �˻�


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