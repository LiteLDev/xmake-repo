#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/server/commands/standard/TeleportData.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
// clang-format on

class TeleportTarget {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, std::optional<Vec2>>                    mRotation;
    ::ll::TypedStorage<4, 28, std::optional<TeleportData>>            mData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ChangeDimensionRequest>> mChangeRequest;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                    mRotation;
    ::ll::TypedStorage<4, 28, ::std::optional<::TeleportData>>            mData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChangeDimensionRequest>> mChangeRequest;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    TeleportTarget& operator=(TeleportTarget const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TeleportTarget();
#else // @header-generator platform
    MCAPI ~TeleportTarget();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
