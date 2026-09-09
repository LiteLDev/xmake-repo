#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder {

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

} // namespace mce::framebuilder
