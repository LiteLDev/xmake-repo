#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_20/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_20_40/item/ItemDeprecatedComponentData.h"
#include "mc/world/item/components/ComponentItemComponentData_v1_20_40.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_30;
namespace Puv { template<typename T0, typename T1, typename T2> class CerealUpgrader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SharedTypes::v1_20_20::ItemDescription>              mDescription;
    ::ll::UntypedStorage<8, 1640>                                                    mItemComponents;
    ::ll::TypedStorage<8, 672, ::SharedTypes::v1_20_40::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ComponentItemData_v1_20_40();
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
