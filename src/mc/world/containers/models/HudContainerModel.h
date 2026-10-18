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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerModel& operator=(HudContainerModel const&);
    HudContainerModel(HudContainerModel const&);
    HudContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HudContainerModel();
#else // @header-generator platform
    virtual ~HudContainerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void containerContentChanged(int);
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
    virtual ::Container* _getContainer() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _init();
#else // @header-generator platform
    virtual void _init() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI HudContainerModel(::ContainerEnumName containerName, ::Player& player);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::ContainerEnumName containerName, ::Player& player);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $containerContentChanged(int);
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
    MCFOLD ::ContainerWeakRef $getContainerWeakRef() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Container* $_getContainer() const;
#else // @header-generator platform
    MCFOLD ::Container* $_getContainer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_init();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_init();
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
