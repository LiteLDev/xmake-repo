#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowProfilePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPlayerXUID;
    // NOLINTEND
};
