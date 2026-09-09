#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class Storage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                   mReadableBytes;
    ::ll::TypedStorage<8, 8, ulong>                   mWriteableBytes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<char[]>> mReadStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<char[]>> mWriteStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    Storage& operator=(Storage const&);
    Storage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Storage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OperationNodeDetails
