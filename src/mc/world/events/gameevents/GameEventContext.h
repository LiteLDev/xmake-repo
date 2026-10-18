#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
// clang-format on

struct GameEventContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3 const>        mOriginPos;
    ::ll::TypedStorage<8, 8, ::Actor* const>       mSource;
    ::ll::TypedStorage<8, 8, ::Block const* const> mAffectedBlock;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GameEventContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameEventContext(::Vec3 const&, ::Actor*, ::Block const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, ::Actor*, ::Block const*);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
