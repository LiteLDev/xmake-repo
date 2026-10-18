#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

class MobTelemetry {
public:
    // MobTelemetry inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct MobSpawnData;
#else // @header-generator platform
#endif // @header-generator platform
    struct MobDeathData;
    struct MobItemData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MobSpawnData;
    struct nowFunc;
#endif // @header-generator platform
    // clang-format on

    // MobTelemetry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct MobDeathData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> nameSpace;
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 24, std::string> causeOfDeath;
        ::ll::TypedStorage<1, 1, bool>         isTame;
        ::ll::TypedStorage<1, 1, bool>         isBaby;
        ::ll::TypedStorage<1, 1, bool>         hadPassenger;
        ::ll::TypedStorage<4, 4, uint>         deathCount;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk999eac;
        ::ll::UntypedStorage<8, 32> mUnkcae677;
        ::ll::UntypedStorage<8, 32> mUnk648df8;
        ::ll::UntypedStorage<1, 1>  mUnkf8ba95;
        ::ll::UntypedStorage<1, 1>  mUnk26b5ab;
        ::ll::UntypedStorage<1, 1>  mUnk4dd58e;
        ::ll::UntypedStorage<4, 4>  mUnk278457;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        MobDeathData& operator=(MobDeathData const&);
        MobDeathData(MobDeathData const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
        MobDeathData();
#endif // @header-generator platform
    };

    struct MobItemData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mobNamespace;
        ::ll::TypedStorage<8, 24, std::string> mobName;
        ::ll::TypedStorage<8, 24, std::string> itemNamespace;
        ::ll::TypedStorage<8, 24, std::string> itemName;
        ::ll::TypedStorage<4, 4, uint>         stackSize;
        ::ll::TypedStorage<4, 4, uint>         count;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkfacb8a;
        ::ll::UntypedStorage<8, 32> mUnk369bb2;
        ::ll::UntypedStorage<8, 32> mUnkb811c4;
        ::ll::UntypedStorage<8, 32> mUnkab78ef;
        ::ll::UntypedStorage<4, 4>  mUnkbf8152;
        ::ll::UntypedStorage<4, 4>  mUnk1b8f5f;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        MobItemData& operator=(MobItemData const&);
        MobItemData(MobItemData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        MobItemData();
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct MobSpawnData {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~MobItemData();
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk9dbec1;
        ::ll::UntypedStorage<8, 32> mUnke877c6;
        ::ll::UntypedStorage<1, 1>  mUnkf371d3;
        ::ll::UntypedStorage<8, 32> mUnk206aee;
        ::ll::UntypedStorage<8, 32> mUnk38f497;
        ::ll::UntypedStorage<8, 32> mUnk91534b;
        ::ll::UntypedStorage<8, 32> mUnk848ac4;
        ::ll::UntypedStorage<4, 4>  mUnk52c416;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        // prevent constructor by default
        MobSpawnData& operator=(MobSpawnData const&);
        MobSpawnData(MobSpawnData const&);
        MobSpawnData();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    struct nowFunc {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mlastSent;
    ::ll::UntypedStorage<8, 88> mMobsSpawned;
    ::ll::UntypedStorage<8, 88> mMobsDied;
    ::ll::UntypedStorage<8, 88> mMobsPickedUpItems;
    ::ll::UntypedStorage<8, 96> mMobsDroppedItems;
    ::ll::UntypedStorage<8, 48> nowFunc;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk4ffe85;
    ::ll::UntypedStorage<8, 128> mUnk37be35;
    ::ll::UntypedStorage<8, 128> mUnk54b273;
    ::ll::UntypedStorage<8, 128> mUnk27fe54;
    ::ll::UntypedStorage<8, 128> mUnk9afd7f;
    ::ll::UntypedStorage<8, 64>  mUnk268af8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MobTelemetry& operator=(MobTelemetry const&);
    MobTelemetry(MobTelemetry const&);
    MobTelemetry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onMobDied(std::string const&, std::string const&, std::string const&, bool, bool, bool);

    MCNAPI void onMobDroppedItem(std::string const&, std::string const&, std::string const&, std::string const&, uint);

    MCNAPI void onMobPickedUpItem(std::string const&, std::string const&, std::string const&, std::string const&, uint);

    MCNAPI ~MobTelemetry();
#else // @header-generator platform
    MCNAPI void onMobDied(
        ::std::string const& nameSpace,
        ::std::string const& name,
        ::std::string const& causeOfDeath,
        bool                 isTame,
        bool                 isBaby,
        bool                 hadPassenger
    );
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static void onMobDroppedItem(
        ::std::string const& mobNamespace,
        ::std::string const& mobName,
        ::std::string const& itemNamespace,
        ::std::string const& itemName,
        uint                 stackSize
    );

    MCNAPI static void onMobPickedUpItem(
        ::std::string const& mobNamespace,
        ::std::string const& mobName,
        ::std::string const& itemNamespace,
        ::std::string const& itemName,
        uint                 stackSize
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events
