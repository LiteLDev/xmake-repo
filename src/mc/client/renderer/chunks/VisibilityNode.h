#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/ByteMask.h"

class VisibilityNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 6, ::ByteMask[6]> mVisibility;
    // NOLINTEND

public:
    // prevent constructor by default
    VisibilityNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void connect(::ByteMask const&);

    MCNAPI ::ByteMask const& from(uchar) const;
    // NOLINTEND
};
#else // @header-generator platform
class VisibilityNode {};
#endif // @header-generator platform
