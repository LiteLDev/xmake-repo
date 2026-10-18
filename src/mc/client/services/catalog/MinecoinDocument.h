#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/MinecoinCustom.h"

struct MinecoinDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument> mCommon;
    ::ll::TypedStorage<8, 56, ::MinecoinCustom>  mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecoinDocument& operator=(MinecoinDocument const&);
    MinecoinDocument(MinecoinDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecoinDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MinecoinDocument {};
#endif // @header-generator platform
