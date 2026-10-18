#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockComponents.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/block/BlockPermutation.h"
#include "mc/deps/shared_types/v1_26_20/block/DeprecatedDefinitionEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/v1_26_20/block/Description.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockPermutation; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct DeprecatedDefinitionEvent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BlockDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 360, ::SharedTypes::v1_26_20::BlockDefinition::Description> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockComponents> mComponents;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_20::BlockDefinition::BlockPermutation>> mPermutations;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent>> mDeprecatedEventHandlers;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mOrderedV1CustomComponents;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 472, ::SharedTypes::v1_26_20::BlockDefinition::Description>                    mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockComponents>                 mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::BlockDefinition::BlockPermutation>> mPermutations;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent>>
                                                            mDeprecatedEventHandlers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOrderedV1CustomComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionDocument();

    MCAPI BlockDefinitionDocument(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const&);

    MCAPI ~BlockDefinitionDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
