#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MinecraftCamera {

class CameraTimeOverrideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetDeltaTimeOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraTimeOverrideComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<float> getDeltaTimeOverride() const;
    // NOLINTEND
};

} // namespace MinecraftCamera
