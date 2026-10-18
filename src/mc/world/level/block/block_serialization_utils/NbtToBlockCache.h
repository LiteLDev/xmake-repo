#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    struct Key;
#else // @header-generator platform
#endif // @header-generator platform
    struct Comparator;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Key;
#endif // @header-generator platform
    // clang-format on

    // NbtToBlockCache inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Comparator {};

#endif // @header-generator platform
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong const> mMainHash;
        ::ll::TypedStorage<8, 8, ulong const> mNameHash;
        ::ll::TypedStorage<4, 4, uint const>  mVersion;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64 const> mMainHash;
        ::ll::TypedStorage<8, 8, uint64 const> mNameHash;
        ::ll::TypedStorage<4, 4, uint const>   mVersion;
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform

    struct Comparator {};
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            ::BlockSerializationUtils::NbtToBlockCache::Key,
            ::std::pair<::BlockSerializationUtils::NBTState, ::Block const*>,
            ::BlockSerializationUtils::NbtToBlockCache::Comparator>>
                                                           mCache;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mMutex;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockSerializationUtils
