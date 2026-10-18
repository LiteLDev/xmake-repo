#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

struct MusicUpgradeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseGameVersion const*> mBaseGameVersion;
    ::ll::TypedStorage<8, 24, std::string>             mMusicDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicUpgradeData& operator=(MusicUpgradeData const&);
    MusicUpgradeData();
};
#else // @header-generator platform
struct MusicUpgradeData {};
#endif // @header-generator platform
