#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct XTaskQueueObject;
struct XTaskQueueRegistrationToken;
struct XalPlatformOperationToken;
struct XalUser;
namespace Bedrock::Http { class LibHttpClientInstance; }
namespace Bedrock::PubSub { class Subscription; }
namespace Social { class TitleIdentityInfo; }
namespace Social { class XalApiWrapper; }
namespace Social { class XblApiWrapper; }
namespace Social { class XboxLiveStorageHandlerContext; }
namespace Social { struct AuthToken; }
namespace Social { struct XUID; }
// clang-format on

namespace Social {

class XboxLiveServices {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint _getUserIdentifier(std::function<void(std::string, std::string, XalPlatformOperationToken*)>);

    MCNAPI static ::Bedrock::Threading::Async<Social::AuthToken>
    getAuthToken(::Social::XsapiHandle<XalUser*>, std::string const&);

    MCNAPI static std::string const& getMPScid();

    MCNAPI static uint getMPTitleId();

    MCNAPI static std::string const& getNotificationRegistrationToken();

    MCNAPI static std::string const& getScid();

    MCNAPI static uint getTitleId();

    MCNAPI static ::Bedrock::Result<Social::XUID, std::error_code> getXuid(::XalUser*);

    MCNAPI static void hideRemoteConnect(void*, uint, ::XalPlatformOperationToken*);

    MCNAPI static void init(std::weak_ptr<Social::TitleIdentityInfo>);

    MCNAPI static bool isTitleIdAnyPlatform(uint);

    MCNAPI static bool isUsingRemoteConnect();

    MCNAPI static void showRemoteConnect(void*, uint, ::XalPlatformOperationToken*, char const*, char const*);

    MCNAPI static ::Bedrock::Threading::Async<bool> signOut(::XalUser*);

    MCNAPI static void teardown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Bedrock::Http::LibHttpClientInstance>& sHttpLibrary();

    MCNAPI static bool& sInitialized();

    MCNAPI static ::Bedrock::PubSub::Subscription& sLoggingToggleSubscription();

    MCNAPI static std::unique_ptr<TaskGroup>& sNetworkTaskGroup();

    MCNAPI static std::unique_ptr<Social::XboxLiveStorageHandlerContext>& sStorageHandlerContext();

    MCNAPI static std::unique_ptr<TaskGroup>& sStorageHandlerTaskGroup();

    MCNAPI static ::XTaskQueueRegistrationToken& sTaskSubmittedCallbackToken();

    MCNAPI static std::weak_ptr<Social::TitleIdentityInfo>& sTitleIdentityInfo();

    MCNAPI static bool& sUseRemoteConnect();

    MCNAPI static std::vector<
        std::pair<uint, std::function<void(std::string, std::string, XalPlatformOperationToken*)>>>&
    sUserIdentifiers();

    MCNAPI static ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>>& sXalApi();

    MCNAPI static ::gsl::not_null<std::shared_ptr<Social::XblApiWrapper>>& sXblApi();
    // NOLINTEND
};

} // namespace Social
