#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/threading/SharedLockbox.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
// clang-format on

class PackManifestFactoryCache {
public:
    // PackManifestFactoryCache inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // PackManifestFactoryCache inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, long>  mTimestamp;
        ::ll::TypedStorage<8, 8, ulong> mSize;
        ::ll::TypedStorage<1, 1, bool>  mUsedThisRun;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkf18636;
        ::ll::UntypedStorage<8, 8> mUnk4330db;
        ::ll::UntypedStorage<1, 1> mUnkdc0f09;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 184>                        mPackStats;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCerealContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72>  mUnke20cdf;
    ::ll::UntypedStorage<8, 128> mUnk892348;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PackManifestFactoryCache& operator=(PackManifestFactoryCache const&);
    PackManifestFactoryCache(PackManifestFactoryCache const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void save(::AppPlatform&);
#else // @header-generator platform
    MCNAPI PackManifestFactoryCache();
#endif // @header-generator platform

    MCNAPI ~PackManifestFactoryCache();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathView const& CacheFileName();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
#endif // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
