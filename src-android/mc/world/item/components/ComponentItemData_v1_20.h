#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_0/item/ItemDescription.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_20_0::ItemDescription> mDescription;
    ::ll::UntypedStorage<8, 24>                                        mItemComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ComponentItemData_v1_20();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
