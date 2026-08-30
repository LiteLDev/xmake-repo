#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // prevent constructor by default
    PlayerUIContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerUIContainerModel();

    virtual int _getContainerOffset() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $_getContainerOffset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
