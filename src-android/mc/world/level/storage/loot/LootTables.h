#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootTable;
class ResourcePackManager;
// clang-format on

class LootTables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<LootTable>>> mLootTables;
    ::ll::TypedStorage<4, 40, std::mutex>                                                  mLootTableMutex;
    ::ll::TypedStorage<1, 1, bool const> mUsingUpcomingCreatorFeaturesExperiment;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTables();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LootTables(bool);

    MCNAPI ::LootTable* lookupByName(std::string const&, ::ResourcePackManager&);

    MCNAPI ~LootTables();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
