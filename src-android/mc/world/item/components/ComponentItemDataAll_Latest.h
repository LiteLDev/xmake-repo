#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ComponentItemData.h"
#include "mc/world/item/components/ComponentItemData_v1_26_0.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ComponentItemDataAll_Latest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 2072, ::ComponentItemData_v1_26_0>             mCerealData;
    ::ll::TypedStorage<8, 240, ::SharedTypes::Legacy::ComponentItemData> mLegacyData;
    ::ll::UntypedStorage<8, 24>                                          mEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ComponentItemDataAll_Latest(::ComponentItemDataAll_Latest&&);

    MCNAPI ~ComponentItemDataAll_Latest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemDataAll_Latest&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
