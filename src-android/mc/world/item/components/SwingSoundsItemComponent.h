#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::Beta { struct SwingSoundsItemComponent; }
namespace SharedTypes::v1_21_90 { struct SwingSoundsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SwingSoundsItemComponent : public ::NetworkedItemComponent<SwingSoundsItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>> mAttackMissSound;
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>> mAttackHitSound;
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>> mAttackCriticalHitSound;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwingSoundsItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SwingSoundsItemComponent(::SharedTypes::v1_21_90::SwingSoundsItemComponent const&);

    MCNAPI explicit SwingSoundsItemComponent(::SharedTypes::Beta::SwingSoundsItemComponent const&);

    MCNAPI std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackMissSound() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::SwingSoundsItemComponent const&);

    MCNAPI void* $ctor(::SharedTypes::Beta::SwingSoundsItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
