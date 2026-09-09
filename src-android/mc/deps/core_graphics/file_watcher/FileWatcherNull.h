#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace mce {

class FileWatcherNull : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    FileWatcherNull();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileWatcherNull();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FileWatcherNull(std::chrono::duration<long long, std::ratio<1, 1000>> const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::chrono::duration<long long, std::ratio<1, 1000>> const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
