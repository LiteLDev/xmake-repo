#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class PBRFallbackConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd03c04;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRFallbackConfigSessionStorage& operator=(PBRFallbackConfigSessionStorage const&);
    PBRFallbackConfigSessionStorage(PBRFallbackConfigSessionStorage const&);
    PBRFallbackConfigSessionStorage();
};
#else // @header-generator platform
class PBRFallbackConfigSessionStorage {};
#endif // @header-generator platform
#endif // @header-generator platform
