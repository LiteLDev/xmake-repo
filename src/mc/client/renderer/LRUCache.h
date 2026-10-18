#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace mce {

class LRUCache {
public:
    // LRUCache inner types declare
    // clang-format off
    struct CacheEntry;
    // clang-format on

    // LRUCache inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CacheEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::ResourceLocation> mResourceLocation;
        ::ll::TypedStorage<8, 8, ulong>               mImageSize;
        ::ll::TypedStorage<4, 4, uint>                mTouchMarker;
        // NOLINTEND

    public:
        // prevent constructor by default
        CacheEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                                 mMemoryLimit;
    ::ll::TypedStorage<8, 8, ulong>                                 mMemoryUsage;
    ::ll::TypedStorage<4, 4, uint>                                  mTouchMarker;
    ::ll::TypedStorage<8, 24, std::list<mce::LRUCache::CacheEntry>> mLRUEntryList;
    ::ll::UntypedStorage<8, 48>                                     mLRULookupMap;
    ::ll::UntypedStorage<8, 48>                                     mUnloader;
    // NOLINTEND

public:
    // prevent constructor by default
    LRUCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LRUCache(ulong, std::function<void(ResourceLocation)>);

    MCNAPI void add(::ResourceLocation const&, uint);

    MCNAPI void clear();

    MCNAPI void remove(::ResourceLocation const&);

    MCNAPI void touch(::ResourceLocation const&, ulong);

    MCNAPI bool trim();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ulong, std::function<void(ResourceLocation)>);
    // NOLINTEND
#else // @header-generator platform
    struct CacheEntry {};
#endif // @header-generator platform
};

} // namespace mce
