#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/triggers/BlockTriggerDescription.h"
#include "mc/world/level/block/components/triggers/OnPlacedTrigger.h"

class OnPlacedTriggerDescription : public ::BlockTriggerDescription<OnPlacedTrigger> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlacedTriggerDescription();

    virtual std::string const& getName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
