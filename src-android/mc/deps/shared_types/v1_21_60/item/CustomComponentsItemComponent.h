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
        ::ll::TypedStorage<8, 24, std::string>            name;
        ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> data;
        // NOLINTEND

    public:
        // prevent constructor by default
        ComponentData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ComponentData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mCreatedFromJsonDescription;
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static void upgrade(
        std::optional<SharedTypes::v1_20_80::CustomComponentsItemComponent>&,
        std::optional<SharedTypes::v1_21_60::CustomComponentsItemComponent>&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60
