#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class WaterConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbd9df4;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterConfigSessionStorage& operator=(WaterConfigSessionStorage const&);
    WaterConfigSessionStorage(WaterConfigSessionStorage const&);
    WaterConfigSessionStorage();
};
#else // @header-generator platform
class WaterConfigSessionStorage {};
#endif // @header-generator platform
#endif // @header-generator platform
