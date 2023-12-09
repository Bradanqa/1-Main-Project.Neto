#pragma once
#include "Transport.h"
#include <compare>
#include <string>

namespace TransportLib {
	class TRANSPORTLIB_API Results {
	public:
		double resultOfTransport = 0;
		std::string nameOfTransport = "0";

		auto operator<=>(const Results&) const = default;
	};
}