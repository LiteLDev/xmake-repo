#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class ColorGraderConfigSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9dcf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorGraderConfigSessionStorage& operator=(ColorGraderConfigSessionStorage const&);
    ColorGraderConfigSessionStorage(ColorGraderConfigSessionStorage const&);
    ColorGraderConfigSessionStorage();
};
#else // @header-generator platform
class ColorGraderConfigSessionStorage {};
#endif // @header-generator platform
#endif // @header-generator platform
