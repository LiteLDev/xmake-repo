#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ScreenContext;
struct FrameRenderObject;
// clang-format on

namespace mce {

class RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<AbstractScene*, SubClientId>>> mAbstractScreens;
    ::ll::TypedStorage<8, 8, ::EyeRenderingModeBit>                                mEyeRenderingModeBits;
    ::ll::TypedStorage<1, 1, bool>                                                 mStageWasUsed;
    ::ll::TypedStorage<1, 1, bool>                                                 mStageWasAddedToCompositor;
    ::ll::TypedStorage<1, 1, bool>                                                 mAlwaysRender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderStage();

    virtual void preRenderUpdate(::ScreenContext&);

    virtual void postRenderUpdate(::ScreenContext&);

    virtual void preRender(::ScreenContext&) = 0;

    virtual void prepareFrame(::ScreenContext&);

    virtual void render(::ScreenContext&, ::FrameRenderObject const&);

    virtual void postRender(::ScreenContext&);

    virtual bool shouldSkip() const;

    virtual bool shouldRender() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderStage();
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
    MCNAPI void $preRenderUpdate(::ScreenContext&);

    MCNAPI void $postRenderUpdate(::ScreenContext&);

    MCNAPI void $prepareFrame(::ScreenContext&);

    MCNAPI void $render(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI void $postRender(::ScreenContext&);

    MCNAPI bool $shouldSkip() const;

    MCNAPI bool $shouldRender() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
