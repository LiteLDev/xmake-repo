#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
