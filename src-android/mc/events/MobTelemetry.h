#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class MobTelemetry {
public:
    // MobTelemetry inner types declare
    // clang-format off
    struct MobSpawnData;
    struct MobDeathData;
    struct MobItemData;
    // clang-format on

    // MobTelemetry inner types define
    struct MobSpawnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> nameSpace;
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<1, 1, bool>         isBaby;
        ::ll::TypedStorage<8, 24, std::string> reason;
        ::ll::TypedStorage<8, 24, std::string> method;
        ::ll::TypedStorage<8, 24, std::string> spawnerNamespace;
        ::ll::TypedStorage<8, 24, std::string> spawnerName;
        ::ll::TypedStorage<4, 4, uint>         spawnCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobSpawnData& operator=(MobSpawnData const&);
        MobSpawnData(MobSpawnData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MobSpawnData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MobDeathData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> nameSpace;
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 24, std::string> causeOfDeath;
        ::ll::TypedStorage<1, 1, bool>         isTame;
        ::ll::TypedStorage<1, 1, bool>         isBaby;
        ::ll::TypedStorage<1, 1, bool>         hadPassenger;
        ::ll::TypedStorage<4, 4, uint>         deathCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobDeathData& operator=(MobDeathData const&);
        MobDeathData(MobDeathData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MobDeathData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct MobItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mobNamespace;
        ::ll::TypedStorage<8, 24, std::string> mobName;
        ::ll::TypedStorage<8, 24, std::string> itemNamespace;
        ::ll::TypedStorage<8, 24, std::string> itemName;
        ::ll::TypedStorage<4, 4, uint>         stackSize;
        ::ll::TypedStorage<4, 4, uint>         count;
        // NOLINTEND

    public:
        // prevent constructor by default
        MobItemData& operator=(MobItemData const&);
        MobItemData(MobItemData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~MobItemData();
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
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mlastSent;
    ::ll::UntypedStorage<8, 88> mMobsSpawned;
    ::ll::UntypedStorage<8, 88> mMobsDied;
    ::ll::UntypedStorage<8, 88> mMobsPickedUpItems;
    ::ll::UntypedStorage<8, 96> mMobsDroppedItems;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onMobDied(std::string const&, std::string const&, std::string const&, bool, bool, bool);

    MCNAPI void onMobDroppedItem(std::string const&, std::string const&, std::string const&, std::string const&, uint);

    MCNAPI void onMobPickedUpItem(std::string const&, std::string const&, std::string const&, std::string const&, uint);

    MCNAPI ~MobTelemetry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
