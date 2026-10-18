#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/registry/ItemRegistryRef.h"

// auto generated forward declare list
// clang-format off
class ItemRegistry;
// clang-format on

class ItemRegistryManager {
public:
    // ItemRegistryManager inner types declare
    // clang-format off
    class ScopedItemRegistry;
    // clang-format on

    // ItemRegistryManager inner types define
    class ScopedItemRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>               mIsSet;
        ::ll::TypedStorage<8, 16, ::ItemRegistryRef> mPreviousRegistry;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        // prevent constructor by default
        ScopedItemRegistry();

    public:
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit ScopedItemRegistry(::ItemRegistryRef const);
#else // @header-generator platform
        MCAPI explicit ScopedItemRegistry(::std::weak_ptr<::ItemRegistry> registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit ScopedItemRegistry(std::weak_ptr<ItemRegistry> const);
#else // @header-generator platform
        MCAPI void _reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void _reset();
#else // @header-generator platform
        MCAPI void construct(::ItemRegistryRef registryRef);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void construct(::ItemRegistryRef const);

        MCNAPI void construct(std::weak_ptr<ItemRegistry> const);

        MCNAPI ~ScopedItemRegistry();
#else // @header-generator platform
        MCAPI ~ScopedItemRegistry();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::ItemRegistryRef const);

        MCNAPI void* $ctor(std::weak_ptr<ItemRegistry> const);
#else // @header-generator platform
        MCAPI void* $ctor(::std::weak_ptr<::ItemRegistry> registry);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ItemRegistryRef getItemRegistry();
#else // @header-generator platform
    MCAPI static ::ItemRegistryRef getItemRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::weak_ptr<ItemRegistry>& mThreadLocalRegistry();
#else // @header-generator platform
    MCAPI static ::std::weak_ptr<::ItemRegistry>& mThreadLocalRegistry();
#endif // @header-generator platform
    // NOLINTEND
};
