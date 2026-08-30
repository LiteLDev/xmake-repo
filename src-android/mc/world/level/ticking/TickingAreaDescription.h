#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

struct TickingAreaDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>           mOrigin;
    ::ll::TypedStorage<4, 12, ::BlockPos>           mMax;
    ::ll::TypedStorage<4, 4, uint>                  mRadius;
    ::ll::TypedStorage<8, 24, std::string>          mName;
    ::ll::TypedStorage<1, 1, bool>                  mIsCircle;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode> mLoadMode;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingAreaDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string asString() const;
    // NOLINTEND
};
