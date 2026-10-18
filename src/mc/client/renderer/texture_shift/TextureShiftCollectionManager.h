#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture_shift/CollectionState.h"

// auto generated forward declare list
// clang-format off
namespace TextureShift { struct CollectionState; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace TextureShift {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class TextureShiftCollectionManager {};
#endif // @header-generator platform

} // namespace TextureShift
