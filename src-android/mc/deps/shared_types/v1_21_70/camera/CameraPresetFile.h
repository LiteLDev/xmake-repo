#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_70/camera/CameraPreset.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_70 {

struct CameraPresetFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mVersion;
    ::ll::TypedStorage<8, 264, ::SharedTypes::v1_21_70::CameraPreset> mPreset;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_70
