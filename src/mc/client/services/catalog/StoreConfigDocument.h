#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/StoreConfigCustom.h"

struct StoreConfigDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument>    mCommon;
    ::ll::TypedStorage<8, 280, ::StoreConfigCustom> mCustom;
    // NOLINTEND
};
#else // @header-generator platform
struct StoreConfigDocument {};
#endif // @header-generator platform
