#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/NetworkWorldInfo.h"

class MultiplayerLessonDiscovery {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetLANWorlds;
    ::ll::UntypedStorage<8, 32> mFilteredLessonWorldList;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerLessonDiscovery();
};
#else // @header-generator platform
class MultiplayerLessonDiscovery {};
#endif // @header-generator platform
