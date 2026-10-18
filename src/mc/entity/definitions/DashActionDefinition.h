#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/definitions/dash_action/Direction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct DashActionComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DashActionDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                   mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                   mHorizontalMomentum;
    ::ll::TypedStorage<4, 4, float>                   mVerticalMomentum;
    ::ll::TypedStorage<1, 1, bool>                    mCanDashUnderwater;
    ::ll::TypedStorage<1, 1, ::DashAction::Direction> mDirection;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk17b33f;
    ::ll::UntypedStorage<4, 4> mUnk3b3c51;
    ::ll::UntypedStorage<4, 4> mUnkca829b;
    ::ll::UntypedStorage<1, 1> mUnk274282;
    ::ll::UntypedStorage<1, 1> mUnkadbd9b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DashActionDefinition& operator=(DashActionDefinition const&);
    DashActionDefinition(DashActionDefinition const&);
    DashActionDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::DashActionComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::DashActionComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDirection(std::string const&);
#else // @header-generator platform
    MCAPI void setDirection(::std::string const& direction);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void uninitialize(::EntityContext&, ::DashActionComponent&) const;
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity, ::DashActionComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DashActionDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::DashActionDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
