#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/clock/WorldClock.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class LevelData;
class LevelStorage;
class NetworkIdentifier;
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class TimeMarker;
#else // @header-generator platform
class WorldClock;
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WorldClockRegistryServer : public ::WorldClockRegistry {
public:
    // WorldClockRegistryServer inner types declare
    // clang-format off
    struct WorldClockRegistryData;
    // clang-format on

    // WorldClockRegistryServer inner types define
    struct WorldClockRegistryData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<WorldClock>> mClocks;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~WorldClockRegistryData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::WorldClock>> mClocks;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mCerealContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::cereal::ReflectionCtx>> mCerealContext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockRegistryServer();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorldClockRegistryServer();
#else // @header-generator platform
    virtual ~WorldClockRegistryServer() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::PacketSender&, ::LevelData const&);
#else // @header-generator platform
    virtual void tick(::PacketSender& packetSender, ::LevelData const& levelData) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit WorldClockRegistryServer(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI explicit WorldClockRegistryServer(::cereal::ReflectionCtx& cerealContext);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool loadData(::LevelStorage const&);
#else // @header-generator platform
    MCAPI bool loadData(::LevelStorage const& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void saveData(::LevelStorage&) const;
#else // @header-generator platform
    MCAPI void saveData(::LevelStorage& levelStorage) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void sendInitializationToClient(::NetworkIdentifier const&, ::SubClientId, ::PacketSender&) const;
#else // @header-generator platform
    MCAPI void sendInitializationToClient(
        ::NetworkIdentifier const& source,
        ::SubClientId              subClientId,
        ::PacketSender&            packetSender
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void syncClocksWithClients(::PacketSender&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<WorldClock> const tryGetClock(::HashedString const&);
#else // @header-generator platform
    MCAPI void syncClocksWithClients(::PacketSender& packetSender) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::ReflectionCtx& cerealContext);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick(::PacketSender&, ::LevelData const&);
#else // @header-generator platform
    MCAPI void $tick(::PacketSender& packetSender, ::LevelData const& levelData);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
