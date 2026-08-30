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
    // clang-format off
    virtual std::vector<BlockPos> relightSubChunk(::BlockSource&, ::LevelChunk const&, ulong, std::vector<SubChunkLightUpdate> const&) const = 0;

    virtual bool isDeferredEnabled() const = 0;
    // clang-format on
    // NOLINTEND
};
