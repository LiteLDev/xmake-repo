#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

struct ReplaceRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mMayReplace;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplaceRule& operator=(ReplaceRule const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReplaceRule();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
