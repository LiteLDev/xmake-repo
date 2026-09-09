#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/INIProperty.h"

namespace cereal {

struct INISection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                          name;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, cereal::INIProperty>> properties;
    // NOLINTEND
};

} // namespace cereal
