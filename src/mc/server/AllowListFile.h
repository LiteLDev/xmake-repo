#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/FileReadResult.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AllowList;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
// clang-format on

class AllowListFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                          mFilePath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AllowList>> mAllowList;
    ::ll::TypedStorage<1, 1, bool>                       mIsDisabledBecauseNoOnlineAuth;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3edfdb;
    ::ll::UntypedStorage<8, 8>  mUnk7c975f;
    ::ll::UntypedStorage<1, 1>  mUnk8fdea0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AllowListFile& operator=(AllowListFile const&);
    AllowListFile(AllowListFile const&);
#endif // @header-generator platform
    AllowListFile();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit AllowListFile(::Core::Path const& filePath);

    MCNAPI ::FileReadResult reload();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND
#endif // @header-generator platform
};
