#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class DlcCheckResult : int {
    HasPendingOrActiveImports                       = 0,
    HasUnownedPacks                                 = 1,
    RealmsPlusEnded                                 = 2,
    MissingDlcDependencies                          = 3,
    MissingDlcWorldTemplate                         = 4,
    NoInternet                                      = 5,
    HasPerformanceIssues                            = 6,
    StorageCheckStarted                             = 7,
    StorageCheckInProgress                          = 8,
    WifiRequiredYetNotAccessible                    = 9,
    MissingRequiredWorldTemplateRequestUserApproval = 10,
    DlcMissingContentKey                            = 11,
    OK                                              = 12,
};
#else // @header-generator platform
enum class DlcCheckResult : int {};
#endif // @header-generator platform
