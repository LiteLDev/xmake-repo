#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/clock/WorldClock.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LevelData;
class PacketSender;
class TimeMarker;
struct WorldClockData;
// clang-format on

class WorldClockRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mClocks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistry();

    virtual void tick(::PacketSender&, ::LevelData const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<WorldClock> const _tryGetClock(::HashedString const&);

    MCNAPI int getTime(::HashedString const&) const;

    MCNAPI void setTime(::HashedString const&, int);

    MCNAPI std::vector<WorldClockData> toData() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const WorldClock> const tryGetClock(::HashedString const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_CLOCKS_CAPACITY();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
