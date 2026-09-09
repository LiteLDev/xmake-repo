#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/MultisampledRenderStageWithFrameBufferObject.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class MultisampledGameRenderStageWithFrameBufferObject : public ::mce::MultisampledRenderStageWithFrameBufferObject {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultisampledGameRenderStageWithFrameBufferObject();

    virtual void preRender(::ScreenContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
