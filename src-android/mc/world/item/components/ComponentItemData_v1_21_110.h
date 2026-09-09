#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_21_90/item/ComponentItemComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_21_90;
namespace Puv { template<typename T0, typename T1, typename T2> class CerealUpgrader; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_21_110 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::TypedStorage<8, 1240, ::SharedTypes::v1_21_90::ComponentItemComponentData> mItemComponents;
    ::ll::TypedStorage<8, 760, ::SharedTypes::v1_20_50::ItemDeprecatedComponentData> mDeprecatedItemComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ComponentItemData_v1_21_110();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
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
