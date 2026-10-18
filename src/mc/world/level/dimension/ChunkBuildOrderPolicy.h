#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

class ChunkBuildOrderPolicy : public ::ChunkBuildOrderPolicyBase {
public:
    // ChunkBuildOrderPolicy inner types declare
    // clang-format off
    struct Influence;
    // clang-format on

    // ChunkBuildOrderPolicy inner types define
    enum class HintType : int {
        Player            = 0,
        TickingAreaBox    = 1,
        TickingAreaCircle = 2,
    };

    struct Influence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos>                        position;
        ::ll::TypedStorage<4, 12, ::Vec3>                           parameter;
        ::ll::TypedStorage<4, 4, ::ChunkBuildOrderPolicy::HintType> type;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Influence& operator=(Influence const&);
        Influence(Influence const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ChunkBuildOrderPolicy::Influence>> mPositionMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                             mChunkPosAsyncSpinLock;
    ::ll::TypedStorage<8, 24, std::vector<ChunkBuildOrderPolicy::Influence>>              mChunkPosAndDirectionAsync;
    ::ll::TypedStorage<4, 4, uint>                                                        mLastHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ChunkBuildOrderPolicy::Influence>> mPositionMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                                 mChunkPosAsyncSpinLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkBuildOrderPolicy::Influence>> mChunkPosAndDirectionAsync;
    ::ll::TypedStorage<4, 4, uint>                                               mLastHandle;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ChunkBuildOrderPolicy();
#else // @header-generator platform
    virtual ~ChunkBuildOrderPolicy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getChunkRebuildPriority(::ChunkPos const&) const;
#else // @header-generator platform
    virtual int getChunkRebuildPriority(::ChunkPos const& cp) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint registerForUpdates();
#else // @header-generator platform
    virtual uint registerForUpdates() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unregisterForUpdates(uint);
#else // @header-generator platform
    virtual void unregisterForUpdates(uint handle) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&);
#else // @header-generator platform
    virtual void setPlayerInfluence(
        uint              handle,
        ::ChunkPos const& playerPosition,
        ::Vec3 const&     playerMovementDirection
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool);
#else // @header-generator platform
    virtual void setTickingAreaInfluence(
        uint              handle,
        ::ChunkPos const& tickingAreaPosition,
        int               sizeX,
        int               sizeZ,
        bool              isCircle,
        bool              preload
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateInfluences();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void updateInfluences() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getChunkRebuildPriority(::ChunkPos const&) const;
#else // @header-generator platform
    MCAPI int $getChunkRebuildPriority(::ChunkPos const& cp) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $registerForUpdates();
#else // @header-generator platform
    MCAPI uint $registerForUpdates();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $unregisterForUpdates(uint);
#else // @header-generator platform
    MCAPI void $unregisterForUpdates(uint handle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void
    $setPlayerInfluence(uint handle, ::ChunkPos const& playerPosition, ::Vec3 const& playerMovementDirection);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool);
#else // @header-generator platform
    MCAPI void $setTickingAreaInfluence(
        uint              handle,
        ::ChunkPos const& tickingAreaPosition,
        int               sizeX,
        int               sizeZ,
        bool              isCircle,
        bool              preload
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateInfluences();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $updateInfluences();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
