#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModalFormRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>         mFormId;
    ::ll::TypedStorage<8, 24, std::string> mFormJSON;
#else // @header-generator platform
    uint          mFormId;
    ::std::string mFormJSON;
#endif // @header-generator platform
    // NOLINTEND
};
