#pragma once

#include "Producer.h"
#include "ComputationalResource.h"
#include "Update.h"
#include <vector>
#include <map>
#include <string>
#include <list>

namespace Exam
{
	enum CompResourceUsageParams
	{
		fixed,
		proportioned,
		jumps,
		prop_limited
	};


	class Program
	{
		const int				maxCoeff = 0.8;

		std::string				name;
		Producer*				producer;
		std::list<Update*>		updates;
		CompResourceUsageParams resourceUsageParams;
//		std::vector<int>		resourceUsage;
		std::map<ComputationalResource*, int> resources;

	public:

		Program ( std::string name, Producer* producer, CompResourceUsageParams resourceUsageParams)
		{
			this->name = name;
			this->producer = producer;
			this->resourceUsageParams = resourceUsageParams;
		}

		~Program ( )
		{
			for (auto & i : updates) {
				delete i;
				i = nullptr;
			}
		}

		Update* lastUpdate ( ) const { return updates.front ( ); }

		bool addResource ( ComputationalResource * r, int usageRate )
		{
			if (usageRate > r->getMaxCount())
				return false;
			resources.insert ( std::pair<ComputationalResource*, int>( r, usageRate ) );
			r->addProgram ( this );
		}
		
		std::map<ComputationalResource*, int> & getResources ( )	{ return resources; }
	//	std::vector<ComputationalResource*>::iterator & resourcesEnd ( )		{ return resources.end ( ); }

		std::string getName ( ) const { return name; }
		
		Producer*	getProducer ( ) const { return producer; }
		
		std::list<Update*> const & getUpdates ( ) const { return updates; }
		
		void addUpdate ( Update* u )
		{
			u->apply ( this );
			updates.push_back ( u );
		}

		void setResourceUsageParams ( CompResourceUsageParams const & params )
		{
			resourceUsageParams = params;
		}

		std::vector<int> const & calcUsageOfResources ( uint32_t sizeOfTask )
		{
			std::vector<int> res;
			switch (resourceUsageParams) {
			case fixed: { 
				res  = std::vector<int> ( resources.size ( ) );
				for (auto const & m : resources) {
					res.push_back ( m.second );
				}
			} break;
			case proportioned: {
				res= std::vector<int> (resources.size());
				for (auto const & m : resources) {
					res.push_back ( m.second*sizeOfTask );
				}

			} break;
			case jumps: {
				res= std::vector<int> ( resources.size ( ) );
				for (auto const & m : resources) {
					res.push_back ( m.second*sizeOfTask );
				}
			} break;
			case prop_limited: {
				int coeff = sizeOfTask > maxCoeff ? maxCoeff : sizeOfTask;
				res = std::vector<int> ( resources.size ( ) );
				for (auto const & m : resources) {
					res.push_back ( m.second*coeff );
				}				
			} break;
			}
			return res;
		}

	};
//	vector<
}