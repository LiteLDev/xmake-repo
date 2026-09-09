#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class FileLoadLock;
// clang-format on

class GlobalResourcesCrashRecovery : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mResourceInitLockPath;
    ::ll::UntypedStorage<8, 24> mMenuLoadLockPath;
    ::ll::UntypedStorage<8, 24> mglobalResourcesLockPath;
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalResourcesCrashRecovery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GlobalResourcesCrashRecovery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GlobalResourcesCrashRecovery(::Core::PathBuffer<std::string> const&);

    MCNAPI std::shared_ptr<FileLoadLock> createMenuLoadLock() const;

    MCNAPI std::unique_ptr<FileLoadLock> createResourceLockOrResetGlobalResources(std::function<void()>&&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathBuffer<std::string> const&);
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
