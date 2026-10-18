#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Vec3;
// clang-format on

class ChunkBuildOrderPolicyBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChunkBuildOrderPolicyBase() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getChunkRebuildPriority(::ChunkPos const&) const = 0;
#else // @header-generator platform
    virtual int getChunkRebuildPriority(::ChunkPos const& cp) const = 0;
#endif // @header-generator platform

    virtual uint registerForUpdates();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterForUpdates(uint) = 0;
#else // @header-generator platform
    virtual void unregisterForUpdates(uint handle) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&) = 0;
#else // @header-generator platform
    virtual void
    setPlayerInfluence(uint handle, ::ChunkPos const& playerPosition, ::Vec3 const& playerMovementDirection) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool) = 0;
#else // @header-generator platform
    virtual void setTickingAreaInfluence(
        uint              handle,
        ::ChunkPos const& tickingAreaPosition,
        int               sizeX,
        int               sizeZ,
        bool              isCircle,
        bool              preload
    ) = 0;
#endif // @header-generator platform

    virtual void updateInfluences() = 0;
    // NOLINTEND
};
