#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/strict/StrictEntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
class StrictEntityContext;
#endif // @header-generator platform
struct ActorDataFlagComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct DimensionType;
#endif // @header-generator platform
// clang-format on

struct SoundEventRequest {
public:
    // SoundEventRequest inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ActorLocationData;
#endif // @header-generator platform
    struct PlainData;
    struct SoundData;
    struct SynchronizedPlainData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct ActorLocationData;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // SoundEventRequest inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct ActorLocationData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 8, ::StrictEntityContext>                mEntity;
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mLocation;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 8> mUnk5be6b0;
        ::ll::UntypedStorage<4, 4> mUnk68bc8c;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorLocationData& operator=(ActorLocationData const&);
        ActorLocationData(ActorLocationData const&);
        ActorLocationData();
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using SoundDataVariant = std::
        variant<SoundEventRequest::PlainData, SoundEventRequest::SoundData, SoundEventRequest::SynchronizedPlainData>;
#else // @header-generator platform
    struct PlainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 176> mUnk2dde30;
        ::ll::UntypedStorage<8, 8>   mUnk1e75b0;
        ::ll::UntypedStorage<4, 4>   mUnk7d8120;
        ::ll::UntypedStorage<4, 4>   mUnk36ff99;
        ::ll::UntypedStorage<1, 1>   mUnk9a24f2;
        ::ll::UntypedStorage<1, 1>   mUnkad3962;
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using PositionVariant = std::variant<Vec3, SoundEventRequest::ActorLocationData>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        PlainData& operator=(PlainData const&);
        PlainData(PlainData const&);
        PlainData();
    };

    struct SoundData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkdd15c3;
        ::ll::UntypedStorage<4, 4> mUnkff6589;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoundData& operator=(SoundData const&);
        SoundData(SoundData const&);
        SoundData();
    };

    struct SynchronizedPlainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 176> mUnka6339b;
        ::ll::UntypedStorage<8, 8>   mUnkfb0b6a;
        ::ll::UntypedStorage<4, 4>   mUnka2b904;
        ::ll::UntypedStorage<4, 4>   mUnka2d7c8;
        ::ll::UntypedStorage<1, 1>   mUnkf05fad;
        ::ll::UntypedStorage<1, 1>   mUnk53aaf0;
        // NOLINTEND

    public:
        // prevent constructor by default
        SynchronizedPlainData& operator=(SynchronizedPlainData const&);
        SynchronizedPlainData(SynchronizedPlainData const&);
        SynchronizedPlainData();
    };

    using PositionVariant = ::std::variant<::Vec3, ::SoundEventRequest::ActorLocationData>;

    using SoundDataVariant = ::std::variant<
        ::SoundEventRequest::PlainData,
        ::SoundEventRequest::SoundData,
        ::SoundEventRequest::SynchronizedPlainData>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mEvent;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        208,
        ::std::variant<
            ::SoundEventRequest::PlainData,
            ::SoundEventRequest::SoundData,
            ::SoundEventRequest::SynchronizedPlainData>>
                                                                                              mData;
    ::ll::TypedStorage<4, 16, ::std::variant<::Vec3, ::SoundEventRequest::ActorLocationData>> mPosition;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<SoundEventRequest> tryPlayPredictiveSynchronizedSound(
        ::ActorDataFlagComponent const&,
        ::ActorDefinitionIdentifier const&,
        ::ActorUniqueID,
        ::DimensionType,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        bool
#else // @header-generator platform
    MCAPI static ::std::optional<::SoundEventRequest> tryPlayPredictiveSynchronizedSound(
        ::ActorDataFlagComponent const&        actorFlags,
        ::ActorDefinitionIdentifier const&     identifier,
        ::ActorUniqueID                        actorId,
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::optional<::SoundEventRequest> tryPlayPredictiveSynchronizedSound(
        ::ActorDataFlagComponent const&        actorFlags,
        ::ActorDefinitionIdentifier const&     identifier,
        ::ActorUniqueID                        actorId,
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::StrictEntityContext const&           entity,
        ::SharedTypes::Legacy::ActorLocation   location,
        int                                    data,
        bool                                   isGlobal
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::optional<::SoundEventRequest> tryPlaySound(
        ::ActorDataFlagComponent const&        actorFlags,
        ::ActorDefinitionIdentifier const&     identifier,
        ::ActorUniqueID                        actorId,
        ::DimensionType                        dimension,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::StrictEntityContext const&           entity,
        ::SharedTypes::Legacy::ActorLocation   location,
        int                                    data
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
