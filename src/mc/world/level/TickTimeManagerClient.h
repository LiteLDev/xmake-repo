#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/TickTimeManager.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PacketSender;
class WorldClockRegistry;
class WorldClockRegistryClient;
// clang-format on

class TickTimeManagerClient : public ::TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mWorldClockRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManagerClient();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const getWorldClockRegistry();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const getWorldClockRegistry() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TickTimeManagerClient(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<PacketSender>> const&
    );

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistryClient>> const getWorldClockRegistryClient();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelData>> const&,
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
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<WorldClockRegistry>> const $getWorldClockRegistry();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const WorldClockRegistry>> const $getWorldClockRegistry() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TickTimeManagerClient {};
#endif // @header-generator platform
