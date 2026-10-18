#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileHandlePool; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ZipPackArgs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                                     mPath;
    ::ll::UntypedStorage<1, 24>                                                       mSubPath;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsTrusted;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Core::FileHandlePool>>> mHandlePool;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 56> mUnk81d337;
    ::ll::UntypedStorage<8, 32> mUnkfb97ec;
    ::ll::UntypedStorage<1, 1>  mUnk7a9851;
    ::ll::UntypedStorage<8, 16> mUnkaa9ec1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ZipPackArgs& operator=(ZipPackArgs const&);
    ZipPackArgs(ZipPackArgs const&);
    ZipPackArgs();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ZipPackArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
