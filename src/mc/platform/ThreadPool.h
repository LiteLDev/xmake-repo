#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

#endif // @header-generator platform
namespace OS {

#if defined(LL_PLAT_C) // @header-generator platform
class ThreadPool {};
#else // @header-generator platform
class ThreadPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8fbfec;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadPool& operator=(ThreadPool const&);
    ThreadPool(ThreadPool const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long Initialize(void* context, void (*callback)(void*, ::OS::ThreadPoolActionStatus&));

    MCNAPI void Submit();

    MCNAPI void Terminate();

    MCNAPI ThreadPool();

    MCNAPI ~ThreadPool();
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
};
#endif // @header-generator platform

} // namespace OS
#endif // @header-generator platform
