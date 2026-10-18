#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/ISubChunkLighter.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
struct SubChunkLightUpdate;
// clang-format on

class ServerSubChunkLighter : public ::ISubChunkLighter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ServerSubChunkLighter();
#else // @header-generator platform
    virtual ::std::vector<::BlockPos> relightSubChunk(
        ::BlockSource&                              source,
        ::LevelChunk const&                         levelChunk,
        uint64                                      centerSubChunkIndex,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<BlockPos> relightSubChunk(::BlockSource&, ::LevelChunk const&, ulong, std::vector<SubChunkLightUpdate> const&) const;

    virtual bool isDeferredEnabled() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool isDeferredEnabled() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<BlockPos>
           $relightSubChunk(::BlockSource&, ::LevelChunk const&, ulong, std::vector<SubChunkLightUpdate> const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::BlockPos> $relightSubChunk(
        ::BlockSource&                              source,
        ::LevelChunk const&                         levelChunk,
        uint64                                      centerSubChunkIndex,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDeferredEnabled() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $isDeferredEnabled() const;
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
