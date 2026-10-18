#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/chunk/ChunkDebugDisplaySavedState.h"
#include "mc/world/level/chunk/ChunkState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderer;
class BaseActorRenderContext;
class Block;
class BlockActor;
class BlockPos;
class ChunkPos;
class Font;
class SpinLockImpl;
class Tessellator;
class Vec2;
class Vec3;
struct DimensionType;
struct NameTagRenderObject;
struct VoxelShapeDebugSettings;
namespace mce { class Color; }
// clang-format on

class DebugRenderer {
public:
    // DebugRenderer inner types define
    using ChunkDimensionMap = std::unordered_map<
        DimensionType,
        std::shared_ptr<std::unordered_map<ChunkPos, std::pair<ChunkState, ChunkDebugDisplaySavedState>>>>;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebugRenderer();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<NameTagRenderObject> extractText(::Font&, ::Tessellator&, std::shared_ptr<ActorRenderer>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& sCaptureServerChunkData();

    MCNAPI static ::Block const*& sDebugBlock();

    MCNAPI static ::BlockActor*& sDebugBlockEntity();

    MCNAPI static ::BlockPos& sDebugBlockPos();

    MCNAPI static ::Actor*& sDebugEntity();

    MCNAPI static ::DebugRenderer*& sInstance();

    MCNAPI static std::unordered_map<
        DimensionType,
        std::shared_ptr<std::unordered_map<ChunkPos, std::pair<ChunkState, ChunkDebugDisplaySavedState>>>>&
    sServerChunkMaps();

    MCNAPI static ::SpinLockImpl& sServerChunkMapsLock();

    MCNAPI static std::unique_ptr<VoxelShapeDebugSettings>& sVoxelShapeDebugSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class DebugRenderer {};
#endif // @header-generator platform
