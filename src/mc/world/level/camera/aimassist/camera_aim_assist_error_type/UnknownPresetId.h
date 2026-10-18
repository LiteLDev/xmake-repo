#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraAimAssistErrorType {

struct UnknownPresetId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mPresetId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk6e5efb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UnknownPresetId& operator=(UnknownPresetId const&);
    UnknownPresetId(UnknownPresetId const&);
    UnknownPresetId();
#endif // @header-generator platform
};

} // namespace CameraAimAssistErrorType
