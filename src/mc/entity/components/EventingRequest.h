#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorType.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct EventingRequest {
public:
    // EventingRequest inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ActorMovementCorrectionData;
#endif // @header-generator platform
    struct PersonaEmoteData;
    struct PlayerBounceData;
    struct PlayerUnexpectedFallDamageData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct ActorMovementCorrectionData;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // EventingRequest inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ActorMovementCorrectionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk7a7984;
        ::ll::UntypedStorage<8, 24> mUnk9f1611;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorMovementCorrectionData& operator=(ActorMovementCorrectionData const&);
        ActorMovementCorrectionData(ActorMovementCorrectionData const&);
        ActorMovementCorrectionData();
    };

#endif // @header-generator platform
    struct PersonaEmoteData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mProductId;
        ::ll::TypedStorage<1, 1, bool>         mEndedEarly;
        ::ll::TypedStorage<4, 4, int>          mSlotNumber;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk7428fb;
        ::ll::UntypedStorage<1, 1>  mUnk73d3b0;
        ::ll::UntypedStorage<4, 4>  mUnkb9b4ae;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PersonaEmoteData& operator=(PersonaEmoteData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        PersonaEmoteData(PersonaEmoteData const&);
#endif // @header-generator platform
        PersonaEmoteData();
    };

    struct PlayerBounceData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mPlayerID;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
        ::ll::TypedStorage<4, 4, int>                           mBounceHeight;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkcf8f72;
        ::ll::UntypedStorage<8, 8> mUnkc09b76;
        ::ll::UntypedStorage<4, 4> mUnkeaecbe;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerBounceData& operator=(PlayerBounceData const&);
        PlayerBounceData(PlayerBounceData const&);
        PlayerBounceData();
    };

    struct PlayerUnexpectedFallDamageData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float> mFallDistance;
        ::ll::TypedStorage<1, 1, bool>  mIsVehicle;
        ::ll::TypedStorage<4, 4, float> mDivergenceAmount;
        // NOLINTEND
    };

    struct ActorMovementCorrectionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ActorType>         mActorType;
        ::ll::TypedStorage<8, 24, std::vector<float>> mDivergences;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk3878e5;
        ::ll::UntypedStorage<1, 1> mUnk8e3f6b;
        ::ll::UntypedStorage<4, 4> mUnk3b030a;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        ActorMovementCorrectionData& operator=(ActorMovementCorrectionData const&);
        ActorMovementCorrectionData();
#else // @header-generator platform
        PlayerUnexpectedFallDamageData& operator=(PlayerUnexpectedFallDamageData const&);
        PlayerUnexpectedFallDamageData(PlayerUnexpectedFallDamageData const&);
        PlayerUnexpectedFallDamageData();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<EventingRequest::PersonaEmoteData, EventingRequest::PlayerBounceData, EventingRequest::PlayerUnexpectedFallDamageData, EventingRequest::ActorMovementCorrectionData>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EventingRequest& operator=(EventingRequest const&);
    EventingRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EventingRequest(::EventingRequest const&);

    MCNAPI ~EventingRequest();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::EventingRequest::PersonaEmoteData,
            ::EventingRequest::PlayerBounceData,
            ::EventingRequest::PlayerUnexpectedFallDamageData,
            ::EventingRequest::ActorMovementCorrectionData>>
        mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::EventingRequest addActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::EventingRequest
    addActorMovementCorrectionDivergence(::ActorType actorType, ::std::vector<float> const& divergences);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::EventingRequest addPersonaEmotePlayed(std::string const&, bool, int);

    MCNAPI static ::EventingRequest addPlayerBounced(::ActorUniqueID const&, ::Block const&, int);

    MCNAPI static ::EventingRequest addPlayerUnexpectedFallDamage(float const, bool, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EventingRequest const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::EventingRequest
    addPersonaEmotePlayed(::std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);
#endif // @header-generator platform
    // NOLINTEND
};
