#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/world/level/camera/camera_presets_internals/VerboseCameraList.h"

namespace CameraPresetsInternals {

struct CameraListFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                            mVersion;
    ::ll::TypedStorage<8, 48, ::CameraPresetsInternals::VerboseCameraList> mList;
    // NOLINTEND
};

} // namespace CameraPresetsInternals
