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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>          mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>        mName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                  mIsCircle;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode> mLoadMode;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TickingAreaDescription();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string asString() const;
#else // @header-generator platform
    MCAPI ::std::string asString() const;

    MCAPI ~TickingAreaDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
