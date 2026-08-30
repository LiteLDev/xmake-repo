#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/util/BossBarColor.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct BossbarInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BossBarColor>              mColor;
    ::ll::TypedStorage<4, 4, int>                         mMax;
    ::ll::TypedStorage<4, 4, int>                         mValue;
    ::ll::TypedStorage<1, 1, bool>                        mVisible;
    ::ll::UntypedStorage<8, 16>                           mName;
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mPlayers;
    // NOLINTEND
};
