#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class SavedData;
// clang-format on

class SavedDataStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                              levelStorage;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SavedData*>> savedDatas;
    // NOLINTEND

public:
    // prevent constructor by default
    SavedDataStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SavedDataStorage();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _save(::SavedData const&);

    MCNAPI bool loadAndSet(::SavedData&, std::string const&);

    MCNAPI void set(std::string const&, ::SavedData&);
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
