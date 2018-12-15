#pragma once

#include <string>


namespace Exam
{
	class Producer
	{

		std::string name;

	public:

		Producer ( std::string name ) { this->name = name; }
		std::string getName ( ) const { return name; }
	};
}