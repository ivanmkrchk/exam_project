#pragma once

#include <string>
#include <chrono>

namespace Exam
{
	class Program;

	enum CompResourceUsageParams;

	class Update
	{

		std::string name;
		std::chrono::system_clock::time_point dt;

		CompResourceUsageParams * param;


	public:

		Update	(std::string name, std::chrono::system_clock::time_point when_created, CompResourceUsageParams * param ) {}
		~Update	( ) {}

		std::chrono::system_clock::time_point getDt ( ) const { return dt; }
		void apply ( Program *p );
	};
}