#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Buffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> uri;
    ::ll::TypedStorage<4, 4, int>          byteLength;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, int>          id;
    // NOLINTEND
};

} // namespace glTF
