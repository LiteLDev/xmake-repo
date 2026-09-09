#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ISparseContainerSetListener.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class ItemStackNetManagerClient;
// clang-format on

class SparseContainerSetListenerClient : public ::ISparseContainerSetListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient&> mItemStackNetManager;
    // NOLINTEND

public:
    // prevent constructor by default
    SparseContainerSetListenerClient& operator=(SparseContainerSetListenerClient const&);
    SparseContainerSetListenerClient(SparseContainerSetListenerClient const&);
    SparseContainerSetListenerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SparseContainerSetListenerClient();

    virtual void preSetItem(::Container*, int, bool, ::ItemStack*);

    virtual bool postSetItem(::Container*, ::ItemStack&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SparseContainerSetListenerClient(::ItemStackNetManagerClient&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackNetManagerClient&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preSetItem(::Container*, int, bool, ::ItemStack*);

    MCNAPI bool $postSetItem(::Container*, ::ItemStack&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
