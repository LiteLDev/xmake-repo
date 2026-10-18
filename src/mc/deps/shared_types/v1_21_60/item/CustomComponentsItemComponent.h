#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct CustomComponentsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60 {

struct CustomComponentsItemComponent {
public:
    // CustomComponentsItemComponent inner types declare
    // clang-format off
    struct ComponentData;
    // clang-format on

    // CustomComponentsItemComponent inner types define
    struct ComponentData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>            name;
        ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> data;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>          name;
        ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> data;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ComponentData& operator=(ComponentData const&);
#endif // @header-generator platform
        ComponentData();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~ComponentData();
#else // @header-generator platform
        MCAPI ComponentData(::SharedTypes::v1_21_60::CustomComponentsItemComponent::ComponentData const&);

        MCAPI ~ComponentData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void* $ctor(::SharedTypes::v1_21_60::CustomComponentsItemComponent::ComponentData const&);
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

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCreatedFromJsonDescription;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_60::CustomComponentsItemComponent::ComponentData>> mComponents;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_60::CustomComponentsItemComponent&
    operator=(::SharedTypes::v1_21_60::CustomComponentsItemComponent const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_60::CustomComponentsItemComponent const&) const;

    MCNAPI ~CustomComponentsItemComponent();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_60::CustomComponentsItemComponent::ComponentData>>
        mComponents;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void upgrade(
        std::optional<SharedTypes::v1_20_80::CustomComponentsItemComponent>&,
        std::optional<SharedTypes::v1_21_60::CustomComponentsItemComponent>&
#else // @header-generator platform
    MCAPI static void upgrade(
        ::std::optional<::SharedTypes::v1_20_80::CustomComponentsItemComponent>& oldComp,
        ::std::optional<::SharedTypes::v1_21_60::CustomComponentsItemComponent>& newComp
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
