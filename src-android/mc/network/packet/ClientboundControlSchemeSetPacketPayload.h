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
};
