#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

struct ExcludedPath {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mPath;
    ::ll::TypedStorage<1, 1, bool> mCopyLooseFile;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3176b9;
    ::ll::UntypedStorage<1, 1>  mUnk40717f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExcludedPath& operator=(ExcludedPath const&);
    ExcludedPath(ExcludedPath const&);
#endif // @header-generator platform
    ExcludedPath();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExcludedPath(::Core::PathBuffer<std::string>, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathBuffer<std::string>, bool);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Core
