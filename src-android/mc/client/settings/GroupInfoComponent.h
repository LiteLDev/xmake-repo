#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/Component.h"
#include "mc/client/settings/ComponentState.h"

namespace Settings {

class GroupInfoComponent : public ::Settings::Component<Settings::GroupInfoComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mFlushCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    GroupInfoComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GroupInfoComponent();

    virtual ::Settings::ComponentState getDefaultState() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool flush();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Settings::ComponentState $getDefaultState() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
