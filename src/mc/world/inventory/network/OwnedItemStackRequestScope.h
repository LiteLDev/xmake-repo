#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/world/inventory/network/ItemStackRequestScreen.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class ItemStackNetManagerClient;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestAction;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestData;
// clang-format on

struct OwnedItemStackRequestScope {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient*>           mItemStackNetManagerClient;
    ::ll::TypedStorage<1, 1, bool>                                   mBeganRequest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ItemStackRequestData>> mResult;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerClient*>               mItemStackNetManagerClient;
    ::ll::TypedStorage<1, 1, bool>                                       mBeganRequest;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ItemStackRequestData>> mResult;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OwnedItemStackRequestScope();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OwnedItemStackRequestScope(
        ::ItemStackNetManagerClient&,
        std::shared_ptr<ItemStackRequestData>,
        ::ItemStackRequestScreen
    );

    MCNAPI void addRequestAction(std::unique_ptr<ItemStackRequestAction>) const;

    MCNAPI ~OwnedItemStackRequestScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackNetManagerClient&, std::shared_ptr<ItemStackRequestData>, ::ItemStackRequestScreen);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~OwnedItemStackRequestScope();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
