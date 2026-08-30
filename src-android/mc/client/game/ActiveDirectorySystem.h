#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/CredentialsObserver.h"
#include "mc/certificates/identity/edu/GenericCredentialsEvent.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class IMinecraftEventing;
class TaskGroup;
struct DemoConfig;
struct EDUConfigData;
namespace edu::auth { struct CredentialsAcquired; }
// clang-format on

class ActiveDirectorySystem : public ::edu::auth::CredentialsObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                          mRebuildPackStack;
    ::ll::UntypedStorage<8, 16>                          mDemoConfig;
    ::ll::UntypedStorage<8, 48>                          mDeleteSingleUseWorlds;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>      mEventing;
    ::ll::UntypedStorage<8, 24>                          mIdentity;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                       mShouldRebuildPackStack;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectorySystem& operator=(ActiveDirectorySystem const&);
    ActiveDirectorySystem(ActiveDirectorySystem const&);
    ActiveDirectorySystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActiveDirectorySystem();

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::GraphCredsRefreshFailed> const&);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsAuthComplete> const&);

    virtual void onNotify(::EDUConfigData const&);

    virtual void onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::SignInCredsRefreshFailed> const&);

    virtual void onNotify(::edu::auth::CredentialsAcquired const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getDemoWorld() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::GraphCredsRefreshFailed> const&);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::CredsAuthComplete> const&);

    MCNAPI void $onNotify(::EDUConfigData const&);

    MCNAPI void $onNotify(::edu::auth::GenericCredentialsEvent<edu::auth::SignInCredsRefreshFailed> const&);

    MCNAPI void $onNotify(::edu::auth::CredentialsAcquired const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
