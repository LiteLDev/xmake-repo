#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct TextureSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                mTexture;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mTintMap;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mAnimated;
    ::ll::TypedStorage<4, 8, std::optional<int>>          mFrames;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mUseFaceUv;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
