#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class MobEffectComponent;
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MobEffectDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>               mEffectRange;
    ::ll::TypedStorage<4, 4, int>                 mEffectId;
    ::ll::TypedStorage<4, 4, ::EffectDuration>    mEffectTime;
    ::ll::TypedStorage<4, 4, int>                 mCooldownTicks;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mEntityFilter;
    ::ll::TypedStorage<1, 1, bool>                mIsAmbient;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MobEffectDefinition();
#else // @header-generator platform
    MCAPI void setCooldownTimeInTicks(int const& seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::MobEffectComponent&) const;
#else // @header-generator platform
    MCAPI void setEffectTimeInTicks(int const& seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCooldownTimeInTicks(int const&);
#else // @header-generator platform
    MCAPI void setEffectTimeWithInfiniteString(::std::string const& duration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setEffectTimeInTicks(int const&);

    MCNAPI void setEffectTimeWithInfiniteString(std::string const&);

    MCNAPI void setMobEffectByName(std::string const&);
#else // @header-generator platform
    MCAPI void setMobEffectByName(::std::string const& mobEffect);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MobEffectDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
