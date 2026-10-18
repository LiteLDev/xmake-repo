#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockType;
// clang-format on

struct TrailComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType const*> mBlockType;
    ::ll::TypedStorage<4, 12, ::Vec3>            mSpawnOffset;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initFromDefinition(::Actor const&);
#else // @header-generator platform
    MCAPI void initFromDefinition(::Actor const& actor);
#endif // @header-generator platform
    // NOLINTEND
};
