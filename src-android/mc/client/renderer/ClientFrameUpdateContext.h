#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/FrameUpdateContext.h"

class ClientFrameUpdateContext : public ::FrameUpdateContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAlpha;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientFrameUpdateContext& operator=(ClientFrameUpdateContext const&);
    ClientFrameUpdateContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientFrameUpdateContext(::FrameUpdateContext&, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FrameUpdateContext&, float const);
    // NOLINTEND
};
