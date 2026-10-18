#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/events/RealmsPurchaseTelemetryFailureReason.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Response; }
namespace Json { class Value; }
// clang-format on

struct RealmsFulfillmentResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>            mRealmId;
    ::ll::TypedStorage<8, 24, std::string> mRealmName;
    ::ll::UntypedStorage<1, 1>             mFailureReason;
    ::ll::UntypedStorage<8, 16>            mConflictingRealmId;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsFulfillmentResult {};
#endif // @header-generator platform
