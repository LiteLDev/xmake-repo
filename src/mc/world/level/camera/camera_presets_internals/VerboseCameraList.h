#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraPresetsInternals {

struct VerboseCameraList {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::UntypedStorage<8, 24>            mCameras;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk2cd4dc;
    ::ll::UntypedStorage<8, 24> mUnk342555;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VerboseCameraList& operator=(VerboseCameraList const&);
    VerboseCameraList(VerboseCameraList const&);
    VerboseCameraList();
#endif // @header-generator platform
};

} // namespace CameraPresetsInternals
