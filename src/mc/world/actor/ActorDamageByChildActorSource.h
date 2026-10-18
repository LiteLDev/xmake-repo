#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ActorDamageByChildActorSource : public ::ActorDamageByActorSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mDamagingActorIsWorldBuilder;
    ::ll::TypedStorage<1, 1, bool>            mDamagingActorIsCreative;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mDamagingActorId;
    ::ll::TypedStorage<4, 4, ::ActorType>     mDamagingActorType;
    ::ll::TypedStorage<4, 4, ::ActorCategory> mDamagingActorCategories;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mDamagingActorNameTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mDamagingActorNameTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorDamageByChildActorSource& operator=(ActorDamageByChildActorSource const&);
#else // @header-generator platform
#endif // @header-generator platform
    ActorDamageByChildActorSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorDamageByChildActorSource();
#else // @header-generator platform
    virtual bool isChildEntitySource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isChildEntitySource() const;
#else // @header-generator platform
    virtual bool getDamagingEntityIsCreative() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getDamagingEntityIsCreative() const;
#else // @header-generator platform
    virtual bool getDamagingEntityIsWorldBuilder() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getDamagingEntityIsWorldBuilder() const;
#else // @header-generator platform
    virtual ::ActorUniqueID getDamagingEntityUniqueID() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID getDamagingEntityUniqueID() const;
#else // @header-generator platform
    virtual ::ActorType getDamagingEntityType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorType getDamagingEntityType() const;
#else // @header-generator platform
    virtual ::ActorCategory getDamagingEntityCategories() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorCategory getDamagingEntityCategories() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ActorDamageSource> clone() const;
#else // @header-generator platform
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    _getDeathMessageInternal(::std::string const& deadName, ::Actor* dead) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
#else // @header-generator platform
    virtual ~ActorDamageByChildActorSource() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDamageByChildActorSource(::Actor const&, ::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI ActorDamageByChildActorSource(
        ::Actor const&                          childActor,
        ::Actor const&                          actor,
        ::SharedTypes::Legacy::ActorDamageCause cause
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&, ::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor const& childActor, ::Actor const& actor, ::SharedTypes::Legacy::ActorDamageCause cause);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isChildEntitySource() const;
#else // @header-generator platform
    MCFOLD bool $isChildEntitySource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getDamagingEntityIsCreative() const;
#else // @header-generator platform
    MCAPI bool $getDamagingEntityIsCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getDamagingEntityIsWorldBuilder() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $getDamagingEntityIsWorldBuilder() const;
#else // LL_PLAT_C
    MCFOLD bool $getDamagingEntityIsWorldBuilder() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;
#else // @header-generator platform
    MCAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType $getDamagingEntityType() const;
#else // @header-generator platform
    MCFOLD ::ActorType $getDamagingEntityType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorCategory $getDamagingEntityCategories() const;
#else // @header-generator platform
    MCAPI ::ActorCategory $getDamagingEntityCategories() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ActorDamageSource> $clone() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<std::string, std::vector<std::string>>
           $_getDeathMessageInternal(std::string const&, ::Actor*) const;
#else // @header-generator platform
    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $_getDeathMessageInternal(::std::string const& deadName, ::Actor* dead) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
