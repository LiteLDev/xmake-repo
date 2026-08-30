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

    public:
        // prevent constructor by default
        Influence& operator=(Influence const&);
        Influence(Influence const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ChunkBuildOrderPolicy::Influence>> mPositionMap;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                                             mChunkPosAsyncSpinLock;
    ::ll::TypedStorage<8, 24, std::vector<ChunkBuildOrderPolicy::Influence>>              mChunkPosAndDirectionAsync;
    ::ll::TypedStorage<4, 4, uint>                                                        mLastHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChunkBuildOrderPolicy();

    virtual int getChunkRebuildPriority(::ChunkPos const&) const;

    virtual uint registerForUpdates();

    virtual void unregisterForUpdates(uint);

    virtual void setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&);

    virtual void setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool);

    virtual void updateInfluences();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getChunkRebuildPriority(::ChunkPos const&) const;

    MCNAPI uint $registerForUpdates();

    MCNAPI void $unregisterForUpdates(uint);

    MCNAPI void $setPlayerInfluence(uint, ::ChunkPos const&, ::Vec3 const&);

    MCNAPI void $setTickingAreaInfluence(uint, ::ChunkPos const&, int, int, bool, bool);

    MCNAPI void $updateInfluences();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
