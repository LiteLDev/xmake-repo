#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
class WorldClockRegistryServer;
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class TickTimeManagerServer : public ::TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                mWorldClockRegistry;
    ::ll::TypedStorage<8, 8, long>                             mLastTimePacketSent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserAdded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelDataSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnWakeUpAllPlayersSubscription;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk99654e;
    ::ll::UntypedStorage<8, 8>  mUnkb3ba6d;
    ::ll::UntypedStorage<8, 16> mUnkf6dd5a;
    ::ll::UntypedStorage<8, 16> mUnk787c63;
    ::ll::UntypedStorage<8, 16> mUnk10fd1f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TickTimeManagerServer& operator=(TickTimeManagerServer const&);
    TickTimeManagerServer(TickTimeManagerServer const&);
#endif // @header-generator platform
    TickTimeManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TickTimeManagerServer();
#else // @header-generator platform
    virtual ~TickTimeManagerServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void update();
#else // @header-generator platform
    virtual void update() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const getWorldClockRegistry();
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const getWorldClockRegistry() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickTimeManagerServer(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>> const&,
        ::cereal::ReflectionCtx&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>> const&
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::LevelData> const&    levelData,
        ::cereal::ReflectionCtx&                             ctx,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const& packetSender
#endif // @header-generator platform
    );

    MCNAPI void _onWakeUpAllPlayers();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _saveWorldClocks(::LevelStorage&) const;
#else // @header-generator platform
    MCNAPI void _saveWorldClocks(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistryServer>> const getWorldClockRegistryServer();
#else // @header-generator platform
    MCNAPI void
    intitializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void intitializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector&);
#else // @header-generator platform
    MCNAPI void loadWorldClocks(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadWorldClocks(::LevelStorage&);
#else // @header-generator platform
    MCNAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerForGameplayUserManagerEvents(::IGameplayUserManagerConnector&);

    MCNAPI void registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector&);
#else // @header-generator platform
    MCNAPI void
    registerForPlayerSleepManagerEvents(::IServerPlayerSleepManagerConnector& serverPlayerSleepManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>> const&,
        ::cereal::ReflectionCtx&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>> const&
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::LevelData> const&    levelData,
        ::cereal::ReflectionCtx&                             ctx,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const& packetSender
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const $getWorldClockRegistry();
#else // @header-generator platform
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const $getWorldClockRegistry() const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const $getWorldClockRegistry();
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
