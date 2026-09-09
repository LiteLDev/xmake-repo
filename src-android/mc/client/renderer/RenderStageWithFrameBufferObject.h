#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"
#include "mc/deps/renderer/hal/interface/FrameBufferObject.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

namespace mce {

class RenderStageWithFrameBufferObject : public ::mce::RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::mce::FrameBufferObject> mFrameBufferObject;
    ::ll::UntypedStorage<8, 128>                         mColorBufferTexture;
    ::ll::UntypedStorage<8, 128>                         mDepthBufferTexture;
    ::ll::TypedStorage<8, 8, ::mce::Texture*>            mFrameBufferTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderStageWithFrameBufferObject();

    virtual void preRender(::ScreenContext&);

    virtual void postRender(::ScreenContext&);

    virtual void setupStage(::ScreenContext&, bool const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderStageWithFrameBufferObject();
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

    MCNAPI void $setupStage(::ScreenContext&, bool const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
