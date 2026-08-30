#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct EventingRequest {
public:
    // EventingRequest inner types declare
    // clang-format off
    struct PersonaEmoteData;
    struct PlayerBounceData;
    struct PlayerUnexpectedFallDamageData;
    struct ActorMovementCorrectionData;
    // clang-format on

    // EventingRequest inner types define
    struct PersonaEmoteData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mProductId;
        ::ll::TypedStorage<1, 1, bool>         mEndedEarly;
        ::ll::TypedStorage<4, 4, int>          mSlotNumber;
        // NOLINTEND

    public:
        // prevent constructor by default
        PersonaEmoteData& operator=(PersonaEmoteData const&);
        PersonaEmoteData();
    };

    struct PlayerBounceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>               mPlayerID;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
        ::ll::TypedStorage<4, 4, int>                           mBounceHeight;
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
        // NOLINTEND

    public:
        // prevent constructor by default
        ActorMovementCorrectionData& operator=(ActorMovementCorrectionData const&);
        ActorMovementCorrectionData();
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::EventingRequest addActorMovementCorrectionDivergence(::ActorType, std::vector<float> const&);

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
    // NOLINTEND
};
