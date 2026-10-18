#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistErrorType {

struct UnknownCategoryId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCategoryId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf5be2d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UnknownCategoryId& operator=(UnknownCategoryId const&);
    UnknownCategoryId(UnknownCategoryId const&);
    UnknownCategoryId();
#endif // @header-generator platform
};

} // namespace CameraAimAssistErrorType
