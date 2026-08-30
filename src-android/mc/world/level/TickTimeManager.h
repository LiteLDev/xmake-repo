#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PacketSender;
class WorldClockRegistry;
// clang-format on

class TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                           mLevelData;
    ::ll::UntypedStorage<8, 24>                                           mPacketSender;
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>> mWorldClockSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~TickTimeManager();

    virtual void update();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const getWorldClockRegistry() = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _initializeVanillaWorldClocks();

    MCNAPI void incrementCurrentTick();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
