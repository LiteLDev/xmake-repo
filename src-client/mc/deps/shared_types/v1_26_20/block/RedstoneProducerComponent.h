#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/Facing.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct RedstoneProducerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                              mPower;
    ::ll::TypedStorage<2, 4, std::optional<SharedTypes::Facing>> mStronglyPoweredFace;
    ::ll::UntypedStorage<1, 1>                                   mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                               mIsTransformRelative;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
