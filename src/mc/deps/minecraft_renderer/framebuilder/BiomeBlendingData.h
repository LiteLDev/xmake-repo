#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct BiomeBlendingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                        mBiomeBlendingTexture;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mLastUpdatePosition;
    ::ll::TypedStorage<4, 4, int>                                      mTextureDimensions;
    ::ll::TypedStorage<4, 4, int>                                      mBiomeBlendingPixelSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BiomeBlendingData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct BiomeBlendingData {};
#endif // @header-generator platform

} // namespace mce::framebuilder
