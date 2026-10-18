#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/clock/WorldClock.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class HashedString;
class LevelData;
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
class TimeMarker;
#else // @header-generator platform
class WorldClock;
#endif // @header-generator platform
struct WorldClockData;
// clang-format on

class WorldClockRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mClocks;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::UniqueOwnerPointer<::WorldClock>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::UniqueOwnerPointer<::WorldClock>>>>
        mClocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistry();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::PacketSender&, ::LevelData const&) = 0;
#else // @header-generator platform
    virtual void tick(::PacketSender& packetSender, ::LevelData const& levelData) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<WorldClock> const _tryGetClock(::HashedString const&);
#else // @header-generator platform
    MCFOLD ::Bedrock::NonOwnerPointer<::WorldClock> const _tryGetClock(::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getTime(::HashedString const&) const;
#else // @header-generator platform
    MCAPI int getTime(::HashedString const& clockName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setTime(::HashedString const&, int);
#else // @header-generator platform
    MCAPI void setTime(::HashedString const& clockName, int time);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<WorldClockData> toData() const;
#else // @header-generator platform
    MCAPI ::std::vector<::WorldClockData> toData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const WorldClock> const tryGetClock(::HashedString const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& MAX_CLOCKS_CAPACITY();
#else // @header-generator platform
    MCFOLD ::Bedrock::NonOwnerPointer<::WorldClock const> const tryGetClock(::HashedString const& name) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
