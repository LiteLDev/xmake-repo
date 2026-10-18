#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ItemSpecialLocation.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct AutoPlaceResult;
// clang-format on

struct ItemTransferRequest {
public:
    // ItemTransferRequest inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ItemTransferRequest inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 32, ::SlotData> mSlot;
        ::ll::TypedStorage<4, 4, int>         mAmount;
        ::ll::TypedStorage<4, 4, int>         mGroup;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 40> mUnkd2b85b;
        ::ll::UntypedStorage<4, 4>  mUnk53d560;
        ::ll::UntypedStorage<4, 4>  mUnk120630;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemTransferRequest::Entry>> mInputs;
    ::ll::TypedStorage<8, 24, std::vector<ItemTransferRequest::Entry>> mOutputs;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk83539b;
    ::ll::UntypedStorage<8, 24> mUnke68a94;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemTransferRequest& operator=(ItemTransferRequest const&);
    ItemTransferRequest(ItemTransferRequest const&);
    ItemTransferRequest();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addOutputsAsDestinations(std::vector<AutoPlaceResult>&) const;

    MCNAPI int getInputAmount() const;

    MCNAPI int getOutputAmount() const;

    MCNAPI ~ItemTransferRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _addOutputsAsDestinations(::std::vector<::AutoPlaceResult>& destinations) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};
