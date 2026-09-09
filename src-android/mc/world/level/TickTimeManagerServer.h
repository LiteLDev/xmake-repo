#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/TickTimeManager.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
class ILevelStorageManagerConnector;
class IServerPlayerSleepManagerConnector;
class LevelData;
class LevelStorage;
class PacketSender;
class WorldClockRegistry;
class WorldClockRegistryServer;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TickTimeManagerServer : public ::TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                mWorldClockRegistry;
    ::ll::TypedStorage<8, 8, long>                             mLastTimePacketSent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWakeUpAllPlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManagerServer();

    virtual void update();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const getWorldClockRegistry();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickTimeManagerServer(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>> const&,
        ::cereal::ReflectionCtx&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>> const&
    );

    MCNAPI void _onWakeUpAllPlayers();

    MCNAPI void _saveWorldClocks(::LevelStorage&) const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistryServer>> const getWorldClockRegistryServer();

    MCNAPI void intitializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);

    MCNAPI void loadWorldClocks(::LevelStorage&);

    MCNAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector&);

    MCNAPI void registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>> const&,
        ::cereal::ReflectionCtx&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const $getWorldClockRegistry();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const $getWorldClockRegistry() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
