#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class Block;
// clang-format on

namespace br::spawn {

struct EntityType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpawnCategory::Type> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>       mId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>       mId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                  mIsSummonable;
    ::ll::TypedStorage<1, 1, bool>                  mImmuneFire;
    ::ll::TypedStorage<4, 4, float>                 mHeight;
    ::ll::TypedStorage<4, 4, float>                 mWidth;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EntityType();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isBlockDangerous(::Block const&) const;

    MCNAPI ::AABB spawnAabb(float, float, float) const;
#else // @header-generator platform
    MCAPI bool isBlockDangerous(::Block const& block) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::spawn
