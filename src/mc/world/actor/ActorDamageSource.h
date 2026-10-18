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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mDeathMessageOverride;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                          mDeathMessageOverride;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ActorDamageSource();
#else // @header-generator platform
    ActorDamageSource() {
        mCause = SharedTypes::Legacy::ActorDamageCause::None;
    }
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ActorDamageSource> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    _getDeathMessageInternal(::std::string const& deadName, ::Actor* dead) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDamageCause getCause() const;
#else // @header-generator platform
    MCAPI ActorDamageSource(::SharedTypes::Legacy::ActorDamageCause cause, ::std::string deathMessageOverride);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string const&, ::Actor*) const;

    MCNAPI void setCause(::SharedTypes::Legacy::ActorDamageCause);

    MCNAPI void setDeathMessageOverride(std::string const&);
#else // @header-generator platform
    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string const& deadName, ::Actor* dead) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<std::string, SharedTypes::Legacy::ActorDamageCause>>
        generateDamageCauseCommandEnum(std::optional<Scripting::Version>);
#else // @header-generator platform
    MCAPI static ::std::vector<::std::pair<::std::string, ::SharedTypes::Legacy::ActorDamageCause>>
    generateDamageCauseCommandEnum(::std::optional<::Scripting::Version> scriptVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::pair<std::string, SharedTypes::Legacy::ActorDamageCause>>
        generateNewDamageCauseCommandEnum(std::optional<Scripting::Version>);
#else // @header-generator platform
    MCAPI static ::std::vector<::std::pair<::std::string, ::SharedTypes::Legacy::ActorDamageCause>>
    generateNewDamageCauseCommandEnum(::std::optional<::Scripting::Version> scriptVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();
#else // @header-generator platform
    MCAPI static ::std::vector<::VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isDamageCausedByMob(::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
    MCAPI static ::SharedTypes::Legacy::ActorDamageCause lookupCause(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SharedTypes::Legacy::ActorDamageCause lookupCause(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::string const& lookupCauseName(::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& lookupCauseName(::SharedTypes::Legacy::ActorDamageCause);
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::ActorDamageCause cause, ::std::string deathMessageOverride);
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
    MCNAPI bool $isChildEntitySource() const;
#else // @header-generator platform
    MCFOLD bool $isChildEntitySource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlockSource() const;
#else // @header-generator platform
    MCFOLD bool $isBlockSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFire() const;
#else // @header-generator platform
    MCAPI bool $isFire() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isReducedByResistanceEffect() const;
#else // @header-generator platform
    MCAPI bool $isReducedByResistanceEffect() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isReducedByEnchantReduction() const;
#else // @header-generator platform
    MCAPI bool $isReducedByEnchantReduction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isReducedByArmorReduction() const;
#else // @header-generator platform
    MCAPI bool $isReducedByArmorReduction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFallingBlockDamage() const;
#else // @header-generator platform
    MCAPI bool $isFallingBlockDamage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFallDamage() const;
#else // @header-generator platform
    MCAPI bool $isFallDamage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getIsCreative() const;
#else // @header-generator platform
    MCFOLD bool $getIsCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getIsWorldBuilder() const;
#else // @header-generator platform
    MCFOLD bool $getIsWorldBuilder() const;
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
    MCNAPI bool $getDamagingEntityIsCreative() const;
#else // @header-generator platform
    MCFOLD bool $getDamagingEntityIsCreative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $getDamagingEntityIsWorldBuilder() const;
#else // @header-generator platform
    MCFOLD bool $getDamagingEntityIsWorldBuilder() const;
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
    MCNAPI ::ActorCategory $getDamagingEntityCategories() const;
#else // @header-generator platform
    MCFOLD ::ActorCategory $getDamagingEntityCategories() const;
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
