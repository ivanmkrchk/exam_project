#pragma once

#include <string>
#include <chrono>
#include <map>
#include <vector>

namespace Exam
{
	class Program;

	enum units
	{
		Hhz,
		Gb,
		Mb_s
	};

	class ComputationalResource
	{
		std::string			name;
		units				unit;
		uint32_t			maxCount;
		std::vector<Program*> programs;
		std::vector <std::pair<std::chrono::system_clock::time_point, uint32_t>> usages;
	
	public:
		ComputationalResource ( std::string name, units unit, uint32_t maxCount )
		{
			this->name = name;
			this->unit = unit;
			this->maxCount = maxCount;
		}

		void addProgram ( Exam::Program * p )
		{
			programs.push_back ( p );
		}

		void addUsage ( std::chrono::system_clock::time_point t, uint32_t amount )
		{
			usages.push_back ( std::pair<std::chrono::system_clock::time_point, uint32_t> ( t, amount ) );
		}

		uint32_t getUsages ( long long from, long long to )
		{
			if (usages.empty ( ))
				return 0;
			uint32_t sum = 0;
			for (auto const & t : usages) {
				if (t.first.time_since_epoch ( ).count ( ) < from && t.first.time_since_epoch ( ).count ( ) > to)
					continue;
				sum += t.second;
			}
			sum /= usages.size ( );
			return sum;
		}

		std::vector<Exam::Program*> const & getPrograms ( ) const { return programs; }

		std::string getName		( ) const { return name; }
		units		getUnit		( ) const { return unit; }
		uint32_t	getMaxCount	( ) const { return maxCount; }
	};
}