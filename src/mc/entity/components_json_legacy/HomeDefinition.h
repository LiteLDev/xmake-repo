#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/RestrictionType.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HomeComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HomeDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RestrictionType>         mRestrictionType;
    ::ll::TypedStorage<4, 4, int>                       mRestrictionRadius;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mHomeBlockNames;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RestrictionType>             mRestrictionType;
    ::ll::TypedStorage<4, 4, int>                           mRestrictionRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mHomeBlockNames;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _finalize() const;
#else // @header-generator platform
    MCAPI void _setRestrictionRadius(int const& restrictionRadius);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setRestrictionRadius(int const&);
#else // @header-generator platform
    MCAPI void _setRestrictionType(::std::string const& restrictionType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setRestrictionType(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::HomeComponent&) const;

    MCNAPI ~HomeDefinition();
#else // @header-generator platform
    MCAPI void initialize(::EntityContext&, ::HomeComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HomeDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HomeDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND
};
