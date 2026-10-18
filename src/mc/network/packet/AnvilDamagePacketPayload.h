#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct AnvilDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AnvilDamagePacketPayload(::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
