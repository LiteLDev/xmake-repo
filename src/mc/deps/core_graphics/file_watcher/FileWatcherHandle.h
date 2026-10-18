#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace mce::detail { struct FileWatcherHandleInternal; }
// clang-format on
#endif // @header-generator platform

namespace mce {

class FileWatcherHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mFileWatcherHandleInternal;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::detail::FileWatcherHandleInternal>> mFileWatcherHandleInternal;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    FileWatcherHandle(FileWatcherHandle const&);
    FileWatcherHandle();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FileWatcherHandle();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~FileWatcherHandle();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace mce
