#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class LocalLightConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk3b99ca;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLightConfigSessionStorage& operator=(LocalLightConfigSessionStorage const&);
    LocalLightConfigSessionStorage(LocalLightConfigSessionStorage const&);
    LocalLightConfigSessionStorage();
};
#else // @header-generator platform
class LocalLightConfigSessionStorage {};
#endif // @header-generator platform
#endif // @header-generator platform
