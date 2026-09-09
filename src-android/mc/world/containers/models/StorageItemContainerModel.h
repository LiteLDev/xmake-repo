#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerModel.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerWeakRef;
class ItemStack;
class StorageItemComponent;
class StorageWeightLimitItemComponent;
struct FullContainerName;
// clang-format on

class StorageItemContainerModel : public ::ContainerModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StorageItemComponent const*>            mStorageItemComponent;
    ::ll::TypedStorage<8, 8, ::StorageWeightLimitItemComponent const*> mStorageWeightLimitComponent;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Container>>                mContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageItemContainerModel();

    virtual void containerContentChanged(int);

    virtual void postInit();

    virtual ::ContainerWeakRef getContainerWeakRef() const;

    virtual bool isValid();

    virtual ::Container* _getContainer() const;

    virtual int _getContainerOffset() const;

    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageItemContainerModel(
        ::FullContainerName const&,
        std::shared_ptr<Container>,
        bool,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
    );

    MCNAPI ::StorageItemComponent const* getStorageItemComponent() const;

    MCNAPI ::StorageWeightLimitItemComponent const* getStorageWeightLimitComponent() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::FullContainerName const&,
        std::shared_ptr<Container>,
        bool,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
    );
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
