#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenContext.h"
#include "mc/client/renderer/MinecraftGraphicsPipeline.h"
#include "mc/client/renderer/RenderGraph.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/core/timing/Clock.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class CommandListQueue;
class Dimension;
class FrameAnomalyDetector;
class FrameTimingDisplay;
class IClientInstance;
class IRenderChunkGarbageCollection;
class InsideCubeRenderer;
class Level;
class LevelRenderer;
class MinecraftGraphics;
class PlayerRenderView;
class Tessellator;
class TickingTextureStage;
class WhiskerDisplay;
struct FrameRenderObject;
namespace mce { class Color; }
namespace mce { class RenderContext; }
namespace mce { class RenderStage; }
// clang-format on

class GameRenderer {
public:
    // GameRenderer inner types declare
    // clang-format off
    struct Overlays;
    // clang-format on

    // GameRenderer inner types define
    enum class FrameCaptureMode : int {
        Screenshot = 0,
        Panorama   = 1,
    };

    struct Overlays {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<WhiskerDisplay>>     mWhiskerDisplay;
        ::ll::TypedStorage<8, 8, std::unique_ptr<FrameTimingDisplay>> mFrameTimingDisplay;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Overlays();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using FrameObjectPtr = std::unique_ptr<FrameRenderObject, std::function<void(FrameRenderObject*)>>;

    using PauseStateChangeConnector = ::Bedrock::PubSub::Connector<void(bool)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                             mFrameObject_NoAccessOutsideRender;
    ::ll::UntypedStorage<8, 16>                                             mLinearAllocator;
    ::ll::UntypedStorage<8, 256>                                            mMinecraftGraphicsPipeline;
    ::ll::TypedStorage<8, 8, ::MinecraftGraphics&>                          mMinecraftGraphics;
    ::ll::UntypedStorage<8, 24>                                             mClient;
    ::ll::UntypedStorage<8, 24>                                             mPrimaryClient;
    ::ll::UntypedStorage<8, 24>                                             mFrameAnomalyDetector;
    ::ll::TypedStorage<8, 16, ::GameRenderer::Overlays>                     mOverlays;
    ::ll::TypedStorage<8, 64, ::mce::RenderGraph>                           mRenderGraph;
    ::ll::TypedStorage<4, 24, ::mce::Clock>                                 mClock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Tessellator>>                  mTessellator;
    ::ll::TypedStorage<8, 8, ::TickingTextureStage*>                        mTickingTextureStage;
    ::ll::TypedStorage<4, 4, float>                                         mLastClockTime;
    ::ll::TypedStorage<1, 1, bool>                                          mFlushedInitCommandList;
    ::ll::TypedStorage<4, 4, int>                                           _tick;
    ::ll::TypedStorage<2, 2, short>                                         mPointerX;
    ::ll::TypedStorage<2, 2, short>                                         mPointerY;
    ::ll::TypedStorage<1, 1, bool>                                          mUseLowFrequencyUIRender;
    ::ll::TypedStorage<4, 8, std::optional<GameRenderer::FrameCaptureMode>> mFrameCaptureMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<InsideCubeRenderer>>           mInsideCubeRenderer;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mLastFrameTime;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<PlayerRenderView>>>             mPlayerViews;
    ::ll::UntypedStorage<8, 8>                                                            mDirectOutputStage;
    ::ll::UntypedStorage<8, 8>                                                            mCommandListQueue;
    ::ll::TypedStorage<8, 280, std::optional<ScreenContext>>                              mCurrentFrameScreenContext;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                   mLastLevelViewMatrix;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                   mLastLevelViewMatrixAbsolute;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                   mLastLevelProjMatrix;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                   mLastLevelWorldMatrix;
    ::ll::TypedStorage<4, 64, ::Matrix>                                                   mCubemapWorldMatrix;
    ::ll::TypedStorage<1, 1, bool>                                                        mCubemapRotationPaused;
    ::ll::TypedStorage<8, 8, double>                                                      mCubemapRotationSeconds;
    ::ll::TypedStorage<1, 1, bool>                                                        mHasCustomSoftwareCursor;
    ::ll::UntypedStorage<8, 24>                                                           mCustomSoftwareCursorAsset;
    ::ll::TypedStorage<8, 24, std::string>                                                mExperimentsString;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRenderChunkGarbageCollection>>              mGarbageCollection;
    ::ll::UntypedStorage<8, 24>                                                           mPauseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    GameRenderer& operator=(GameRenderer const&);
    GameRenderer(GameRenderer const&);
    GameRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameRenderer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameRenderer(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::MinecraftGraphics&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&
    );

    MCNAPI void _checkAndDrawInputUI(::ScreenContext&);

    MCNAPI void createRenderGraph(::mce::RenderContext&, bool);

    MCNAPI void endFrame(::mce::RenderContext&);

    MCNAPI ::Matrix const& getCubemapWorldMat() const;

    MCNAPI ::Matrix const& getLastLevelProjSpace() const;

    MCNAPI ::Matrix const& getLastLevelViewSpace() const;

    MCNAPI ::Tessellator& getTessellator();

    MCNAPI ::ScreenContext makeScreenContext(float const);

    MCNAPI void onAppSuspended();

    MCNAPI void onSubClientRemoved(::IClientInstance const&);

    MCNAPI void recreateTickingTextureStage();

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>&);

    MCNAPI void renderCurrentFrame(float);

    MCNAPI void renderDebugScreen(::ScreenContext&, ::IClientInstance&);

    MCNAPI void setCapturingFrame(std::optional<GameRenderer::FrameCaptureMode>);

    MCNAPI void setClient(::IClientInstance&);

    MCNAPI void setCommandListQueue(::CommandListQueue&);

    MCNAPI void setCubemapRotationPaused(bool);

    MCNAPI void setLastLevelProjSpace(::Matrix const&);

    MCNAPI void setLastLevelViewSpace(::Matrix const&);

    MCNAPI void setLastLevelViewSpaceAbsolute(::Matrix const&);

    MCNAPI void setLastLevelWorldSpace(::Matrix const&);

    MCNAPI void setLevel(::Level*, ::Dimension*);

    MCNAPI void setLowFrequencyUIRender(bool);

    MCNAPI void tick();

    MCNAPI bool useLowFrequencyUIRender() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearRenderTarget(::ScreenContext&);

    MCNAPI static void setClearColor(::IClientInstance&, ::ScreenContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color& mClearColor();

    MCNAPI static bool& mSplitScreenActive();

    MCNAPI static std::string& mVersionString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&,
        ::MinecraftGraphics&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<FrameAnomalyDetector>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
