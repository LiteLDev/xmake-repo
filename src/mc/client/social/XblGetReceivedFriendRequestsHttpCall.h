#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/XblPeopleHubHttpCall.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
namespace Social { struct AuthToken; }
namespace Social { struct XUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XblGetReceivedFriendRequestsHttpCall : public ::Social::XblPeopleHubHttpCall {};
#else // @header-generator platform
class XblGetReceivedFriendRequestsHttpCall {};
#endif // @header-generator platform

} // namespace Social
