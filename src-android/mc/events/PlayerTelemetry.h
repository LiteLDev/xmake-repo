#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace Social::Events { class Event; }
namespace Social::Events { struct PlayerTelemetryLoadout; }
// clang-format on

namespace Social::Events {

class PlayerTelemetry {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ItemNamed(std::string const&);

    MCNAPI void UpdatePlayerLoadout(::Player&);

    MCNAPI ~PlayerTelemetry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
