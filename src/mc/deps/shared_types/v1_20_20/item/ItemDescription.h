#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                       mIdentifier;
    ::ll::TypedStorage<8, 56, std::optional<SharedTypes::v1_20_20::ItemMenuCategory>> mCategory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<10>>                              mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_20_20::ItemMenuCategory>> mCategory;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemDescription();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDescription(::SharedTypes::v1_20_20::ItemDescription const&);
#else // @header-generator platform
    MCAPI ItemDescription(::SharedTypes::v1_20_20::ItemDescription const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ItemDescription();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_20_20::ItemDescription& operator=(::SharedTypes::v1_20_20::ItemDescription const&);

    MCAPI ~ItemDescription();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_20::ItemDescription const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_20::ItemDescription const&);
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

} // namespace SharedTypes::v1_20_20
