#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class VersionedActorDamageCause;
struct ActorUniqueID;
namespace Scripting { struct Version; }
// clang-format on

class ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    ::ll::TypedStorage<8, 24, std::string>                            mDeathMessageOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorDamageSource();

    virtual bool isEntitySource() const;

    virtual bool isChildEntitySource() const;

    virtual bool isBlockSource() const;

    virtual bool isFire() const;

    virtual bool isReducedByResistanceEffect() const;

    virtual bool isReducedByEnchantReduction() const;

    virtual bool isReducedByArmorReduction() const;

    virtual bool isFallingBlockDamage() const;

    virtual bool isFallDamage() const;

    virtual bool getIsCreative() const;

    virtual bool getIsWorldBuilder() const;

    virtual ::ActorUniqueID getEntityUniqueID() const;

    virtual ::ActorType getEntityType() const;

    virtual ::ActorCategory getEntityCategories() const;

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
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getCause() const;

    MCNAPI std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string const&, ::Actor*) const;

    MCNAPI void setCause(::SharedTypes::Legacy::ActorDamageCause);

    MCNAPI void setDeathMessageOverride(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::pair<std::string, SharedTypes::Legacy::ActorDamageCause>>
        generateDamageCauseCommandEnum(std::optional<Scripting::Version>);

    MCNAPI static std::vector<std::pair<std::string, SharedTypes::Legacy::ActorDamageCause>>
        generateNewDamageCauseCommandEnum(std::optional<Scripting::Version>);

    MCNAPI static std::vector<VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();

    MCNAPI static bool isDamageCausedByMob(::SharedTypes::Legacy::ActorDamageCause);

    MCNAPI static ::SharedTypes::Legacy::ActorDamageCause lookupCause(std::string const&);

    MCNAPI static std::string const& lookupCauseName(::SharedTypes::Legacy::ActorDamageCause);
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

    MCNAPI bool $isChildEntitySource() const;

    MCNAPI bool $isBlockSource() const;

    MCNAPI bool $isFire() const;

    MCNAPI bool $isReducedByResistanceEffect() const;

    MCNAPI bool $isReducedByEnchantReduction() const;

    MCNAPI bool $isReducedByArmorReduction() const;

    MCNAPI bool $isFallingBlockDamage() const;

    MCNAPI bool $isFallDamage() const;

    MCNAPI bool $getIsCreative() const;

    MCNAPI bool $getIsWorldBuilder() const;

    MCNAPI ::ActorUniqueID $getEntityUniqueID() const;

    MCNAPI ::ActorType $getEntityType() const;

    MCNAPI ::ActorCategory $getEntityCategories() const;

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
