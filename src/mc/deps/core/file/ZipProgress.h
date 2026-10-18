#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mFilesDone;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mFilesSkipped;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mTotalFiles;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mFilesDone;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mFilesSkipped;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>> mTotalFiles;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ZipProgress();
#else // @header-generator platform
    virtual ~ZipProgress() = default;
#endif // @header-generator platform

    virtual void clear();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipProgress();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clear();
#else // @header-generator platform
    MCAPI void $clear();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::ZipUtils
