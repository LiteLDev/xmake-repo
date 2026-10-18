#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class AreaAttackComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AreaAttackDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mDamageRange;
    ::ll::TypedStorage<4, 4, int>                                     mDamagePerTick;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mDamageCause;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                     mEntityFilter;
    ::ll::TypedStorage<4, 4, float>                                   mAttackCooldownSeconds;
    ::ll::TypedStorage<1, 1, bool>                                    mPlayAttackSound;
    ::ll::TypedStorage<1, 1, bool>                                    mUseSelfAsDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mDeathMessageOverride;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                          mDeathMessageOverride;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::AreaAttackComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext&, ::AreaAttackComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDamageCause(std::string const&);
#else // @header-generator platform
    MCAPI void setDamageCause(::std::string const& cause);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AreaAttackDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AreaAttackDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
