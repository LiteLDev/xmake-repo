#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

struct ClientboundControlSchemeSetPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ControlScheme::Scheme> mControlScheme;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientboundControlSchemeSetPacketPayload(::ControlScheme::Scheme);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ControlScheme::Scheme);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
