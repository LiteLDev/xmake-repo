#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "android/native_window.h"
#include "mc/deps/core/memory/CpuRingBufferAllocator.h"
#include "mc/external/bgfx/FrameBufferHandle.h"
#include "mc/external/bgfx/Resolution.h"
#include "mc/external/render_dragon/frame_graph/BackBufferColor.h"
#include "mc/external/render_dragon/frame_graph/BackBufferDepth.h"
#include "mc/external/render_dragon/frame_graph/Declarator.h"
#include "mc/external/render_dragon/frame_renderer/BgfxEncoderPool.h"
#include "mc/external/render_dragon/frame_renderer/ShaderSDKParameters.h"
#include "mc/external/render_dragon/mesh/Mesh.h"
#include "mc/external/render_dragon/platform/AndroidSurfaceParameters.h"
#include "mc/external/render_dragon/platform/DebugModeFlags.h"
#include "mc/external/render_dragon/platform/RenderAPI.h"
#include "mc/external/render_dragon/platform/VerticalSync.h"
#include "mc/external/render_dragon/rendering/ClipSpaceDepthMode.h"
#include "mc/external/render_dragon/rendering/ClipSpaceOrigin.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/tasks/GraphicsTasks.h"
#include "mc/external/render_dragon/texture_streaming/TextureStreamingConfiguration.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace bgfx { struct CallbackI; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon::frameobject { struct IntraFrameAllocatorContainer; }
namespace dragon::frameobject::components { struct MeshFilter; }
namespace dragon::framerenderer { class RenderContext; }
namespace dragon::framerenderer::details { class BgfxAccelerationStructurePoolImplementation; }
namespace dragon::framerenderer::details { class BgfxBufferPoolImplementation; }
namespace dragon::framerenderer::details { class BgfxFrameBufferCacheImplementation; }
namespace dragon::framerenderer::details { class BgfxTexture2DPoolImplementation; }
namespace dragon::framerenderer::details { template<typename T0> class MapPool; }
namespace dragon::framerenderer::details { template<typename T0> class MultiMapPool; }
namespace dragon::framerenderer::details { template<typename T0> class VectorPool; }
namespace dragon::platform { class ResourcesManager; }
namespace dragon::platform { struct Statistics; }
namespace dragon::res { class DragonFrameResources; }
namespace dragon::tasks { class GraphicsTasks; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::platform {

class BgfxContext {
public:
    // BgfxContext inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class LocalResources;
#else // @header-generator platform
#endif // @header-generator platform
    struct DeviceLostInfo;
#if defined(LL_PLAT_A) // @header-generator platform
    struct RegisteredWindow;
    struct InitBgfx;
    struct InitShaderSDK;
    struct InitLoadCallback;
    struct InitTextureStreaming;
    struct InitEnd;
#else // @header-generator platform
#endif // @header-generator platform
    struct InitBegin;
#if defined(LL_PLAT_A) // @header-generator platform
    struct InitPending;
#else // @header-generator platform
    struct InitBgfx;
    struct InitEnd;
#endif // @header-generator platform
    struct InitFinalize;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct InitLoadCallback;
    struct InitPending;
    struct InitShaderSDK;
    struct InitTextureStreaming;
    class LocalResources;
    struct RegisteredWindow;
#endif // @header-generator platform
    // clang-format on

    // BgfxContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    class LocalResources {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::platform::ResourcesManager&> mResourceManager;
        ::ll::TypedStorage<8, 88, ::dragon::mesh::Mesh>                 mScreenQuad;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalResources& operator=(LocalResources const&);
        LocalResources(LocalResources const&);
        LocalResources();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dragon::frameobject::components::MeshFilter
        getScreenQuadFilter(::dragon::frameobject::IntraFrameAllocatorContainer&) const;

        MCNAPI void prepare(::dragon::rendering::ClipSpaceOrigin const);
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct DeviceLostInfo {};

#if defined(LL_PLAT_A) // @header-generator platform
    struct RegisteredWindow {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mViewId;
        ::ll::UntypedStorage<8, 16>      mColor;
        ::ll::UntypedStorage<8, 16>      mDepth;
        ::ll::TypedStorage<4, 4, int>    mWidth;
        ::ll::TypedStorage<4, 4, int>    mHeight;
        // NOLINTEND
#else // @header-generator platform
    struct InitBegin {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        RegisteredWindow& operator=(RegisteredWindow const&);
        RegisteredWindow();
    };

    struct InitBgfx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate>>
                                                                             mSurfaceParams;
        ::ll::TypedStorage<1, 2, std::optional<dragon::platform::RenderAPI>> mPreferredRenderApi;
        ::ll::TypedStorage<4, 8, ::glm::vec<2, uint, (glm::qualifier)0>>     mResolution;
        ::ll::UntypedStorage<1, 12>                                          mDebugConfig;
        ::ll::UntypedStorage<8, 64>                                          mDebugLayerOutputCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitBgfx& operator=(InitBgfx const&);
        InitBgfx();
    };

    struct InitShaderSDK {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::optional<dragon::framerenderer::ShaderSDKParameters>> mShaderSDKParameters;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitShaderSDK& operator=(InitShaderSDK const&);
        InitShaderSDK();
    };

    struct InitLoadCallback {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mTextureLoadCallback;
        ::ll::UntypedStorage<8, 48> mMaterialLoadCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitLoadCallback& operator=(InitLoadCallback const&);
        InitLoadCallback();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InitLoadCallback();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct InitTextureStreaming {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 160, ::dragon::texturestreaming::TextureStreamingConfiguration> mTextureStreamingConfig;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitTextureStreaming& operator=(InitTextureStreaming const&);
        InitTextureStreaming();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InitTextureStreaming();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
    struct InitBgfx {};
#endif // @header-generator platform

    struct InitEnd {};

#if defined(LL_PLAT_A) // @header-generator platform
    struct InitBegin : public ::dragon::platform::BgfxContext::InitBgfx,
                       public ::dragon::platform::BgfxContext::InitShaderSDK,
                       public ::dragon::platform::BgfxContext::InitLoadCallback,
                       public ::dragon::platform::BgfxContext::InitTextureStreaming {
    public:
        // prevent constructor by default
        InitBegin& operator=(InitBegin const&);
        InitBegin();
#else // @header-generator platform
    struct InitFinalize {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI InitBegin(::dragon::platform::BgfxContext::InitBegin&&);
#else // @header-generator platform
    struct InitLoadCallback {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::dragon::platform::BgfxContext::InitBegin& operator=(::dragon::platform::BgfxContext::InitBegin&&);
#else // @header-generator platform
    struct InitPending {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~InitBegin();
        // NOLINTEND
#else // @header-generator platform
    struct InitShaderSDK {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dragon::platform::BgfxContext::InitBegin&&);
        // NOLINTEND
#else // @header-generator platform
    struct InitTextureStreaming {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };
#else // @header-generator platform
    class LocalResources {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct InitPending : public ::dragon::platform::BgfxContext::InitShaderSDK,
                         public ::dragon::platform::BgfxContext::InitLoadCallback,
                         public ::dragon::platform::BgfxContext::InitTextureStreaming {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 80> mInitializationState;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitPending& operator=(InitPending const&);
        InitPending();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI InitPending(::dragon::platform::BgfxContext::InitPending&&);

        MCNAPI ::dragon::platform::BgfxContext::InitPending& operator=(::dragon::platform::BgfxContext::InitPending&&);

        MCNAPI ~InitPending();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dragon::platform::BgfxContext::InitPending&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct InitFinalize : public ::dragon::platform::BgfxContext::InitShaderSDK,
                          public ::dragon::platform::BgfxContext::InitLoadCallback,
                          public ::dragon::platform::BgfxContext::InitTextureStreaming {
    public:
        // prevent constructor by default
        InitFinalize& operator=(InitFinalize const&);
        InitFinalize();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI InitFinalize(::dragon::platform::BgfxContext::InitFinalize&&);

        MCNAPI ::dragon::platform::BgfxContext::InitFinalize&
        operator=(::dragon::platform::BgfxContext::InitFinalize&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dragon::platform::BgfxContext::InitFinalize&&);
        // NOLINTEND
    };

    using InitializationState = std::variant<
        dragon::platform::BgfxContext::InitBegin,
        dragon::platform::BgfxContext::InitPending,
        dragon::platform::BgfxContext::InitFinalize,
        dragon::platform::BgfxContext::InitEnd>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<bgfx::CallbackI>> mBgfxCallbacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::platform::BgfxContext::LocalResources>> mLocalResources;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::platform::ResourcesManager>> mResourcesManager;
    ::ll::TypedStorage<8, 8, ::dragon::tasks::GraphicsTasks&> mGraphicsTasks;
    ::ll::TypedStorage<4, 12, ::bgfx::Resolution> mBackBufferParams;
    ::ll::TypedStorage<1, 2, std::optional<dragon::platform::BgfxContext::DeviceLostInfo>> mDeviceLostInfo;
    ::ll::UntypedStorage<8, 8> mTexturePool;
    ::ll::UntypedStorage<8, 8> mBufferPool;
    ::ll::UntypedStorage<8, 8> mFramebufferCache;
    ::ll::UntypedStorage<8, 8> mAccelerationStructurePool;
    ::ll::TypedStorage<8, 16, ::dragon::framerenderer::BgfxEncoderPool> mEncoders;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<bgfx::FrameBufferHandle, dragon::platform::BgfxContext::RegisteredWindow>>> mWindows;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    BgfxContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BgfxContext(
        std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&,
        ::glm::vec<2, uint, (glm::qualifier)0> const&,
        ::dragon::tasks::GraphicsTasks&,
        std::optional<std::variant<
            dragon::platform::BgfxContext::InitBegin,
            dragon::platform::BgfxContext::InitPending,
            dragon::platform::BgfxContext::InitFinalize,
            dragon::platform::BgfxContext::InitEnd>>&,
        uchar const,
        ::dragon::texturestreaming::TextureStreamingConfiguration,
        std::optional<dragon::framerenderer::ShaderSDKParameters>,
        std::optional<std::function<void(const char*)>>,
        std::optional<dragon::platform::RenderAPI>,
        std::function<
            mce::ServerResourcePointer<dragon::ResolvedTextureResource>(const std::string&, const std::string&)> const&,
        std::function<bool(const std::string&, std::string&)> const&
    );

    MCNAPI void beginFrame();

    MCNAPI std::optional<std::variant<
        dragon::platform::BgfxContext::InitBegin,
        dragon::platform::BgfxContext::InitPending,
        dragon::platform::BgfxContext::InitFinalize,
        dragon::platform::BgfxContext::InitEnd>>
           continueInit(
            std::variant<
                   dragon::platform::BgfxContext::InitBegin,
                   dragon::platform::BgfxContext::InitPending,
                   dragon::platform::BgfxContext::InitFinalize,
                   dragon::platform::BgfxContext::InitEnd>
        );

    MCNAPI void enableDynamicTextureHandles();

    MCNAPI void endFrame(
        ::dragon::res::DragonFrameResources&,
        ::dragon::framegraph::Declarator<dragon::framerenderer::RenderContext>&,
        ::Core::CpuRingBufferAllocator<uchar, 2, false, Core::CheckedRingBuffer<2, false>>&,
        std::vector<HashedString>&&
    );

    MCNAPI void ensureResources();

    MCNAPI ::dragon::rendering::ClipSpaceDepthMode getClipSpaceDepthMode() const;

    MCNAPI ::dragon::rendering::ClipSpaceOrigin getClipSpaceOrigin() const;

    MCNAPI ::dragon::platform::BgfxContext::RegisteredWindow& getWindow(ushort const);

    MCNAPI bool isContextLost() const;

    MCNAPI bool isFramePacingEnabled() const;

    MCNAPI bool isSuspended() const;

    MCNAPI void registerWindowHandle(
        std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&,
        ushort const,
        int,
        int
    );

    MCNAPI void resume();

    MCNAPI void suspend();

    MCNAPI void unregisterWindowHandle(ushort const);

    MCNAPI void updateFramePacing(bool);

    MCNAPI bool updateMsaaLevel(uchar const);

    MCNAPI void updateResolution(uint const, uint const);

    MCNAPI void updateSurfaceParameters(std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&);

    MCNAPI void updateTargetFramerateIfChanged(int);

    MCNAPI void updateVSync(::dragon::platform::VerticalSync);

    MCNAPI ~BgfxContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<dragon::platform::Statistics> getStatistics();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::variant<AndroidSurfaceParameters, ANativeWindow*, std::monostate> const&,
        ::glm::vec<2, uint, (glm::qualifier)0> const&,
        ::dragon::tasks::GraphicsTasks&,
        std::optional<std::variant<
            dragon::platform::BgfxContext::InitBegin,
            dragon::platform::BgfxContext::InitPending,
            dragon::platform::BgfxContext::InitFinalize,
            dragon::platform::BgfxContext::InitEnd>>&,
        uchar const,
        ::dragon::texturestreaming::TextureStreamingConfiguration,
        std::optional<dragon::framerenderer::ShaderSDKParameters>,
        std::optional<std::function<void(const char*)>>,
        std::optional<dragon::platform::RenderAPI>,
        std::function<
            mce::ServerResourcePointer<dragon::ResolvedTextureResource>(const std::string&, const std::string&)> const&,
        std::function<bool(const std::string&, std::string&)> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct RegisteredWindow {};
#endif // @header-generator platform
};

} // namespace dragon::platform
