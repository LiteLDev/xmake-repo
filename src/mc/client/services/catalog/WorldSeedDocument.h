#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/CommonDocument.h"
#include "mc/client/services/catalog/WorldSeedCustom.h"

struct WorldSeedDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 912, ::CommonDocument> mCommon;
    ::ll::TypedStorage<8, 24, ::WorldSeedCustom> mCustom;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedDocument& operator=(WorldSeedDocument const&);
    WorldSeedDocument(WorldSeedDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldSeedDocument();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct WorldSeedDocument {};
#endif // @header-generator platform
