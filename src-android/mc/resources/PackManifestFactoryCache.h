#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/threading/SharedLockbox.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
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
        ::ll::TypedStorage<8, 8, long>  mTimestamp;
        ::ll::TypedStorage<8, 8, ulong> mSize;
        ::ll::TypedStorage<1, 1, bool>  mUsedThisRun;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184>                        mPackStats;
    ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx> mCerealContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void save(::AppPlatform&);

    MCNAPI ~PackManifestFactoryCache();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathView const& CacheFileName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
