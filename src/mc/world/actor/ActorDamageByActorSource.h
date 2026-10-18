#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
// clang-format on

class ActorDamageByActorSource : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource const&> mRegion;
    ::ll::TypedStorage<1, 1, bool>                 mIsWorldBuilder;
    ::ll::TypedStorage<1, 1, bool>                 mIsCreative;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>      mEntityID;
    ::ll::TypedStorage<4, 4, ::ActorType>          mEntityType;
    ::ll::TypedStorage<4, 4, ::ActorCategory>      mEntityCategories;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mEntityNameTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>       mEntityNameTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageByActorSource& operator=(ActorDamageByActorSource const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorDamageByActorSource(ActorDamageByActorSource const&);
#endif // @header-generator platform
    ActorDamageByActorSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorDamageByActorSource();
#else // @header-generator platform
    virtual bool isEntitySource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEntitySource() const;
#else // @header-generator platform
    virtual bool getIsCreative() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getIsCreative() const;
#else // @header-generator platform
    virtual bool getIsWorldBuilder() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool getIsWorldBuilder() const;
#else // @header-generator platform
    virtual ::ActorUniqueID getEntityUniqueID() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID getEntityUniqueID() const;
#else // @header-generator platform
    virtual ::ActorType getEntityType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorType getEntityType() const;
#else // @header-generator platform
    virtual ::ActorCategory getEntityCategories() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorCategory getEntityCategories() const;
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
    virtual ~ActorDamageByActorSource() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDamageByActorSource(::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI ActorDamageByActorSource(::Actor const& actor, ::SharedTypes::Legacy::ActorDamageCause cause);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI void* $ctor(::Actor const& actor, ::SharedTypes::Legacy::ActorDamageCause cause);
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
    MCNAPI bool $isEntitySource() const;
#else // @header-generator platform
    MCFOLD bool $isEntitySource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getIsCreative() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $getIsCreative() const;
#else // LL_PLAT_C
    MCFOLD bool $getIsCreative() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getIsWorldBuilder() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $getIsWorldBuilder() const;
#else // LL_PLAT_C
    MCFOLD bool $getIsWorldBuilder() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getEntityUniqueID() const;
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $getEntityUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType $getEntityType() const;
#else // @header-generator platform
    MCFOLD ::ActorType $getEntityType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorCategory $getEntityCategories() const;
#else // @header-generator platform
    MCFOLD ::ActorCategory $getEntityCategories() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $getDamagingEntityUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType $getDamagingEntityType() const;
#else // @header-generator platform
    MCFOLD ::ActorType $getDamagingEntityType() const;
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
