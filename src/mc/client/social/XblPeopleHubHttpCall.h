#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/RelationshipStatus.h"
#include "mc/client/social/UserPresenceResult.h"
#include "mc/client/social/XblHttpRequestHandler.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XblPeopleHubHttpCall : public ::Social::XblHttpRequestHandler<Social::XblPeopleHubHttpCall> {};
#else // @header-generator platform
class XblPeopleHubHttpCall {};
#endif // @header-generator platform

} // namespace Social
