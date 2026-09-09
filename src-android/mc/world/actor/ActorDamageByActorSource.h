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
    ::ll::TypedStorage<8, 24, std::string>         mEntityNameTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageByActorSource& operator=(ActorDamageByActorSource const&);
    ActorDamageByActorSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorDamageByActorSource();

    virtual bool isEntitySource() const;

    virtual bool getIsCreative() const;

    virtual bool getIsWorldBuilder() const;

    virtual ::ActorUniqueID getEntityUniqueID() const;

    virtual ::ActorType getEntityType() const;

    virtual ::ActorCategory getEntityCategories() const;

    virtual ::ActorUniqueID getDamagingEntityUniqueID() const;

    virtual ::ActorType getDamagingEntityType() const;

    virtual std::unique_ptr<ActorDamageSource> clone() const;

    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDamageByActorSource(::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isEntitySource() const;

    MCNAPI bool $getIsCreative() const;

    MCNAPI bool $getIsWorldBuilder() const;

    MCNAPI ::ActorUniqueID $getEntityUniqueID() const;

    MCNAPI ::ActorType $getEntityType() const;

    MCNAPI ::ActorCategory $getEntityCategories() const;

    MCNAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCNAPI ::ActorType $getDamagingEntityType() const;

    MCNAPI std::unique_ptr<ActorDamageSource> $clone() const;

    MCNAPI std::pair<std::string, std::vector<std::string>>
           $_getDeathMessageInternal(std::string const&, ::Actor*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
