#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NetworkAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> host;
    ::ll::TypedStorage<2, 2, ushort>       port;
    // NOLINTEND
};
