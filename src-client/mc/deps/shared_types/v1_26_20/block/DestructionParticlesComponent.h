#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/TintMethod.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DestructionParticlesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mTexture;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::TintMethod> mTintMethod;
    ::ll::TypedStorage<1, 1, uchar>                               mParticleCount;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
