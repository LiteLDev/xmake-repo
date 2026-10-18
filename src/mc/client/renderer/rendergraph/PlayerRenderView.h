#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/APIResourcePool.h"
#include "mc/client/renderer/rendergraph/RenderOrder.h"
#include "mc/client/renderer/rendergraph/modules/PostprocessRenderModule.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

// auto generated forward declare list
// clang-format off
class LevelRendererPlayer;
class ScreenContext;
struct RenderPassContext;
struct ViewRenderObject;
namespace mce { class RenderStage; }
namespace rendergraph { class DeclarationInterface; }
namespace rendergraph { class RenderContext; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PlayerRenderView {
public:
    // PlayerRenderView inner types declare
    // clang-format off
    struct LegacyPlayerRenderPass;
    struct PostInitInfo;
    // clang-format on

    // PlayerRenderView inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct LegacyPlayerRenderPass {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mModule;
        // NOLINTEND
    };
#else // @header-generator platform
    struct LegacyPlayerRenderPass {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PostInitInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mInitialized;
        ::ll::TypedStorage<1, 1, bool> mNeedResolveBeforePostProcess;
        ::ll::TypedStorage<1, 1, bool> mRequiresBackingTextures;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::rendergraph::APIResourcePool> mAPIResourcePool;
    ::ll::TypedStorage<8, 224, ::rendergraph::RenderOrder>     mPlayerRenderOrder;
    ::ll::TypedStorage<8, 8, ::LevelRendererPlayer&>           mPlayerView;
    ::ll::UntypedStorage<8, 8>                                 mLegacyPassRuntimeData;
    ::ll::TypedStorage<1, 3, ::PlayerRenderView::PostInitInfo> mPostInitInfo;
    ::ll::UntypedStorage<8, 128>                               mGameplayColorBackingTexture;
    ::ll::UntypedStorage<8, 128>                               mGameplayDepthBackingTexture;
    ::ll::UntypedStorage<8, 128>                               mResolvedColorTexture;
    ::ll::UntypedStorage<8, 128>                               mResolvedDepthTexture;
    ::ll::TypedStorage<1, 1, ::PostprocessRenderModule>        mPostprocessing;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRenderView& operator=(PlayerRenderView const&);
    PlayerRenderView(PlayerRenderView const&);
    PlayerRenderView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerRenderView(::LevelRendererPlayer&);

    MCNAPI ::ViewRenderObject createViewRenderObject(::ScreenContext&);

    MCNAPI void executeRenderOrder(::rendergraph::RenderContext&);

    MCNAPI void setupRenderOrderPiggybackingExistingRenderStages(::RenderPassContext&, ::mce::RenderStage&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelRendererPlayer&);
    // NOLINTEND
#else // @header-generator platform
    struct PostInitInfo {};
#endif // @header-generator platform
};
