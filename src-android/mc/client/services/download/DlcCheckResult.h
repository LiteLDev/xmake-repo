#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
