#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/inventory/ActorContainerType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class Container;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ContainerRuntimeIdTag;
#endif // @header-generator platform
struct ContainerWeakRefData;
// clang-format on

class ContainerWeakRef {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mContainerActor;
    ::ll::TypedStorage<4, 4, ::ActorContainerType>      mActorContainerType;
    ::ll::TypedStorage<4, 12, ::BlockPos>               mBlockPosition;
    ::ll::UntypedStorage<4, 8>                          mContainerRuntimeId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Container>> mWeakContainer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mContainerActor;
    ::ll::TypedStorage<4, 4, ::ActorContainerType>          mActorContainerType;
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPosition;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId>          mContainerRuntimeId;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Container>> mWeakContainer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerWeakRef& operator=(ContainerWeakRef const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerWeakRef();

    MCNAPI explicit ContainerWeakRef(std::weak_ptr<Container>);

    MCNAPI ContainerWeakRef(::BlockPos const&, ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&);

    MCNAPI ContainerWeakRef(
        ::ActorUniqueID const&,
        ::ActorContainerType,
        ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&
    );

    MCNAPI explicit operator bool() const;

    MCNAPI ~ContainerWeakRef();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::weak_ptr<Container>);

    MCNAPI void* $ctor(::BlockPos const&, ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&);

    MCNAPI void*
    $ctor(::ActorUniqueID const&, ::ActorContainerType, ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ContainerWeakRefData tryGetContainer(::BlockSource& region) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};
