#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/components/ForceSendSpatialDataValue.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/packet/MoveActorAbsoluteData.h"
#include "mc/world/level/Tick.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ActorRuntimeID;
#if defined(LL_PLAT_A) // @header-generator platform
class MoveActorDeltaData;
class Packet;
#else // @header-generator platform
class MoveActorAbsoluteData;
#endif // @header-generator platform
class Player;
class Vec2;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ConditionalBandwidthOptimization;
struct NetworkIdentifierWithSubId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SpatialActorNetworkData {
public:
    // SpatialActorNetworkData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct DebugSpatialPacketModifiers;
#else // @header-generator platform
#endif // @header-generator platform
    struct DebugSendRateModifiers;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct DebugSpatialPacketModifiers;
#endif // @header-generator platform
    // clang-format on

    // SpatialActorNetworkData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct DebugSendRateModifiers {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int>  mSendEveryNPackets;
        ::ll::TypedStorage<4, 4, int>  mDropPacketChance;
        ::ll::TypedStorage<1, 1, bool> mDrawDebugLines;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk3652fb;
        ::ll::UntypedStorage<4, 4> mUnkd1ec5e;
        ::ll::UntypedStorage<1, 1> mUnk2a008d;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // static variables
        // NOLINTBEGIN
        MCNAPI static int& DEFAULT_DROP_PACKET_CHANCE();
#else // @header-generator platform
        // prevent constructor by default
        DebugSendRateModifiers& operator=(DebugSendRateModifiers const&);
        DebugSendRateModifiers(DebugSendRateModifiers const&);
        DebugSendRateModifiers();
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static int& DEFAULT_SEND_EVERY_N_PACKETS();

        MCNAPI static int& MAX_DROP_PACKET_CHANCE();

        MCNAPI static int& MAX_SEND_EVERY_N_PACKETS();

        MCNAPI static int& MIN_DROP_PACKET_CHANCE();

        MCNAPI static int& MIN_SEND_EVERY_N_PACKETS();
#else // @header-generator platform
    struct DebugSpatialPacketModifiers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkcde04f;
        ::ll::UntypedStorage<8, 8> mUnk70f911;
        ::ll::UntypedStorage<8, 8> mUnka07cd9;
        ::ll::UntypedStorage<1, 1> mUnke12a67;
        ::ll::UntypedStorage<1, 1> mUnk2c6ac9;
        ::ll::UntypedStorage<4, 4> mUnke0a99e;
        ::ll::UntypedStorage<8, 8> mUnk92dc7e;
        ::ll::UntypedStorage<8, 8> mUnk70a9cd;
        ::ll::UntypedStorage<1, 1> mUnk529cf2;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        DebugSpatialPacketModifiers& operator=(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&);
        DebugSpatialPacketModifiers();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                                 mEntity;
    ::ll::TypedStorage<1, 1, bool>                                     mHasInitializedLastSent;
    ::ll::TypedStorage<1, 1, bool>                                     mAutoSend;
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData>                 mLastSentMoveData;
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData>                 mLastReceivedMoveData;
    ::ll::UntypedStorage<4, 4>                                         mLastForceSendSpatialDataValue;
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, Tick>> mLastSpatialUpdateTicks;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk3d576d;
    ::ll::UntypedStorage<1, 1>  mUnk61c3eb;
    ::ll::UntypedStorage<1, 1>  mUnkf6f1aa;
    ::ll::UntypedStorage<8, 32> mUnk662955;
    ::ll::UntypedStorage<8, 32> mUnk4f87d7;
    ::ll::UntypedStorage<4, 4>  mUnkec90d2;
    ::ll::UntypedStorage<8, 64> mUnk5ce137;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SpatialActorNetworkData& operator=(SpatialActorNetworkData const&);
    SpatialActorNetworkData(SpatialActorNetworkData const&);
    SpatialActorNetworkData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SpatialActorNetworkData(::Actor&);
#else // @header-generator platform
    MCNAPI bool _shouldUpdateBasedOptimizationOnScore(::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _shouldUpdateBasedOptimizationOnScore(::Player&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void handleServerData(
        ::MoveActorAbsoluteData const&                 moveData,
        ::std::chrono::steady_clock::time_point const& receiveTimepoint,
        bool                                           isPredictableActor
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enableAutoSend(bool);
#else // @header-generator platform
    MCNAPI void sendUpdate(bool forceMove, bool forceMoveLocalEntity, bool forceAbsoluteMovement, bool forceCompletion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void setLastReceivedMoveDataForAddedEntity(
        ::ActorRuntimeID runtimeId,
        ::Vec3           position,
        ::Vec2           rotation,
        float            yHeadRotation
    );
#endif
#endif // @header-generator platform

    MCNAPI bool shouldSendMotionPredictionHintsPacket() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool shouldSendUpdate(bool, bool) const;

    MCNAPI void teleportEntity(::Vec3 const&, ::Vec2 const&, float);
#else // @header-generator platform
    MCNAPI void teleportEntity(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPredictedMovementComponentEnabled();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SpatialActorNetworkData::DebugSendRateModifiers& mDebugSendRateModifiers();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI static ::SpatialActorNetworkData::DebugSpatialPacketModifiers& mDebugSpatialPacketModifiers();
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
