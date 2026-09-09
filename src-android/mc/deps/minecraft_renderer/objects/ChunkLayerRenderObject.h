#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
// clang-format on

struct ChunkLayerRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                     mChunkIdx;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mMaterial;
    ::ll::TypedStorage<4, 4, uint>                      mIndicesStart;
    ::ll::TypedStorage<4, 4, uint>                      mIndicesCount;
    ::ll::TypedStorage<4, 4, uint>                      mUnsortedIndicesStart;
    ::ll::TypedStorage<4, 4, uint>                      mUnsortedIndicesCount;
    ::ll::TypedStorage<4, 4, uint>                      mVisibleCameraMask;
    ::ll::TypedStorage<1, 1, bool>                      mShouldFallBackToUnsorted;
    ::ll::TypedStorage<1, 1, ::TerrainLayerLOD>         mTerrainLayerLOD;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLayerRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ChunkLayerRenderObject(::mce::MaterialPtr const&, ulong, uint, uint, uint, uint, uint, bool, ::TerrainLayerLOD);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::MaterialPtr const&, ulong, uint, uint, uint, uint, uint, bool, ::TerrainLayerLOD);
    // NOLINTEND
};
