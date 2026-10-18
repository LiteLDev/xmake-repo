#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform
#include "mc/world/actor/ai/util/BossBarColor.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
struct ActorUniqueID;
#endif // @header-generator platform
// clang-format on

struct BossbarInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::BossBarColor>              mColor;
    ::ll::TypedStorage<4, 4, int>                         mMax;
    ::ll::TypedStorage<4, 4, int>                         mValue;
    ::ll::TypedStorage<1, 1, bool>                        mVisible;
    ::ll::UntypedStorage<8, 16>                           mName;
    ::ll::TypedStorage<8, 24, std::vector<ActorUniqueID>> mPlayers;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::BossBarColor>                  mColor;
    ::ll::TypedStorage<4, 4, int>                             mMax;
    ::ll::TypedStorage<4, 4, int>                             mValue;
    ::ll::TypedStorage<1, 1, bool>                            mVisible;
    ::ll::TypedStorage<8, 16, ::Json::Value>                  mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> mPlayers;
#endif // @header-generator platform
    // NOLINTEND
};
