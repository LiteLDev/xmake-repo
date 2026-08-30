#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class IMinecraftEventing;
class TaskGroup;
namespace Social { class IUserManager; }
namespace Social { class User; }
// clang-format on

class ServiceClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mSubmittedHttpRequestMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<HttpRequestHandler>>> mSubmittedHttpRequests;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<HttpRequestHandler>>> mHttpRequests;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mServiceClientTaskGroup;
    ::ll::UntypedStorage<8, 40> mEventing;
    ::ll::UntypedStorage<8, 40> mUserManager;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    ::ll::TypedStorage<1, 1, bool> mHasTriedSigningIn;
    ::ll::TypedStorage<8, 24, std::string> mMessageSessionID;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceClient();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ServiceClient();

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader(std::string const&) const;

    virtual ::Bedrock::Threading::Async<std::string> getAuthorizationHeader(std::shared_ptr<Social::User>, std::string const&) const;

    virtual void update();

    virtual void _submitRequest(std::shared_ptr<HttpRequestHandler>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServiceClient(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing*);

    MCNAPI std::string getMessageSessionId() const;

    MCNAPI std::string getPrimaryUserEntityToken() const;

    MCNAPI std::string getPrimaryUserPlayFabId() const;

    MCNAPI std::string getPrimaryUserTitleAccountPlayFabId() const;

    MCNAPI std::string getPrimaryUserXUID() const;

    MCNAPI bool hasWaitedForPlayFabSignIn() const;

    MCNAPI void setEventing(::IMinecraftEventing*);

    MCNAPI void setUserManager(::Bedrock::NonOwnerPointer<Social::IUserManager>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<Social::IUserManager>, ::IMinecraftEventing*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<std::string> $getAuthorizationHeader(std::string const&) const;

    MCNAPI ::Bedrock::Threading::Async<std::string>
    $getAuthorizationHeader(std::shared_ptr<Social::User>, std::string const&) const;

    MCNAPI void $update();

    MCNAPI void $_submitRequest(std::shared_ptr<HttpRequestHandler>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
