#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IRealmEventLogger;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class LevelStorage;
class Player;
class RealmsStoriesData;
struct ActorAcquiredItemEvent;
struct ActorKilledEvent;
struct DimensionType;
struct PlayerUseNameTagEvent;
namespace Json { class Value; }
// clang-format on

class RealmsStoriesGameplayEventListener : public ::EventListenerDispatcher<ActorEventListener>,
                                           public ::EventListenerDispatcher<PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, Vec3>>   mLastPosChecked;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsStoriesData>> mRealmsStoriesData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRealmEventLogger>> mRealmEventLogger;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesGameplayEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsStoriesGameplayEventListener();

    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const&);

    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);

    virtual ::EventResult onEvent(::ActorKilledEvent const&);

    virtual ::EventResult onPlayerMove(::Player&);

    virtual ::EventResult onPlayerPortalBuilt(::Player&, ::DimensionType);

    virtual ::EventResult onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);

    virtual ::EventResult onPlayerPoweredBeacon(::Player const&, int);

    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    virtual ::EventResult onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _publishEventForRealmsService(::RealmEventId, std::string const&, ::Json::Value const&) const;

    MCNAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId, ::Player const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Player const* _getActorFullyAuthenticatedPlayer(::Actor const*);

    MCNAPI static std::set<std::string> _getXuidsInKillProximity(::Actor const&, float, float);

    MCNAPI static std::string _playerXuidsToString(std::set<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);

    MCNAPI ::EventResult $onEvent(::ActorKilledEvent const&);

    MCNAPI ::EventResult $onPlayerMove(::Player&);

    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player&, ::DimensionType);

    MCNAPI ::EventResult $onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);

    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const&, int);

    MCNAPI ::EventResult $onPlayerCraftedItem(
        ::Player&,
        ::ItemInstance const&,
        bool,
        bool,
        bool,
        int,
        int,
        int,
        bool,
        bool,
        std::vector<short> const&
    );

    MCNAPI ::EventResult $onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
