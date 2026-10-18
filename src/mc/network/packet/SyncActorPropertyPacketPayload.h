#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
class PropertyGroupManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct SyncActorPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mPropertyData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag> mPropertyData;
#endif // @header-generator platform
    // NOLINTEND
};
