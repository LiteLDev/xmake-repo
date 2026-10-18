#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"
#include "mc/deps/renderer/hal/interface/FrameBufferObject.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderStageWithFrameBufferObject : public ::mce::RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>  mUnkafeb0d;
    ::ll::UntypedStorage<8, 104> mUnk50d734;
    ::ll::UntypedStorage<8, 104> mUnk81383b;
    ::ll::UntypedStorage<8, 8>   mUnkc3ec04;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderStageWithFrameBufferObject& operator=(RenderStageWithFrameBufferObject const&);
    RenderStageWithFrameBufferObject(RenderStageWithFrameBufferObject const&);
    RenderStageWithFrameBufferObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void preRender(::ScreenContext& screenContext) /*override*/;

    virtual void postRender(::ScreenContext& screenContext) /*override*/;

    virtual void setupStage(::ScreenContext& screenContext, bool const clearBuffer);

    virtual ~RenderStageWithFrameBufferObject() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext& screenContext);

    MCNAPI void $postRender(::ScreenContext& screenContext);

    MCNAPI void $setupStage(::ScreenContext& screenContext, bool const clearBuffer);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RenderStageWithFrameBufferObject {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
