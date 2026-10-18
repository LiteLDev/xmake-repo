#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/ThirdPartyServerCustom.h"

struct ThirdPartyServerDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument>         mCommon;
    ::ll::TypedStorage<8, 392, ::ThirdPartyServerCustom> mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyServerDocument& operator=(ThirdPartyServerDocument const&);
    ThirdPartyServerDocument(ThirdPartyServerDocument const&);
};
#else // @header-generator platform
struct ThirdPartyServerDocument {};
#endif // @header-generator platform
