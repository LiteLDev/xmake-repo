#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/RealmsCustom.h"

struct RealmsDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument> mCommon;
    ::ll::TypedStorage<8, 32, ::RealmsCustom>    mCustom;
    // NOLINTEND
};
#else // @header-generator platform
struct RealmsDocument {};
#endif // @header-generator platform
