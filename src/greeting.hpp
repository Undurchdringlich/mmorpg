#pragma once

#include <string>
#include <string_view>

namespace mmorpg {

enum class UserType { kFirstTime, kKnown };

std::string SayHelloTo(std::string_view name, UserType type);

}  // namespace mmorpg