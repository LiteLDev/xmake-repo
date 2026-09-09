#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::Beta { struct RecordItemComponent; }
namespace SharedTypes::v1_20_50 { struct RecordItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent : public ::NetworkedItemComponent<RecordItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SoundEventIdentifier> mSoundEvent;
    ::ll::TypedStorage<4, 4, float>                   mDuration;
    ::ll::TypedStorage<4, 4, int>                     mComparatorSignal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecordItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecordItemComponent();

    MCNAPI explicit RecordItemComponent(::SharedTypes::Beta::RecordItemComponent);

    MCNAPI RecordItemComponent(::RecordItemComponent&&);

    MCNAPI void appendFormattedHovertext(::Bedrock::Safety::RedactableString&) const;

    MCNAPI int getComparatorSignal() const;

    MCNAPI float getDuration() const;

    MCNAPI std::string getRecordDescription() const;

    MCNAPI ::SoundEventIdentifier getSound() const;
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
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::Beta::RecordItemComponent);

    MCNAPI void* $ctor(::RecordItemComponent&&);
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
