#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/editor/serviceproviders/IClientDataTransferSessionStorage.h"

class AtmosphericScatteringSessionStorage : public ::Editor::Services::IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk25f1c9;
    // NOLINTEND

public:
    // prevent constructor by default
    AtmosphericScatteringSessionStorage& operator=(AtmosphericScatteringSessionStorage const&);
    AtmosphericScatteringSessionStorage(AtmosphericScatteringSessionStorage const&);
    AtmosphericScatteringSessionStorage();
};
#else // @header-generator platform
class AtmosphericScatteringSessionStorage {};
#endif // @header-generator platform
#endif // @header-generator platform
