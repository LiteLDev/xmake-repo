#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStageWithFrameBufferObject.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace mce {

class MultisampledRenderStageWithFrameBufferObject : public ::mce::RenderStageWithFrameBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RenderStageWithFrameBufferObject*> mResolveRenderStageSource;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultisampledRenderStageWithFrameBufferObject();

    virtual void preRender(::ScreenContext&);

    virtual void postRender(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultisampledRenderStageWithFrameBufferObject();
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
    MCNAPI void $preRender(::ScreenContext&);

    MCNAPI void $postRender(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
