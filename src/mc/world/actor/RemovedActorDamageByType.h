#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RemovedActorDamageByType : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorType> mEntityType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RemovedActorDamageByType();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::ActorType getEntityType() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ActorDamageSource> clone() const;
#else // @header-generator platform
    virtual ::ActorType getEntityType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    _getDeathMessageInternal(::std::string const& deadName, ::Actor* dead) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
