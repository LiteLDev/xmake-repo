#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture_shift/CollectionState.h"

// auto generated forward declare list
// clang-format off
namespace TextureShift { struct CollectionState; }
// clang-format on

namespace TextureShift {

class TextureShiftCollectionManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, float> mLastUpdateTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<std::map<std::string, TextureShift::CollectionState>>>> mCollectionStates;
    // clang-format on
    // NOLINTEND
};

} // namespace TextureShift
