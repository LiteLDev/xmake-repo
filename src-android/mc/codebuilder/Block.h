#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Block {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> id;
    ::ll::TypedStorage<8, 8, ulong>        aux;
    ::ll::TypedStorage<8, 24, std::string> name;
    // NOLINTEND
};

} // namespace CodeBuilder
