#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOutput;
class ItemInstance;
// clang-format on

class CommandItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mField_5940acc2;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandItem();

    MCNAPI ::ItemInstance createInstance(int) const;

    MCNAPI std::optional<ItemInstance> createInstance(int, int, ::CommandOutput&, bool) const;

    MCNAPI int getId() const;

    MCNAPI explicit operator bool() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
