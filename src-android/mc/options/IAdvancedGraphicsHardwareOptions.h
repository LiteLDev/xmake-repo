#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class IAdvancedGraphicsHardwareOptions : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAdvancedGraphicsHardwareOptions() = default;

    virtual bool isHardwareRayTracingCompatible() const = 0;

    virtual bool isVibrantVisualsSupported() const = 0;

    virtual bool isPlatformCompatible() const = 0;

    virtual bool isUpscalingAvailable() const = 0;
    // NOLINTEND
};
