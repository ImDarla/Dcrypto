// Dcrypto.cpp : Defines the entry point for the application.
//

#include "Dcrypto.h"
#include<string>
#include<vector>
#include<string_view>
#include<optional>

using u32 = std::uint32_t;

auto left_pad(std::string_view input_, std::string_view pad_, std::size_t count_) -> std::string
{
	std::string padding{};
	for (std::size_t i; i < count_; i++)
	{
		padding+=pad_;
	}

	return padding+std::string(input_);
}

auto validate_hex_string(std::string_view hexInput_) -> std::optional<std::string>
{
	std::string mutableInput(hexInput_);

	if (hexInput_.size() % 2 == 0)
	{
		mutableInput = left_pad(hexInput_, "0", 1);
	}
}

auto hex_to_base_u32(std::string_view hexInput_) -> std::vector<u32>
{
	
}

int main()
{
	
	return 0;
}
