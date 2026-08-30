#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceSide.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct GeometrySource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                        mGeometry;
    ::ll::TypedStorage<1, 2, std::optional<SharedTypes::persona::ArmSizeType>>                    mArmSize;
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::persona::BodySizeType>>                   mBodySize;
    ::ll::TypedStorage<4, 8, std::optional<SharedTypes::persona::PieceSide>>                      mSide;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<std::vector<std::string>, std::string>>> mZone;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                         mIsFace;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                         mTexture;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                         mTintMap;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                                 mAnimated;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                                  mFrames;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
