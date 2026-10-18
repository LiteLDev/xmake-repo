#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class ShadowStylizationConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk608a72;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowStylizationConfigSessionStorage& operator=(ShadowStylizationConfigSessionStorage const&);
    ShadowStylizationConfigSessionStorage(ShadowStylizationConfigSessionStorage const&);
    ShadowStylizationConfigSessionStorage();
};
#else // @header-generator platform
class ShadowStylizationConfigSessionStorage {};
#endif // @header-generator platform
#endif // @header-generator platform
