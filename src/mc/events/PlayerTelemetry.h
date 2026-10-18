#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
namespace Social::Events { class Event; }
namespace Social::Events { struct PlayerTelemetryLoadout; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Social::Events {

class PlayerTelemetry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // PlayerTelemetry inner types declare
    // clang-format off
    struct nowFunc;
    // clang-format on

    // PlayerTelemetry inner types define
    struct nowFunc {};

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                 mBiomesVisited;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::pair<Vec3, double>>> mAvgPosByDimension;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, double>> mTotalDistanceTravelledByDimension;
    ::ll::UntypedStorage<8, 40>                                        mBlocksBroken;
    ::ll::UntypedStorage<8, 40>                                        mBlocksBrokenByCommand;
    ::ll::UntypedStorage<8, 40>                                        mBlocksPlaced;
    ::ll::UntypedStorage<8, 40>                                        mBlocksPlacedByCommand;
    ::ll::UntypedStorage<8, 40>                                        mItemsEquipped;
    ::ll::UntypedStorage<8, 40>                                        mItemsAcquired;
    ::ll::UntypedStorage<8, 40>                                        mItemsUsed;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                mItemsNamed;
    ::ll::UntypedStorage<8, 40>                                        mMobsInteracted;
    ::ll::UntypedStorage<8, 16>                                        mPlayerLoadout;
    ::ll::UntypedStorage<1, 144>                                       mAccessMutex;
    ::ll::UntypedStorage<8, 16>                                        mCreationTime;
    ::ll::UntypedStorage<8, 48>                                        nowFunc;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnke716c1;
    ::ll::UntypedStorage<8, 64> mUnk53b940;
    ::ll::UntypedStorage<8, 64> mUnk6f8dfa;
    ::ll::UntypedStorage<8, 64> mUnk6ece61;
    ::ll::UntypedStorage<8, 64> mUnkd91fc1;
    ::ll::UntypedStorage<8, 64> mUnk7bdf26;
    ::ll::UntypedStorage<8, 64> mUnk953895;
    ::ll::UntypedStorage<8, 64> mUnke031eb;
    ::ll::UntypedStorage<8, 64> mUnkae0859;
    ::ll::UntypedStorage<8, 64> mUnk743504;
    ::ll::UntypedStorage<8, 24> mUnk9c704b;
    ::ll::UntypedStorage<8, 64> mUnk1ff91e;
    ::ll::UntypedStorage<8, 16> mUnkfa52ad;
    ::ll::UntypedStorage<8, 8>  mUnk7ed562;
    ::ll::UntypedStorage<8, 8>  mUnk2c6cf6;
    ::ll::UntypedStorage<8, 64> mUnkbc1121;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlayerTelemetry& operator=(PlayerTelemetry const&);
    PlayerTelemetry(PlayerTelemetry const&);
    PlayerTelemetry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ItemNamed(std::string const&);

    MCNAPI void UpdatePlayerLoadout(::Player&);

    MCNAPI ~PlayerTelemetry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void UpdatePlayerLoadout(::Player& player);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
