#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
