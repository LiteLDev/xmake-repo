#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class FileWatcherHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mFileWatcherHandleInternal;
    // NOLINTEND

public:
    // prevent constructor by default
    FileWatcherHandle(FileWatcherHandle const&);
    FileWatcherHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FileWatcherHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
