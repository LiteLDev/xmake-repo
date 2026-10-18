#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/world/level/camera/camera_presets_internals/VerboseCameraList.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CameraPresetsInternals {

struct CameraListFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                            mVersion;
    ::ll::TypedStorage<8, 48, ::CameraPresetsInternals::VerboseCameraList> mList;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk136718;
    ::ll::UntypedStorage<8, 56> mUnke795b3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CameraListFile& operator=(CameraListFile const&);
    CameraListFile(CameraListFile const&);
    CameraListFile();
#endif // @header-generator platform
};

} // namespace CameraPresetsInternals
