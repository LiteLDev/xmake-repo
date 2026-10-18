#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/chunks/VisibilityNode.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/world/level/ActorBlockSyncMessage.h"
#include "mc/world/level/BlockActorBlockSyncMessage.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class RenderChunkBuilder;
class RenderChunkGeometry;
class SubChunkPos;
class Vec3;
struct ActorUniqueID;
struct Bounds;
struct Tick;
namespace mce { struct BufferResourceService; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class RenderChunkShared {
public:
    // RenderChunkShared inner types declare
    // clang-format off
    struct ActorBlockSyncMessageWithVersion;
    struct BlockActorBlockSyncMessageWithVersion;
    // clang-format on

    // RenderChunkShared inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class BuildState : int {
        Building            = 0,
        NotBuldingOrSorting = 1,
    };
#else // @header-generator platform
    enum class BuildState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class VisibilityBuildState : int {
        Dirty            = 0,
        Building         = 1,
        BuildingButDirty = 2,
        Ready            = 3,
    };
#else // @header-generator platform
    enum class DataState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ActorBlockSyncMessageWithVersion {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mEntityBlockSyncMessage;
        ::ll::TypedStorage<1, 1, uchar>                    mRenderChunkGeometryVersion;
        // NOLINTEND
#else // @header-generator platform
    enum class VisibilityBuildState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        ActorBlockSyncMessageWithVersion();
    };
#else // @header-generator platform
    struct ActorBlockSyncMessageWithVersion {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct BlockActorBlockSyncMessageWithVersion {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::BlockActorBlockSyncMessage> mBlockEntityBlockSyncMessage;
        ::ll::TypedStorage<1, 1, uchar>                         mRenderChunkGeometryVersion;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockActorBlockSyncMessageWithVersion();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mEmpty;
    ::ll::TypedStorage<1, 1, bool> mSkyLit;
    ::ll::TypedStorage<1, 1, bool> mAllDark;
    ::ll::TypedStorage<1, 1, bool> mImmediateChangeRequested;
    ::ll::TypedStorage<4, 4, std::atomic<RenderChunkShared::BuildState>> mBuildState;
    ::ll::TypedStorage<4, 12, ::BlockPos> mCenter;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    ::ll::TypedStorage<4, 4, std::atomic<RenderChunkShared::VisibilityBuildState>> mVisibilityBuildState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkGeometry>> mCurrentRenderChunkGeometry;
    ::ll::TypedStorage<1, 6, ::VisibilityNode> mVisibility;
    ::ll::TypedStorage<1, 1, bool> mVisibilityMatrixChanged;
    ::ll::TypedStorage<1, 1, uchar> mVisibleCameraSet;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RenderChunkGeometry>> mBuildingRenderChunkGeometry;
    ::ll::TypedStorage<8, 24, std::vector<RenderChunkShared::ActorBlockSyncMessageWithVersion>> mEntityBlockMessageList;
    ::ll::TypedStorage<8, 24, std::vector<RenderChunkShared::BlockActorBlockSyncMessageWithVersion>> mBlockEntityBlockMessageList;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata> mRenderMetadata;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkShared& operator=(RenderChunkShared const&);
    RenderChunkShared();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RenderChunkShared(::SubChunkPos const&);

    MCNAPI std::shared_ptr<RenderChunkGeometry> acquireRenderChunkBuildingGeometry() const;

    MCNAPI std::shared_ptr<RenderChunkGeometry> acquireRenderChunkGeometry() const;

    MCNAPI bool doesRenderChunkGeometryExist() const;

    MCNAPI void endRebuild(::RenderChunkBuilder&, ::mce::BufferResourceService&, bool);

    MCNAPI std::vector<BlockActorBlockSyncMessage> getAndPruneBlockEntityBlockSyncMessages(uchar);

    MCNAPI std::vector<ActorBlockSyncMessage> getAndPruneEntityBlockSyncMessages(uchar);

    MCNAPI ::BlockPos getCenter() const;

    MCNAPI ::Bounds getDataBounds() const;

    MCNAPI ::BlockPos const& getPosition() const;

    MCNAPI ::RenderChunkGeometry* getRenderChunkGeometry() const;

    MCNAPI ::VisibilityNode const& getVisibilityNode() const;

    MCNAPI uchar getVisibleCameras() const;

    MCNAPI bool hasImmediateChange() const;

    MCNAPI bool isBuildState(::RenderChunkShared::BuildState) const;

    MCNAPI bool isDirty(::Tick, uint, uint) const;

    MCNAPI bool isEmptyVisibility() const;

    MCNAPI bool isSkyLit() const;

    MCNAPI void rebuild(
        ::RenderChunkBuilder&,
        bool,
        ::BakedBlockLightType,
        bool,
        ::mce::framebuilder::FrameLightingModelCapabilities const&
    );

    MCNAPI void rebuildVisbility(::BlockSource&);

    MCNAPI void setDirty(::Tick, bool);

    MCNAPI void setVisibleCameras(std::bitset<4> const&);

    MCNAPI void startRebuild(::RenderChunkBuilder&, ::Vec3 const&);

    MCNAPI ~RenderChunkShared();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubChunkPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct BlockActorBlockSyncMessageWithVersion {};
#endif // @header-generator platform
};
