#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskResult;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class IFileStorageAreaFetcher; }
namespace Core { class PathView; }
// clang-format on

class UserStorageChecker {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                 mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const Core::IFileStorageAreaFetcher> const> mFileStorageAreaFetcher;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkb0f536;
    ::ll::UntypedStorage<8, 8> mUnk6cf0ff;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UserStorageChecker& operator=(UserStorageChecker const&);
    UserStorageChecker(UserStorageChecker const&);
#endif // @header-generator platform
    UserStorageChecker();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UserStorageChecker(std::unique_ptr<TaskGroup>, std::unique_ptr<Core::IFileStorageAreaFetcher>);
#else // @header-generator platform
    MCNAPI UserStorageChecker(
        ::std::unique_ptr<::TaskGroup>                     taskGroup,
        ::std::unique_ptr<::Core::IFileStorageAreaFetcher> fileStorageFetcher
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void queueCheckUserStorage(::Core::PathView);

    MCNAPI ~UserStorageChecker();
#else // @header-generator platform
    MCNAPI void queueCheckUserStorage(::Core::PathView storagePath);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<TaskGroup>, std::unique_ptr<Core::IFileStorageAreaFetcher>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                     taskGroup,
        ::std::unique_ptr<::Core::IFileStorageAreaFetcher> fileStorageFetcher
    );
#endif // @header-generator platform
    // NOLINTEND
};
