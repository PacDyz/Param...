// ConsoleApplication2.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>

template< typename ... Param>
auto add( Param ... param)
{
	return ( ... + param );
}
int main()
{
	std::cout << add(10, 20, 20.20, 100, 11, 0.0004) << std::endl;
	system("pause");
	return 0;
}

