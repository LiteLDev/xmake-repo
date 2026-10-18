#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/PackIdVersion.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on
#endif // @header-generator platform

struct ServicePack {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mIdVersion;
    ::ll::UntypedStorage<8, 24> mDownloadUrl;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnkee4d44;
    ::ll::UntypedStorage<8, 32> mUnk88d93b;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ServicePack& operator=(ServicePack const&);
    ServicePack(ServicePack const&);
    ServicePack();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ServicePack& operator=(ServicePack const&);
    ServicePack();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ServicePack(::ServicePack const&);

    MCNAPI ServicePack(::PackIdVersion packId, ::Core::PathBuffer<::std::string> downloadUrl);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ServicePack();
#else // @header-generator platform
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ServicePack const&);

    MCNAPI void* $ctor(::PackIdVersion packId, ::Core::PathBuffer<::std::string> downloadUrl);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
