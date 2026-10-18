#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct PlayerInputTick {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlayerInputTick();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerInputTick(ulong);

    MCNAPI explicit PlayerInputTick(::EntityContext const&);

    MCNAPI explicit operator ulong() const;
#else // @header-generator platform
    MCAPI explicit PlayerInputTick(::EntityContext const& entity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(ulong);

    MCNAPI void* $ctor(::EntityContext const&);
#else // @header-generator platform
    MCAPI void* $ctor(::EntityContext const& entity);
#endif // @header-generator platform
    // NOLINTEND
};
