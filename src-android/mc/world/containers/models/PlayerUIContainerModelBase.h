#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerCategory.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class PlayerUIContainerModelBase : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerUIContainerModelBase& operator=(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase(PlayerUIContainerModelBase const&);
    PlayerUIContainerModelBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerUIContainerModelBase();

    virtual void containerContentChanged(int);

    virtual void postInit();

    virtual void releaseResources();

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual bool isValid();

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
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

    MCNAPI void $postInit();

    MCNAPI void $releaseResources();

    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;

    MCNAPI bool $isValid();

    MCNAPI ::Container* $_getContainer() const;

    MCNAPI int $_getContainerOffset() const;

    MCNAPI void $_onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
