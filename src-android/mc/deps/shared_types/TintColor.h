#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_40::PersonaPieceMetaDef {

struct TintColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRColor;
    ::ll::TypedStorage<8, 24, std::string> mGColor;
    ::ll::TypedStorage<8, 24, std::string> mBColor;
    ::ll::TypedStorage<8, 24, std::string> mAColor;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40::PersonaPieceMetaDef
