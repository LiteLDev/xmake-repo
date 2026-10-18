#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace Bedrock::Safety { class RedactableString; }
namespace SharedTypes::Beta { struct RecordItemComponent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_20_50 { struct RecordItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class RecordItemComponent : public ::NetworkedItemComponent<RecordItemComponent> {
#else // @header-generator platform
class RecordItemComponent : public ::NetworkedItemComponent<::RecordItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SoundEventIdentifier> mSoundEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::SoundEventIdentifier> mSoundEvent;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                   mDuration;
    ::ll::TypedStorage<4, 4, int>                     mComparatorSignal;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecordItemComponent();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RecordItemComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RecordItemComponent();
#else // @header-generator platform
    MCAPI explicit RecordItemComponent(::SharedTypes::Beta::RecordItemComponent component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RecordItemComponent(::SharedTypes::Beta::RecordItemComponent);
#else // @header-generator platform
    MCAPI void appendFormattedHovertext(::Bedrock::Safety::RedactableString& hovertext) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RecordItemComponent(::RecordItemComponent&&);

    MCNAPI void appendFormattedHovertext(::Bedrock::Safety::RedactableString&) const;

    MCNAPI int getComparatorSignal() const;

    MCNAPI float getDuration() const;

    MCNAPI std::string getRecordDescription() const;

    MCNAPI ::SoundEventIdentifier getSound() const;
#else // @header-generator platform
    MCAPI ::std::string getRecordDescription() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static ::HashedString const& getIdentifier();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::Beta::RecordItemComponent);

    MCNAPI void* $ctor(::RecordItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Beta::RecordItemComponent component);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
