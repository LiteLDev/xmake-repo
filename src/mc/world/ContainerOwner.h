#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
// clang-format on

struct ContainerOwner {
public:
    // ContainerOwner inner types declare
    // clang-format off
    class OwnedContainer;
    // clang-format on

    // ContainerOwner inner types define
    class OwnedContainer {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<ContainerModel>> mContainerModel;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerModel>> mContainerModel;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        OwnedContainer();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~OwnedContainer();
#else // @header-generator platform
        MCAPI ~OwnedContainer();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ContainerOwner::OwnedContainer>> mOwnedContainers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ContainerOwner::OwnedContainer>> mOwnedContainers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerOwner();
#else // @header-generator platform
#endif // @header-generator platform
};
