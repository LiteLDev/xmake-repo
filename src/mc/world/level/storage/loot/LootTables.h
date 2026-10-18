#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class LootTable;
class ResourcePackManager;
// clang-format on

class LootTables {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<LootTable>>> mLootTables;
    ::ll::TypedStorage<4, 40, std::mutex>                                                  mLootTableMutex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LootTable>>> mLootTables;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                         mLootTableMutex;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const> mUsingUpcomingCreatorFeaturesExperiment;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    LootTables();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LootTables(bool);
#else // @header-generator platform
    MCAPI ::LootTable* lookupByName(::std::string const& dir, ::ResourcePackManager& resourceLoader);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::LootTable* lookupByName(std::string const&, ::ResourcePackManager&);

    MCNAPI ~LootTables();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCAPI ~LootTables();
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
};
