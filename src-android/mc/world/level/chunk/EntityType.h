#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
// clang-format on

namespace br::spawn {

struct EntityType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpawnCategory::Type> mType;
    ::ll::TypedStorage<8, 40, ::HashedString>       mId;
    ::ll::TypedStorage<1, 1, bool>                  mIsSummonable;
    ::ll::TypedStorage<1, 1, bool>                  mImmuneFire;
    ::ll::TypedStorage<4, 4, float>                 mHeight;
    ::ll::TypedStorage<4, 4, float>                 mWidth;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isBlockDangerous(::Block const&) const;

    MCNAPI ::AABB spawnAabb(float, float, float) const;
    // NOLINTEND
};

} // namespace br::spawn
