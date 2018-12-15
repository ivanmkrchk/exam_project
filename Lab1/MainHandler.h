#pragma once

#include "Program.h"
#include <vector>

namespace Exam
{

	class MainHandler
	{
		std::vector<Program*> programs;
		std::vector<ComputationalResource*> resources;
	
	public:
		MainHandler ( )
		{
			init ( );
		}

		std::vector<Program*> getPrograms ( )
		{
			return programs;
		}
		std::vector<ComputationalResource*> getResources ( )
		{
			return resources;
		}

		void init ( )
		{
			auto program = new Program ( "text editor", {}, fixed );
			auto resource = new ComputationalResource ( "cpu", units::Hhz, 5 );
			addProgram ( program );
			auto r2 = new ComputationalResource ( "memory", units::Gb, 256 );
			addResource ( resource );
			auto r3 = new ComputationalResource ( "internet", units::Mb_s, 100 );
			program->addResource ( resource, 100 );
			addResource (r2  );
			addResource (  r3);
			program->addResource ( r2, 5 );
			program->addResource ( r3, 10 );

		}

		void addProgram ( Program * x )
		{
			if (!x)
				return;
			programs.push_back ( x );
		}

		Program* getProgram ( uint32_t index ) { return programs[index]; }

		void addProgramStat ( uint32_t index, uint32_t duration, std::chrono::system_clock::time_point time )
		{
			std::vector<int> usages = calcUsageOfResources ( getProgram ( index ), duration );
			for (int i = 0; i < resources.size ( ); ++i ) {
				resources[i]->addUsage ( time, usages[i] );
			}
		}

		ComputationalResource* const & getResource ( uint32_t index ) { return resources[index]; }


		void addResource ( ComputationalResource * r )
		{
			if (!r)
				return;
			resources.push_back ( r );
		}

		bool calcPercentsOfMaxResources ( std::vector<int> const & x, std::vector<float> & out_percents )
		{
			if (x.size ( ) != resources.size ( ))
				return false;
			out_percents.resize ( x.size ( ) );
			for (size_t i = 0; i < x.size ( ); ++i) {
				float maxCount = (float)resources[i]->getMaxCount ( );
				out_percents[i] = x[i] / maxCount * 100;
			}
		}

		uint32_t calcMedianUsage ( ComputationalResource * r, long long from, long long to )
		{
			return r->getUsages ( from, to );
		}

		std::vector<int> const & calcUsageOfResources ( Program * program, uint32_t sizeOfTask )
		{
			return program->calcUsageOfResources ( sizeOfTask );
		}

	};

}
