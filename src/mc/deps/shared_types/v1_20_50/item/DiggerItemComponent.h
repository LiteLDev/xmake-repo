#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_20_50 {

struct DiggerItemComponent {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor>   filter;
#else // @header-generator platform
        ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor>   filter;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                                       destroySpeed;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger> onDigDeprecated;
#else // @header-generator platform
        ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> onDigDeprecated;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    ::ll::TypedStorage<1, 1, bool>                                                                mUseEfficiency;
    ::ll::TypedStorage<8, 80, std::optional<SharedTypes::Legacy::DefinitionTrigger>>              mOnDigDeprecated;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    ::ll::TypedStorage<1, 1, bool>                                                                    mUseEfficiency;
    ::ll::TypedStorage<8, 96, ::std::optional<::SharedTypes::Legacy::DefinitionTrigger>>              mOnDigDeprecated;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ~DiggerItemComponent();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
