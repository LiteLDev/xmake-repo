#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/storage/RealmsStoriesData.h"
#include "mc/world/events/IRealmEventLogger.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class LevelStorage;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class RealmsStoriesData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Vec3;
#endif // @header-generator platform
struct ActorAcquiredItemEvent;
struct ActorKilledEvent;
struct DimensionType;
struct PlayerUseNameTagEvent;
namespace Json { class Value; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsStoriesGameplayEventListener : public ::EventListenerDispatcher<ActorEventListener>,
                                           public ::EventListenerDispatcher<PlayerEventListener> {
#else // @header-generator platform
class RealmsStoriesGameplayEventListener : public ::EventListenerDispatcher<::ActorEventListener>,
                                           public ::EventListenerDispatcher<::PlayerEventListener> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, Vec3>>   mLastPosChecked;
    ::ll::TypedStorage<8, 8, std::unique_ptr<RealmsStoriesData>> mRealmsStoriesData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRealmEventLogger>> mRealmEventLogger;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::Vec3>>  mLastPosChecked;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RealmsStoriesData>> mRealmsStoriesData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRealmEventLogger>> mRealmEventLogger;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    RealmsStoriesGameplayEventListener();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RealmsStoriesGameplayEventListener();
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const& actorAcquiredItemEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorKilledEvent const& actorKilledEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorAcquiredItemEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::PlayerUseNameTagEvent const& playerUseNameTagEvent) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorKilledEvent const&);
#else // @header-generator platform
    virtual ::EventResult onPlayerMove(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerMove(::Player&);
#else // @header-generator platform
    virtual ::EventResult onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPortalBuilt(::Player&, ::DimensionType);
#else // @header-generator platform
    virtual ::EventResult
    onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    virtual ::EventResult onPlayerPoweredBeacon(::Player const& player, int) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerPoweredBeacon(::Player const&, int);
#else // @header-generator platform
    virtual ::EventResult onPlayerCraftedItem(
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onPlayerCraftedItem(::Player&, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short> const&);

    virtual ::EventResult onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
    // clang-format on
#else // @header-generator platform
    virtual ::EventResult
    onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _publishEventForRealmsService(::RealmEventId, std::string const&, ::Json::Value const&) const;
#else // @header-generator platform
    MCNAPI void
    _publishEventForRealmsService(::RealmEventId id, ::std::string const& xuid, ::Json::Value const& metadata) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId, ::Player const&);
#else // @header-generator platform
    MCNAPI void _publishLocationWorldEventIfFirstTime(::RealmEventId id, ::Player const& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Player const* _getActorFullyAuthenticatedPlayer(::Actor const*);
#else // @header-generator platform
    MCNAPI static ::Player const* _getActorFullyAuthenticatedPlayer(::Actor const* actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::set<std::string> _getXuidsInKillProximity(::Actor const&, float, float);
#else // @header-generator platform
    MCNAPI static ::std::set<::std::string> _getXuidsInKillProximity(::Actor const& killedActor, float xz, float y);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string _playerXuidsToString(std::set<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::string _playerXuidsToString(::std::set<::std::string> const& xuids);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const& actorAcquiredItemEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorAcquiredItemEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorKilledEvent const& actorKilledEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::ActorKilledEvent const&);
#else // @header-generator platform
    MCNAPI ::EventResult $onEvent(::PlayerUseNameTagEvent const& playerUseNameTagEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerMove(::Player&);
#else // @header-generator platform
    MCNAPI ::EventResult $onPlayerMove(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player&, ::DimensionType);
#else // @header-generator platform
    MCNAPI ::EventResult $onPlayerPortalBuilt(::Player& player, ::DimensionType dimensionBuiltIn);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPortalUsed(::Player&, ::DimensionType, ::DimensionType);
#else // @header-generator platform
    MCNAPI ::EventResult
    $onPlayerPortalUsed(::Player& player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const&, int);
#else // @header-generator platform
    MCNAPI ::EventResult $onPlayerPoweredBeacon(::Player const& player, int);
#endif // @header-generator platform

    MCNAPI ::EventResult $onPlayerCraftedItem(
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::Player&                   player,
        ::ItemInstance const&       craftedItem,
        bool                        recipeBook,
        bool                        hadSearchString,
        bool                        craftedAutomatically,
        int                         startingTabId,
        int                         endingTabId,
        int                         numTabsChanged,
        bool                        filterOn,
        bool                        recipeBookShown,
        ::std::vector<short> const& ingredientItemIDs
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onPlayerEnchantedItem(::Player&, ::ItemStack const&, ::ItemEnchants const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::EventResult
    $onPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
