#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class PropertyGroupManager;
// clang-format on

struct SyncActorPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CompoundTag> mPropertyData;
    // NOLINTEND
};
