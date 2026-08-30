#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_20_20/item/ItemMenuCategory.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_20 {

struct ItemDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                       mIdentifier;
    ::ll::TypedStorage<8, 56, std::optional<SharedTypes::v1_20_20::ItemMenuCategory>> mCategory;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemDescription(::SharedTypes::v1_20_20::ItemDescription const&);

    MCNAPI ~ItemDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_20::ItemDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_20
