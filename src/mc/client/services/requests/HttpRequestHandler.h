#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ServiceClient;
class TaskGroup;
namespace Bedrock::Http { class Response; }
// clang-format on

class HttpRequestHandler : public ::std::enable_shared_from_this<HttpRequestHandler> {
#else // @header-generator platform
class HttpRequestHandler {
#endif // @header-generator platform
public:
    // HttpRequestHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class WaitForSignIn : uint {
        None    = 0,
        PlayFab = 1,
    };
#else // @header-generator platform
    enum class RequestStatus : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class RequestStatus : int {
        NotStarted = 0,
        InProgress = 1,
        Completed  = 2,
        Canceled   = 3,
        TimeOut    = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::ServiceClient const&> mOwner;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1>>> mRequestTimeLimit;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRequestStartTime;
    ::ll::TypedStorage<1, 1, bool> mWorkComplete;
    ::ll::TypedStorage<4, 4, ::HttpRequestHandler::WaitForSignIn> mPreferWaitForSignIn;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mRequestTaskGroup;
    ::ll::TypedStorage<4, 4, ::Bedrock::Http::RequestPriority> mPriority;
    ::ll::TypedStorage<8, 24, std::string> mMessageSessionId;
    ::ll::TypedStorage<4, 4, ::HttpRequestHandler::RequestStatus> mStatus;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    HttpRequestHandler& operator=(HttpRequestHandler const&);
    HttpRequestHandler(HttpRequestHandler const&);
    HttpRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpRequestHandler();

    virtual bool trySend(bool const);

    virtual ::Bedrock::Threading::Async<std::string> getAuthToken() = 0;

    virtual ::Bedrock::Threading::Async<Bedrock::Http::Response> send(std::string) = 0;

    virtual void processResponse(::Bedrock::Http::Response) = 0;

    virtual void sendCachedRequest();

    virtual bool isDone() const;

    virtual void onComplete() = 0;

    virtual bool canSendRequest() const;

    virtual void fireTelemetry(::Bedrock::NonOwnerPointer<IMinecraftEventing> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HttpRequestHandler(::ServiceClient const&, uint);

    MCNAPI void _flushRequestTaskGroup();

    MCNAPI ::Bedrock::Threading::Async<std::string> _getAuthorizationHeader(std::string const&) const;

    MCNAPI std::string const getMessageSessionId();

    MCNAPI void setMessageSessionId(std::string const&);

    MCNAPI void setPreferWaitForSignIn(::HttpRequestHandler::WaitForSignIn);

    MCNAPI void setRequestPriority(::Bedrock::Http::RequestPriority const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServiceClient const&, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $trySend(bool const);

    MCNAPI void $sendCachedRequest();

    MCNAPI bool $isDone() const;

    MCNAPI bool $canSendRequest() const;

    MCNAPI void $fireTelemetry(::Bedrock::NonOwnerPointer<IMinecraftEventing> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    enum class WaitForSignIn : uint {};
#endif // @header-generator platform
};
