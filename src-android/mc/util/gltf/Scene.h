#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Scene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<int>> nodes;
    ::ll::TypedStorage<8, 24, std::string>      name;
    ::ll::TypedStorage<4, 4, int>               id;
    // NOLINTEND
};

} // namespace glTF
