#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SerializedAbilitiesData.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
struct ActorUniqueID;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct UpdateAbilitiesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SerializedAbilitiesData> mData;
    // NOLINTEND
};
