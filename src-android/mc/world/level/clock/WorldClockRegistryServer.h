#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/clock/WorldClock.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LevelData;
class LevelStorage;
class NetworkIdentifier;
class PacketSender;
class TimeMarker;
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mCerealContext;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockRegistryServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryServer();

    virtual void tick(::PacketSender&, ::LevelData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldClockRegistryServer(::cereal::ReflectionCtx&);

    MCNAPI bool loadData(::LevelStorage const&);

    MCNAPI void saveData(::LevelStorage&) const;

    MCNAPI void sendInitializationToClient(::NetworkIdentifier const&, ::SubClientId, ::PacketSender&) const;

    MCNAPI void syncClocksWithClients(::PacketSender&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<WorldClock> const tryGetClock(::HashedString const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::PacketSender&, ::LevelData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
