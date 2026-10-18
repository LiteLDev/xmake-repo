#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerSoundDefinitionLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnke104a2;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundDefinitionLoader& operator=(ServerSoundDefinitionLoader const&);
    ServerSoundDefinitionLoader(ServerSoundDefinitionLoader const&);
    ServerSoundDefinitionLoader();
};
#endif // @header-generator platform
