#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/store/iap/RealmsPurchaseIntent.h"
#include "mc/client/store/iap/transactions/RealmsPurchaseFlow.h"
#include "mc/events/RealmsPurchaseStage.h"
#include "mc/events/RealmsPurchaseStatus.h"
#include "mc/events/RealmsPurchaseTelemetryFailureReason.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

class RealmsPurchaseTelemetryHelper {};

} // namespace Social::Events
