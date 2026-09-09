#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/inventory/ActorContainerType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class Container;
struct ContainerWeakRefData;
// clang-format on

class ContainerWeakRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>           mContainerActor;
    ::ll::TypedStorage<4, 4, ::ActorContainerType>      mActorContainerType;
    ::ll::TypedStorage<4, 12, ::BlockPos>               mBlockPosition;
    ::ll::UntypedStorage<4, 8>                          mContainerRuntimeId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Container>> mWeakContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerWeakRef& operator=(ContainerWeakRef const&);

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
