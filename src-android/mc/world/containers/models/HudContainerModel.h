#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class Player;
// clang-format on

class HudContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&);
    HudContainerModel(HudContainerModel const&);
    HudContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudContainerModel();

    virtual void containerContentChanged(int);

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual bool isValid();

    virtual ::Container* _getContainer() const;

    virtual void _init();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $containerContentChanged(int);

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI bool $isValid();

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI void $_init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
