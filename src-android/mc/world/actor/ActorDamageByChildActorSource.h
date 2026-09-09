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
class BlockSource;
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
    ::ll::TypedStorage<8, 24, std::string>    mDamagingActorNameTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageByChildActorSource& operator=(ActorDamageByChildActorSource const&);
    ActorDamageByChildActorSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorDamageByChildActorSource();

    virtual bool isChildEntitySource() const;

    virtual bool getDamagingEntityIsCreative() const;

    virtual bool getDamagingEntityIsWorldBuilder() const;

    virtual ::ActorUniqueID getDamagingEntityUniqueID() const;

    virtual ::ActorType getDamagingEntityType() const;

    virtual ::ActorCategory getDamagingEntityCategories() const;

    virtual std::unique_ptr<ActorDamageSource> clone() const;

    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDamageByChildActorSource(::Actor const&, ::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor const&, ::Actor const&, ::SharedTypes::Legacy::ActorDamageCause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isChildEntitySource() const;

    MCNAPI bool $getDamagingEntityIsCreative() const;

    MCNAPI bool $getDamagingEntityIsWorldBuilder() const;

    MCNAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCNAPI ::ActorType $getDamagingEntityType() const;

    MCNAPI ::ActorCategory $getDamagingEntityCategories() const;

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
