#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/Hitbox.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class HitboxComponent;
struct HitboxJson;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HitboxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Hitbox>> mHitboxes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAABB(::HitboxJson const&);

    MCNAPI void initialize(::EntityContext&, ::HitboxComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HitboxDefinition>>&);
    // NOLINTEND
};
