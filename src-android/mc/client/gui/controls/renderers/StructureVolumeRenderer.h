#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/renderer/chunks/RenderChunkSorter.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSourceListener.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseActorRenderContext;
class Block;
class BlockSource;
class IClientInstance;
class IRenderChunkGarbage;
class IVanillaRenderBlockActorComponent;
class Matrix;
class MinecraftUIRenderContext;
class RenderChunkBuilder;
class RenderChunkInstanced;
class RenderChunkSorterSharedInfo;
class ScreenContext;
class Tessellator;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
struct ActorBlockSyncMessage;
struct OffscreenCaptureDescription;
namespace ClientBlockPipeline { class TessellatorContext; }
namespace mce::StructureVolumeOffscreenUtils { struct StructureVolumeCaptureRequestInfo; }
// clang-format on

class StructureVolumeRenderer : public ::MinecraftUICustomRenderer,
                                public ::BlockSourceListener,
                                public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mInitialize;
    ::ll::TypedStorage<1, 1, bool> mListenerInitialized;
    ::ll::TypedStorage<1, 1, bool> mRendered;
    ::ll::TypedStorage<4, 8, ::Vec2> mRotation;
    ::ll::TypedStorage<4, 24, ::AABB> mLastArea;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IRenderChunkGarbage>> mGarbage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RenderChunkBuilder>> mChunkBuilder;
    ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, std::unique_ptr<RenderChunkInstanced>>> mRenderChunkInstances;
    ::ll::TypedStorage<8, 8, ::Tick> mRenderTick;
    ::ll::TypedStorage<4, 8, ::Vec2> mLastSortRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mSortingCameraPos;
    ::ll::TypedStorage<1, 1, bool> mResort;
    ::ll::TypedStorage<8, 8, ::BlockSource*> mUnsafeSourcePointer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkSorterSharedInfo>> mSharedSortInfo;
    ::ll::TypedStorage<8, 448, ::RenderChunkSorter> mChunkSorter;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mAxesMaterial;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StructureVolumeRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    virtual void onSourceDestroyed(::BlockSource&);

    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    virtual void onAppResumed();

    virtual void onAppSuspended();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureVolumeRenderer();

    MCNAPI float _getAndResetFloatValue(::UIPropertyBag&, std::string const&) const;

    MCNAPI void _render(
        ::MinecraftUIRenderContext&,
        ::BlockSource&,
        ::IClientInstance&,
        ::UIControl&,
        int,
        ::OffscreenCaptureDescription const&,
        std::optional<mce::StructureVolumeOffscreenUtils::StructureVolumeCaptureRequestInfo>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<BlockPos> _generateChunkStartPositions(::AABB const&);

    MCNAPI static void _iterateOverBlockEntities(
        ::BlockSource&,
        ::AABB const&,
        std::function<void(IVanillaRenderBlockActorComponent&)> const&
    );
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
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);

    MCNAPI void $onSourceDestroyed(::BlockSource&);

    MCNAPI void $onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
    );

    MCNAPI void $onAppResumed();

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
