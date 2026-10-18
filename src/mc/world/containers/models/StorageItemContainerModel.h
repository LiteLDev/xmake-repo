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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<Container>>                mContainer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>>            mContainer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StorageItemContainerModel();
#else // @header-generator platform
    virtual ~StorageItemContainerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
#else // @header-generator platform
    virtual void postInit() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postInit();
#else // @header-generator platform
    virtual void containerContentChanged(int slot) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerWeakRef getContainerWeakRef() const;
#else // @header-generator platform
    virtual bool isValid() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid();
#else // @header-generator platform
    virtual ::ContainerWeakRef getContainerWeakRef() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Container* _getContainer() const;
#else // @header-generator platform
    virtual int _getContainerOffset() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int _getContainerOffset() const;
#else // @header-generator platform
    virtual void _onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
#else // @header-generator platform
    virtual ::Container* _getContainer() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StorageItemContainerModel(
        ::FullContainerName const&,
        std::shared_ptr<Container>,
        bool,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
#else // @header-generator platform
    MCAPI StorageItemContainerModel(
        ::FullContainerName const&         name,
        ::std::shared_ptr<::Container>     container,
        bool                               isClientSide,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ::StorageItemComponent const* getStorageItemComponent() const;

    MCNAPI ::StorageWeightLimitItemComponent const* getStorageWeightLimitComponent() const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::FullContainerName const&,
        std::shared_ptr<Container>,
        bool,
        ::StorageItemComponent*,
        ::StorageWeightLimitItemComponent*
#else // @header-generator platform
    MCAPI void* $ctor(
        ::FullContainerName const&         name,
        ::std::shared_ptr<::Container>     container,
        bool                               isClientSide,
        ::StorageItemComponent*            storageItemComponent,
        ::StorageWeightLimitItemComponent* storageWeightLimitItemComponent
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerContentChanged(int);
#else // @header-generator platform
    MCAPI void $postInit();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postInit();
#else // @header-generator platform
    MCAPI void $containerContentChanged(int slot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerWeakRef $getContainerWeakRef() const;
#else // @header-generator platform
    MCFOLD bool $isValid();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid();
#else // @header-generator platform
    MCAPI ::ContainerWeakRef $getContainerWeakRef() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $_getContainer() const;
#else // @header-generator platform
    MCFOLD int $_getContainerOffset() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $_getContainerOffset() const;
#else // @header-generator platform
    MCFOLD void $_onItemChanged(int modelSlot, ::ItemStack const& oldItem, ::ItemStack const& newItem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onItemChanged(int, ::ItemStack const&, ::ItemStack const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Container* $_getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
