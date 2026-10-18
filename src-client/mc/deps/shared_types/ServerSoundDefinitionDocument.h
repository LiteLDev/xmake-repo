#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ServerSoundDefinition.h"

namespace SharedTypes::Beta::Sound {

struct ServerSoundDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Beta::Sound::ServerSoundDefinition>> mServerSoundDefinitions;
    // NOLINTEND
};

} // namespace SharedTypes::Beta::Sound
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
