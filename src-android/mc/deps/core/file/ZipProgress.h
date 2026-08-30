#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::ZipUtils {

class ZipProgress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mFilesDone;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mFilesSkipped;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mTotalFiles;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ZipProgress();

    virtual void clear();
    // NOLINTEND

public:
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core::ZipUtils
