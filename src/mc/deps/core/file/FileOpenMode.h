#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileOpenMode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    bool mRead           : 1;
    bool mWrite          : 1;
    bool mCreate         : 1;
    bool mTruncate       : 1;
    bool mAppend         : 1;
    bool mBinary         : 1;
    bool mWriteExclusive : 1;
    bool mSpeculative    : 1;
    bool mCommit         : 1;
#else // @header-generator platform
    bool mUnkd21c33 : 1;
    bool mUnkb28032 : 1;
    bool mUnk379bb9 : 1;
    bool mUnke8464a : 1;
    bool mUnkac531a : 1;
    bool mUnkf14fe5 : 1;
    bool mUnk7660af : 1;
    bool mUnk8dc531 : 1;
    bool mUnk7357bd : 1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FileOpenMode& operator=(FileOpenMode const&);
    FileOpenMode(FileOpenMode const&);
    FileOpenMode();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit FileOpenMode(uint);
#else // @header-generator platform
    MCNAPI explicit FileOpenMode(int openMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI char const* cMode();
#else // @header-generator platform
    MCNAPI wchar_t const* cModeWide();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(uint);
#else // @header-generator platform
    MCNAPI void* $ctor(int openMode);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
