#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Block;
struct ActorDataFlagComponent;
// clang-format on

struct SoundEventRequest {
public:
    // SoundEventRequest inner types declare
    // clang-format off
    struct PlainData;
    struct SoundData;
    struct SynchronizedPlainData;
    struct ActorLocationData;
    // clang-format on

    // SoundEventRequest inner types define
    struct PlainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mActor;
        ::ll::TypedStorage<4, 4, ::DimensionType>               mDimension;
        ::ll::TypedStorage<4, 4, int>                           mData;
        ::ll::TypedStorage<1, 1, bool>                          mIsGlobal;
        ::ll::TypedStorage<1, 1, bool>                          mIsBaby;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlainData& operator=(PlainData const&);
        PlainData(PlainData const&);
        PlainData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PlainData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SoundData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mVolume;
        ::ll::TypedStorage<4, 4, float> mPitch;
        // NOLINTEND
    };

    struct SynchronizedPlainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier> mIdentifier;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mActor;
        ::ll::TypedStorage<4, 4, ::DimensionType>               mDimension;
        ::ll::TypedStorage<4, 4, int>                           mData;
        ::ll::TypedStorage<1, 1, bool>                          mIsGlobal;
        ::ll::TypedStorage<1, 1, bool>                          mIsBaby;
        // NOLINTEND

    public:
        // prevent constructor by default
        SynchronizedPlainData& operator=(SynchronizedPlainData const&);
        SynchronizedPlainData(SynchronizedPlainData const&);
        SynchronizedPlainData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SynchronizedPlainData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ActorLocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::StrictEntityContext>                mEntity;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mLocation;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorLocationData& operator=(ActorLocationData const&);
        ActorLocationData(ActorLocationData const&);
        ActorLocationData();
    };

    using SoundDataVariant = std::
        variant<SoundEventRequest::PlainData, SoundEventRequest::SoundData, SoundEventRequest::SynchronizedPlainData>;

    using PositionVariant = std::variant<Vec3, SoundEventRequest::ActorLocationData>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mEvent;
    ::ll::TypedStorage<8, 168, std::variant<SoundEventRequest::PlainData, SoundEventRequest::SoundData, SoundEventRequest::SynchronizedPlainData>> mData;
    ::ll::TypedStorage<4, 16, std::variant<Vec3, SoundEventRequest::ActorLocationData>> mPosition;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SoundEventRequest& operator=(SoundEventRequest const&);
    SoundEventRequest(SoundEventRequest const&);
    SoundEventRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SoundEventRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<SoundEventRequest> tryPlayPredictiveSynchronizedSound(
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifier const&,
        ::ActorUniqueID,
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        bool
    );

    MCNAPI static std::optional<SoundEventRequest> tryPlayPredictiveSynchronizedSound(
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifier const&,
        ::ActorUniqueID,
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::StrictEntityContext const&,
        ::SharedTypes::Legacy::ActorLocation,
        int,
        bool
    );

    MCNAPI static std::optional<SoundEventRequest> tryPlaySound(
        ::ActorDataFlagComponent const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::StrictEntityContext const&,
        ::SharedTypes::Legacy::ActorLocation,
        float,
        float
    );

    MCNAPI static std::optional<SoundEventRequest> tryPlaySound(
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifier const&,
        ::ActorUniqueID,
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::StrictEntityContext const&,
        ::SharedTypes::Legacy::ActorLocation,
        ::Block const&
    );

    MCNAPI static std::optional<SoundEventRequest> tryPlaySound(
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifier const&,
        ::ActorUniqueID,
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::StrictEntityContext const&,
        ::SharedTypes::Legacy::ActorLocation,
        int
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
