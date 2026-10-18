#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/packet/UpdateSubChunkNetworkBlockInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
struct ActorBlockSyncMessage;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct UpdateSubChunkNetworkBlockInfo;
#endif // @header-generator platform
// clang-format on

struct UpdateSubChunkBlocksChangedInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<UpdateSubChunkNetworkBlockInfo>> mStandards;
    ::ll::TypedStorage<8, 24, std::vector<UpdateSubChunkNetworkBlockInfo>> mExtras;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::UpdateSubChunkNetworkBlockInfo>> mStandards;
    ::ll::TypedStorage<8, 24, ::std::vector<::UpdateSubChunkNetworkBlockInfo>> mExtras;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksChangedInfo& operator=(UpdateSubChunkBlocksChangedInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UpdateSubChunkBlocksChangedInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UpdateSubChunkBlocksChangedInfo(::UpdateSubChunkBlocksChangedInfo const&);
#else // @header-generator platform
    MCAPI UpdateSubChunkBlocksChangedInfo(::UpdateSubChunkBlocksChangedInfo const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(::BlockPos const&, uint, ::Block const&, int, ::ActorBlockSyncMessage const*);
#else // @header-generator platform
    MCAPI UpdateSubChunkBlocksChangedInfo(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );

    MCAPI void
    add(::BlockPos const&              pos,
        uint                           layer,
        ::Block const&                 block,
        int                            updateFlags,
        ::ActorBlockSyncMessage const* syncMsg);

    MCAPI ~UpdateSubChunkBlocksChangedInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::UpdateSubChunkBlocksChangedInfo const&);
#else // @header-generator platform
    MCAPI void* $ctor(::UpdateSubChunkBlocksChangedInfo const&);

    MCAPI void* $ctor(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
