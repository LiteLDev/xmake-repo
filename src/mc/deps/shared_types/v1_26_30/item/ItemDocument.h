#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ComponentItemData.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_26_30/item/ItemComponents.h"
#include "mc/deps/shared_types/v1_26_30/item/ItemDeprecatedComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct ItemDocument {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_30::ItemComponents>               mComponents;
    ::ll::TypedStorage<8, 920, ::SharedTypes::v1_26_30::ItemDeprecatedComponentData> mDeprecatedComponentData;
    ::ll::TypedStorage<8, 240, ::SharedTypes::Legacy::ComponentItemData>             mLegacyData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_21_110::ItemDescription>              mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_30::ItemComponents>                mComponents;
    ::ll::TypedStorage<8, 1048, ::SharedTypes::v1_26_30::ItemDeprecatedComponentData> mDeprecatedComponentData;
    ::ll::TypedStorage<8, 264, ::SharedTypes::Legacy::ComponentItemData>              mLegacyData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemDocument& operator=(ItemDocument const&);
    ItemDocument();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDocument(::SharedTypes::v1_26_30::ItemDocument const&);
#else // @header-generator platform
    MCAPI ItemDocument(::SharedTypes::v1_26_30::ItemDocument&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemDocument(::SharedTypes::v1_26_30::ItemDocument&&);
#else // @header-generator platform
    MCAPI ItemDocument(::SharedTypes::v1_26_30::ItemDocument const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_30::ItemDocument& operator=(::SharedTypes::v1_26_30::ItemDocument&&);
#else // @header-generator platform
    MCFOLD ::SharedTypes::v1_26_30::ItemDocument& operator=(::SharedTypes::v1_26_30::ItemDocument&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_30::ItemDocument& operator=(::SharedTypes::v1_26_30::ItemDocument const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_30::ItemDocument const&) const;

    MCNAPI ~ItemDocument();
#else // @header-generator platform
    MCAPI ~ItemDocument();
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
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDocument const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_30::ItemDocument&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDocument&&);
#else // @header-generator platform
    MCFOLD void* $ctor(::SharedTypes::v1_26_30::ItemDocument const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
