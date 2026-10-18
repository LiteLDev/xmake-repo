#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class FileWatcherNull {};
#endif // @header-generator platform

} // namespace mce
