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
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit ScopedItemRegistry(::ItemRegistryRef const);

        MCNAPI explicit ScopedItemRegistry(std::weak_ptr<ItemRegistry> const);

        MCNAPI void _reset();

        MCNAPI void construct(::ItemRegistryRef const);

        MCNAPI void construct(std::weak_ptr<ItemRegistry> const);

        MCNAPI ~ScopedItemRegistry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ItemRegistryRef const);

        MCNAPI void* $ctor(std::weak_ptr<ItemRegistry> const);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemRegistryRef getItemRegistry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::weak_ptr<ItemRegistry>& mThreadLocalRegistry();
    // NOLINTEND
};
