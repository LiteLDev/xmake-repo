#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class CraftingInputUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mWorkBench;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingInputUIContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingInputUIContainerModel();

    virtual int _getContainerOffset() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftingInputUIContainerModel(::ContainerEnumName, ::Player&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerEnumName, ::Player&, bool);
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
