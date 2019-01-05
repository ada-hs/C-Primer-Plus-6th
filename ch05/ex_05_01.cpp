#include <iostream>
#include <string>
#include <array>
#include <vector>

int main()
{

	int start, end;
	std::cin>>start;
	std::cin>>end;

	int res = 0;

	for (int i = start;i<=end;i++)
	{
		res+=i;
	}
	std::cout<<res<<std::endl;
	system("pause");
	return 0;
}