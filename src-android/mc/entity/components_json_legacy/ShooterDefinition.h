#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/ShooterProjectileData.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ShooterComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShooterDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mThrowPower;
    ::ll::TypedStorage<8, 24, std::vector<ShooterProjectileData>>    mShooterProjectileData;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>          mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                   mMagicAttacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addSoundByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::ShooterComponent&) const;

    MCNAPI void setActorDefByName(std::string const&);

    MCNAPI ~ShooterDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShooterDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
