#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeModifier;
// clang-format on

struct AttributeRequestComponent {
public:
    // AttributeRequestComponent inner types declare
    // clang-format off
    struct AddModifier;
    struct RemoveModifier;
    struct AddBuffModifier;
    // clang-format on

    // AttributeRequestComponent inner types define
    struct AddModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<AttributeModifier>> mModifier;
        ::ll::TypedStorage<8, 8, ::Attribute const&>                  mSharedAttribute;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddModifier& operator=(AddModifier const&);
        AddModifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~AddModifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RemoveModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<AttributeModifier>> mModifier;
        ::ll::TypedStorage<8, 8, ::Attribute const&>                  mSharedAttribute;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoveModifier& operator=(RemoveModifier const&);
        RemoveModifier();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RemoveModifier();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct AddBuffModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Attribute const&> mSharedAttribute;
        ::ll::TypedStorage<4, 4, float>              mAmount;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddBuffModifier& operator=(AddBuffModifier const&);
        AddBuffModifier(AddBuffModifier const&);
        AddBuffModifier();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<AttributeRequestComponent::AddModifier, AttributeRequestComponent::RemoveModifier, AttributeRequestComponent::AddBuffModifier>>> mRequests;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeRequestComponent& operator=(AttributeRequestComponent const&);
};
