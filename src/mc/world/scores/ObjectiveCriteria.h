#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveRenderType.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class ObjectiveCriteria {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>          mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>        mName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                  mReadOnly;
    ::ll::TypedStorage<1, 1, ::ObjectiveRenderType const> mRenderType;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ObjectiveCriteria();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ObjectiveRenderType getRenderType() const;

    MCNAPI bool isReadOnly() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
