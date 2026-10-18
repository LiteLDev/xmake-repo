#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/XboxLivePrivacyValue.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/identity/XUID.h"

// auto generated forward declare list
// clang-format off
struct XalUser;
struct XblContext;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { class XalApiWrapper; }
namespace Social { class XblApiWrapper; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XboxLiveUserPrivacy : public ::std::enable_shared_from_this<Social::XboxLiveUserPrivacy> {
public:
    // XboxLiveUserPrivacy inner types define
    using PrivacyData = std::unordered_map<Social::XboxLivePrivacyValue, bool>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 112> mCurrentUser;
    ::ll::UntypedStorage<8, 112> mContext;
    ::ll::TypedStorage<8, 8, ::Social::XUID> mXuid;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRefreshDataTime;
    ::ll::UntypedStorage<8, 88> mNotifySubscribers;
    ::ll::TypedStorage<8, 40, std::unordered_map<Social::XboxLivePrivacyValue, bool>> mData;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>>> mXalApi;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XblApiWrapper>>> mXblApi;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Subscription connectSubscriber(std::function<void()>);

    MCNAPI std::unordered_map<Social::XboxLivePrivacyValue, bool> const& getPrivacyData();

    MCNAPI void updatePrivacyData();
    // NOLINTEND
};
#else // @header-generator platform
class XboxLiveUserPrivacy {};
#endif // @header-generator platform

} // namespace Social
