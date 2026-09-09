#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct AnimationSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mAnimationFile;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
