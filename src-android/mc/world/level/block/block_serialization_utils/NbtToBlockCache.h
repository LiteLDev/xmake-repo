#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_serialization_utils/NBTState.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace BlockSerializationUtils {

struct NbtToBlockCache {
public:
    // NbtToBlockCache inner types declare
    // clang-format off
    struct Key;
    struct Comparator;
    // clang-format on

    // NbtToBlockCache inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong const> mMainHash;
        ::ll::TypedStorage<8, 8, ulong const> mNameHash;
        ::ll::TypedStorage<4, 4, uint const>  mVersion;
        // NOLINTEND
    };

    struct Comparator {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<BlockSerializationUtils::NbtToBlockCache::Key, std::pair<BlockSerializationUtils::NBTState, const Block*>, BlockSerializationUtils::NbtToBlockCache::Comparator, std::allocator<std::pair<const BlockSerializationUtils::NbtToBlockCache::Key, std::pair<BlockSerializationUtils::NBTState, const Block*>>>>> mCache;
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NbtToBlockCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockSerializationUtils
