#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CombatRegenerationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EffectDuration> mRegenerationDuration;
    ::ll::TypedStorage<1, 1, bool>             mApplyToSelf;
    ::ll::TypedStorage<1, 1, bool>             mApplyToFamily;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRegenDuration(int const&);
#else // @header-generator platform
    MCAPI void setRegenDuration(int const& duration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setRegenDurationWithInfiniteString(std::string const&);
#else // @header-generator platform
    MCAPI void setRegenDurationWithInfiniteString(::std::string const& duration);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, CombatRegenerationDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CombatRegenerationDefinition>>&
            root
    );
#endif // @header-generator platform
    // NOLINTEND
};
