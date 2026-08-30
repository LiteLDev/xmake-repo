#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/dash_action/Direction.h"
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
    ::ll::TypedStorage<4, 4, float>                   mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                   mHorizontalMomentum;
    ::ll::TypedStorage<4, 4, float>                   mVerticalMomentum;
    ::ll::TypedStorage<1, 1, bool>                    mCanDashUnderwater;
    ::ll::TypedStorage<1, 1, ::DashAction::Direction> mDirection;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::DashActionComponent&) const;

    MCNAPI void setDirection(std::string const&);

    MCNAPI void uninitialize(::EntityContext&, ::DashActionComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DashActionDefinition>>&);
    // NOLINTEND
};
