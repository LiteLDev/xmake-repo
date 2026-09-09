#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/item/ItemComponents.h"
#include "mc/deps/shared_types/legacy/item/ComponentItemData.h"
#include "mc/deps/shared_types/v1_21_110/item/ItemDescription.h"
#include "mc/deps/shared_types/v1_26_30/item/ItemDeprecatedComponentData.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct ItemDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::SharedTypes::v1_21_110::ItemDescription>             mDescription;
    ::ll::UntypedStorage<1, 48>                                                      mComponents;
    ::ll::TypedStorage<8, 920, ::SharedTypes::v1_26_30::ItemDeprecatedComponentData> mDeprecatedComponentData;
    ::ll::TypedStorage<8, 240, ::SharedTypes::Legacy::ComponentItemData>             mLegacyData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemDocument(::SharedTypes::Beta::ItemDocument const&);

    MCNAPI ::SharedTypes::Beta::ItemDocument& operator=(::SharedTypes::Beta::ItemDocument&&);

    MCNAPI ::SharedTypes::Beta::ItemDocument& operator=(::SharedTypes::Beta::ItemDocument const&);

    MCNAPI bool operator==(::SharedTypes::Beta::ItemDocument const&) const;

    MCNAPI ~ItemDocument();
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Beta::ItemDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
