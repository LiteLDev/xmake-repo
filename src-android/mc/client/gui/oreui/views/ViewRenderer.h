#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/deps/renderer/hal/TextureDescription.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
class ScreenContext;
namespace OreUI { class FramesToPaintQueue; }
namespace OreUI { class LayoutScheduler; }
namespace cohtml { class ViewRenderer; }
// clang-format on

namespace OreUI {

class ViewRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::FramesToPaintQueue&> mFramesToPaint;
    ::ll::UntypedStorage<4, 4>                             mViewId;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>          mBlitMaterial;
    ::ll::TypedStorage<1, 1, bool>                         mTextureIsCreated;
    ::ll::UntypedStorage<8, 128>                           mTexture;
    ::ll::UntypedStorage<8, 128>                           mDSTexture;
    ::ll::UntypedStorage<1, 24>                            mRenderDragonTexture;
    ::ll::UntypedStorage<1, 24>                            mRenderDragonDSTexture;
    ::ll::TypedStorage<8, 80, ::mce::TextureDescription>   mTextureDescription;
    ::ll::TypedStorage<8, 8, ::cohtml::ViewRenderer*>      mViewRenderer;
    ::ll::TypedStorage<8, 8, ::OreUI::LayoutScheduler&>    mLayoutScheduler;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewRenderer& operator=(ViewRenderer const&);
    ViewRenderer(ViewRenderer const&);
    ViewRenderer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createGamefaceTexture(::ScreenContext&);

    MCNAPI ~ViewRenderer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
