#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeModifier;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct AttributeRequestComponent {
public:
    // AttributeRequestComponent inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct AddBuffModifier;
#endif // @header-generator platform
    struct AddModifier;
    struct RemoveModifier;
#if defined(LL_PLAT_A) // @header-generator platform
    struct AddBuffModifier;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // AttributeRequestComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct AddBuffModifier {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Attribute const&> mSharedAttribute;
        ::ll::TypedStorage<4, 4, float>              mAmount;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk960a83;
        ::ll::UntypedStorage<4, 4> mUnkb25e71;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        AddBuffModifier& operator=(AddBuffModifier const&);
        AddBuffModifier(AddBuffModifier const&);
        AddBuffModifier();
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct AddModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk2d8334;
        ::ll::UntypedStorage<8, 8>  mUnka2b80d;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddModifier& operator=(AddModifier const&);
        AddModifier(AddModifier const&);
        AddModifier();
    };

    struct RemoveModifier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc70f2c;
        ::ll::UntypedStorage<8, 8>  mUnkde8f14;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoveModifier& operator=(RemoveModifier const&);
        RemoveModifier(RemoveModifier const&);
        RemoveModifier();
    };

    using Variant = ::std::variant<
        ::AttributeRequestComponent::AddModifier,
        ::AttributeRequestComponent::RemoveModifier,
        ::AttributeRequestComponent::AddBuffModifier>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<AttributeRequestComponent::AddModifier, AttributeRequestComponent::RemoveModifier, AttributeRequestComponent::AddBuffModifier>>> mRequests;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::AttributeRequestComponent::AddModifier,
            ::AttributeRequestComponent::RemoveModifier,
            ::AttributeRequestComponent::AddBuffModifier>>>
        mRequests;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AttributeRequestComponent& operator=(AttributeRequestComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
