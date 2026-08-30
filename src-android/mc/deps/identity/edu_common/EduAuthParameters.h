#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace Identity {

struct EduAuthParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                          mGetMessSigningPublicKeys;
    ::ll::TypedStorage<8, 24, std::string>               mGameVersion;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EduAuthParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Identity
