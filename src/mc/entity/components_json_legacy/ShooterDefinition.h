#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/ShooterProjectileData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class ShooterComponent;
#else // @header-generator platform
struct ShooterProjectileData;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ShooterDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mThrowPower;
    ::ll::TypedStorage<8, 24, std::vector<ShooterProjectileData>>    mShooterProjectileData;
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>          mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                   mMagicAttacks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mThrowPower;
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterProjectileData>> mShooterProjectileData;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>           mDefaultActorDef;
    ::ll::TypedStorage<4, 4, int>                                     mDefaultAuxValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent>  mSoundEvent;
    ::ll::TypedStorage<1, 1, bool>                                    mMagicAttacks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSoundByName(std::string const&);
#else // @header-generator platform
    MCAPI void addSoundByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::ShooterComponent&) const;

    MCNAPI void setActorDefByName(std::string const&);

    MCNAPI ~ShooterDefinition();
#else // @header-generator platform
    MCAPI void setActorDefByName(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ShooterDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ShooterDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND
};
