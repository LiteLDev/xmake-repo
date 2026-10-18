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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SparseContainerSetListenerClient();
#else // @header-generator platform
    virtual ~SparseContainerSetListenerClient() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void preSetItem(::Container*, int, bool, ::ItemStack*);
#else // @header-generator platform
    virtual void preSetItem(::Container* container, int slot, bool isEmptyItem, ::ItemStack* item) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual bool postSetItem(::Container* container, ::ItemStack& item) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $preSetItem(::Container*, int, bool, ::ItemStack*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $preSetItem(::Container* container, int slot, bool isEmptyItem, ::ItemStack* item);

    MCNAPI bool $postSetItem(::Container* container, ::ItemStack& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $postSetItem(::Container*, ::ItemStack&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
