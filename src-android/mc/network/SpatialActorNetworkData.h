#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ForceSendSpatialDataValue.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/MoveActorAbsoluteData.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRuntimeID;
class MoveActorDeltaData;
class Packet;
class Player;
class Vec2;
class Vec3;
struct ConditionalBandwidthOptimization;
struct NetworkIdentifierWithSubId;
// clang-format on

class SpatialActorNetworkData {
public:
    // SpatialActorNetworkData inner types declare
    // clang-format off
    struct DebugSpatialPacketModifiers;
    struct DebugSendRateModifiers;
    // clang-format on

    // SpatialActorNetworkData inner types define
    struct DebugSpatialPacketModifiers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mCurrentSentSpatialPackets;
        ::ll::TypedStorage<8, 8, ulong> mExpectedSentSpatialPackets;
        ::ll::TypedStorage<8, 8, ulong> mCurrentSentMotionPredictionHintsPackets;
        ::ll::TypedStorage<1, 1, bool>  mUseValueOverrides;
        ::ll::TypedStorage<1, 1, bool>  mUseScoreOverride;
        ::ll::TypedStorage<4, 4, float> mOverridemMaxOptimizedDistance;
        ::ll::TypedStorage<8, 8, ulong> mOverridemMaxDroppedTicks;
        ::ll::TypedStorage<8, 8, ulong> mOverrideScoreValue;
        ::ll::TypedStorage<1, 1, bool>  mOverridemUseMotionPredictionHints;
        // NOLINTEND
    };

    struct DebugSendRateModifiers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mSendEveryNPackets;
        ::ll::TypedStorage<4, 4, int>  mDropPacketChance;
        ::ll::TypedStorage<1, 1, bool> mDrawDebugLines;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static int& DEFAULT_DROP_PACKET_CHANCE();

        MCNAPI static int& DEFAULT_SEND_EVERY_N_PACKETS();

        MCNAPI static int& MAX_DROP_PACKET_CHANCE();

        MCNAPI static int& MAX_SEND_EVERY_N_PACKETS();

        MCNAPI static int& MIN_DROP_PACKET_CHANCE();

        MCNAPI static int& MIN_SEND_EVERY_N_PACKETS();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                                 mEntity;
    ::ll::TypedStorage<1, 1, bool>                                     mHasInitializedLastSent;
    ::ll::TypedStorage<1, 1, bool>                                     mAutoSend;
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData>                 mLastSentMoveData;
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData>                 mLastReceivedMoveData;
    ::ll::UntypedStorage<4, 4>                                         mLastForceSendSpatialDataValue;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, Tick>> mLastSpatialUpdateTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&);
    SpatialActorNetworkData(SpatialActorNetworkData const&);
    SpatialActorNetworkData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SpatialActorNetworkData(::Actor&);

    MCNAPI bool _shouldUpdateBasedOptimizationOnScore(::Player&) const;

    MCNAPI void enableAutoSend(bool);

    MCNAPI ::Vec3 getLastSentPositionForAddingEntity();

    MCNAPI void handleServerData(
        ::MoveActorDeltaData const&,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&,
        bool
    );

    MCNAPI void handleServerData(
        ::MoveActorAbsoluteData const&,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&,
        bool
    );

    MCNAPI bool isAutoSendEnabled() const;

    MCNAPI void sendUpdate(bool, bool, bool, bool);

    MCNAPI void setLastReceivedMoveDataForAddedEntity(::ActorRuntimeID, ::Vec3, ::Vec2, float);

    MCNAPI bool shouldSendMotionPredictionHintsPacket() const;

    MCNAPI bool shouldSendUpdate(bool, bool) const;

    MCNAPI void teleportEntity(::Vec3 const&, ::Vec2 const&, float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPredictedMovementComponentEnabled();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SpatialActorNetworkData::DebugSendRateModifiers& mDebugSendRateModifiers();

    MCNAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& mDebugSpatialPacketModifiers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor&);
    // NOLINTEND
};
