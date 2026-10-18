#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class Player;
// clang-format on

class OffhandContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    OffhandContainerModel& operator=(OffhandContainerModel const&);
    OffhandContainerModel(OffhandContainerModel const&);
    OffhandContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OffhandContainerModel();

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
    // member functions
    // NOLINTBEGIN
    MCNAPI OffhandContainerModel(::ContainerEnumName, int, ::Player&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerEnumName, int, ::Player&);
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
#else // @header-generator platform
class OffhandContainerModel {};
#endif // @header-generator platform
