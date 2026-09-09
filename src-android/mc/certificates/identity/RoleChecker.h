#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class RoleCheckerCallback;
// clang-format on

class RoleChecker {
public:
    // RoleChecker inner types define
    using OnRoleAcquired = std::function<void(edu::Role, const std::string&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                       mNetworkTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RoleCheckerCallback>> mPendingCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RoleChecker();

    MCNAPI void checkRole(std::string const&, std::function<void(edu::Role, const std::string&, const std::string&)>);

    MCNAPI bool lookupInProgress() const;

    MCNAPI ~RoleChecker();
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
