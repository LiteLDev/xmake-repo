#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ScreenContext;
struct FrameRenderObject;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ScreenContext;
struct FrameRenderObject;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk55f6f2;
    ::ll::UntypedStorage<4, 4>  mUnk77539e;
    ::ll::UntypedStorage<1, 1>  mUnk29f6ab;
    ::ll::UntypedStorage<1, 1>  mUnk7e2334;
    ::ll::UntypedStorage<1, 1>  mUnkc7b0fb;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderStage& operator=(RenderStage const&);
    RenderStage(RenderStage const&);
    RenderStage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderStage();

    virtual void preRenderUpdate(::ScreenContext& screenContext);

    virtual void postRenderUpdate(::ScreenContext& screenContext);

    virtual void preRender(::ScreenContext& screenContext) = 0;

    virtual void prepareFrame(::ScreenContext& screenContext);

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    virtual void postRender(::ScreenContext& screenContext);

    virtual bool shouldSkip() const;

    virtual bool shouldRender() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void $postRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void $prepareFrame(::ScreenContext& screenContext);

    MCNAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI void $postRender(::ScreenContext& screenContext);

    MCNAPI bool $shouldSkip() const;

    MCNAPI bool $shouldRender() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RenderStage {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
