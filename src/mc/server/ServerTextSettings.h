#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ServerTextSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::bitset<3>> mEnabledTextEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::bitset<3> const& getEnabledServerTextEvents() const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::bitset<3>> mEnabledTextEvents;
#endif // @header-generator platform
    // NOLINTEND
};
