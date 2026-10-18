#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/options/IAdvancedGraphicsHardwareOptions.h"

class RayTracingHardwareOptions : public ::IAdvancedGraphicsHardwareOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRayTracingHardware;
    ::ll::TypedStorage<1, 1, bool> mVibrantVisualsSupported;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RayTracingHardwareOptions();

    virtual bool isHardwareRayTracingCompatible() const;

    virtual bool isVibrantVisualsSupported() const;

    virtual bool isPlatformCompatible() const;

    virtual bool isUpscalingAvailable() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RayTracingHardwareOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isHardwareRayTracingCompatible() const;

    MCNAPI bool $isVibrantVisualsSupported() const;

    MCNAPI bool $isPlatformCompatible() const;

    MCNAPI bool $isUpscalingAvailable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RayTracingHardwareOptions {};
#endif // @header-generator platform
