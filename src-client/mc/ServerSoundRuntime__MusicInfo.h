#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerSoundRuntime {

struct MusicInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mGenres;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mMoods;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mArtist;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>              mTitle;
    // NOLINTEND
};

} // namespace ServerSoundRuntime
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
