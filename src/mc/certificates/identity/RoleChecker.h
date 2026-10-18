#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
class RoleCheckerCallback;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class RoleChecker {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // RoleChecker inner types define
    using OnRoleAcquired = std::function<void(edu::Role, const std::string&, const std::string&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 240, ::TaskGroup>                       mNetworkTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<RoleCheckerCallback>> mPendingCallback;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 336> mUnkeab699;
    ::ll::UntypedStorage<8, 16>  mUnk448721;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RoleChecker& operator=(RoleChecker const&);
    RoleChecker(RoleChecker const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RoleChecker();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkRole(std::string const&, std::function<void(edu::Role, const std::string&, const std::string&)>);

    MCNAPI bool lookupInProgress() const;

    MCNAPI ~RoleChecker();
#else // @header-generator platform
    MCNAPI void checkRole(
        ::std::string const&                                                           jsonCredentials,
        ::std::function<void(::edu::Role, ::std::string const&, ::std::string const&)> callback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
