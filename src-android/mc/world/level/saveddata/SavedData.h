#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class SavedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mDirty;
    ::ll::TypedStorage<8, 24, std::string> mId;
    // NOLINTEND

public:
    // prevent constructor by default
    SavedData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SavedData();

    virtual void deserialize(::CompoundTag const&) = 0;

    virtual void serialize(::CompoundTag&) const = 0;
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
