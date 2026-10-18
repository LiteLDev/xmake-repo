#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct CameraAimAssistCategoryUpdaterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mItemHeldPrevName;
    ::ll::TypedStorage<8, 40, ::HashedString> mCurrentCategoryId;
    ::ll::TypedStorage<1, 1, bool>            mCurrentItemTargetingLiquid;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoryUpdaterComponent& operator=(CameraAimAssistCategoryUpdaterComponent const&);
};
#else // @header-generator platform
struct CameraAimAssistCategoryUpdaterComponent {};
#endif // @header-generator platform
