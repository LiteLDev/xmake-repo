#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class Storage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                   mReadableBytes;
    ::ll::TypedStorage<8, 8, ulong>                   mWriteableBytes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<char[]>> mReadStorage;
    ::ll::TypedStorage<8, 8, std::unique_ptr<char[]>> mWriteStorage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                     mReadableBytes;
    ::ll::TypedStorage<8, 8, uint64>                     mWriteableBytes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<char[0]>> mReadStorage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<char[0]>> mWriteStorage;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    Storage& operator=(Storage const&);
    Storage();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~Storage();
#else // @header-generator platform
    MCAPI ~Storage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace OperationNodeDetails
