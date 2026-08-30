#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisconnectPacketMessages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<8, 24, std::string> mFilteredMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::DisconnectPacketMessages const&) const;
    // NOLINTEND
};
