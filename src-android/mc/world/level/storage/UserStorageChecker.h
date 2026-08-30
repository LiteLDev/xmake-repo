#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class TaskResult;
namespace Core { class IFileStorageAreaFetcher; }
namespace Core { class PathView; }
// clang-format on

class UserStorageChecker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                 mTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const Core::IFileStorageAreaFetcher> const> mFileStorageAreaFetcher;
    // NOLINTEND

public:
    // prevent constructor by default
    UserStorageChecker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserStorageChecker(std::unique_ptr<TaskGroup>, std::unique_ptr<Core::IFileStorageAreaFetcher>);

    MCNAPI void queueCheckUserStorage(::Core::PathView);

    MCNAPI ~UserStorageChecker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<TaskGroup>, std::unique_ptr<Core::IFileStorageAreaFetcher>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
