#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LevelChunk;
struct SubChunkLightUpdate;
// clang-format on

class ISubChunkLighter : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::vector<BlockPos> relightSubChunk(::BlockSource&, ::LevelChunk const&, ulong, std::vector<SubChunkLightUpdate> const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::BlockPos> relightSubChunk(
        ::BlockSource&                              source,
        ::LevelChunk const&                         levelChunk,
        uint64                                      centerSubChunkIndex,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList
    ) const = 0;
#endif // @header-generator platform

    virtual bool isDeferredEnabled() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
