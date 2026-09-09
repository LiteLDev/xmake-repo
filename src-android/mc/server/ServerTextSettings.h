#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ServerTextSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::bitset<3>> mEnabledTextEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::bitset<3> const& getEnabledServerTextEvents() const;
    // NOLINTEND
};
