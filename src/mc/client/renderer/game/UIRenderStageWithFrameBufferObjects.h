#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RenderStage.h"
#include "mc/client/renderer/game/UIFrameBufferObjectData.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
namespace mce { class RenderContext; }
namespace mce { struct ViewportInfo; }
// clang-format on

class UIRenderStageWithFrameBufferObjects : public ::mce::RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<UIFrameBufferObjectData>> mFrameBufferObjectData;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                    mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    UIRenderStageWithFrameBufferObjects& operator=(UIRenderStageWithFrameBufferObjects const&);
    UIRenderStageWithFrameBufferObjects(UIRenderStageWithFrameBufferObjects const&);
    UIRenderStageWithFrameBufferObjects();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIRenderStageWithFrameBufferObjects();

    virtual void preRender(::ScreenContext&);

    virtual void postRender(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UIRenderStageWithFrameBufferObjects(::IClientInstance&);

    MCNAPI void initStage(::mce::RenderContext&, ::mce::ViewportInfo const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
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
#else // @header-generator platform
class UIRenderStageWithFrameBufferObjects {};
#endif // @header-generator platform
