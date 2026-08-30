#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/MovePredictionType.h"
#include "mc/entity/components/PredictedMovementValues.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class AddActorPacket;
class MotionPredictionHintsPacket;
class MoveActorAbsoluteData;
class SetActorMotionPacket;
struct PredictedMovementSystemParams;
// clang-format on

class PredictedMovementComponent {
public:
    // PredictedMovementComponent inner types declare
    // clang-format off
    struct HistoryTimestampData;
    struct PredictionDbgWindowData;
    struct RuntimePredictionData;
    struct HistoryItem;
    class HistoryCache;
    struct MoveHistoryItem;
    struct MotionHistoryItem;
    struct PredictionDbgData;
    // clang-format on

    // PredictedMovementComponent inner types define
    struct HistoryTimestampData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mReceiveTimepoint;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mTimepointDiff;
        ::ll::TypedStorage<4, 4, uint> mSequenceId;
        // clang-format on
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static uint& mSequenceIdGenerator();
        // NOLINTEND
    };

    struct PredictionDbgWindowData {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, long> mDefaultSizeMS;
        ::ll::TypedStorage<4, 4, float> mScalingFactor;
        ::ll::TypedStorage<8, 8, long> mSizeMS;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRenderTime;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mActualStartTime;
        ::ll::TypedStorage<1, 1, bool> mUsedLastEndItemFallback;
        ::ll::TypedStorage<1, 1, bool> mUsedStartItemThisTickFallback;
        ::ll::TypedStorage<1, 1, bool> mUsedFirstTwoHistoryItemsFallback;
        ::ll::TypedStorage<1, 1, bool> mUsedCachedStartItem;
        ::ll::TypedStorage<1, 1, bool> mUsedOutsideWindowStartItem;
        // clang-format on
        // NOLINTEND
    };

    struct RuntimePredictionData {
    public:
        // RuntimePredictionData inner types declare
        // clang-format off
        struct LerpedInterval;
        // clang-format on

        // RuntimePredictionData inner types define
        struct LerpedInterval {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mT1;
            ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mT2;
            ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLerped;
            ::ll::TypedStorage<4, 4, uint>                                                  mTick;
            // NOLINTEND

        public:
            // static variables
            // NOLINTBEGIN
            MCNAPI static uint const& mMaxTicks();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<4, 4, uint> mTotalHistoryItems;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastMoveDataTimepoint;
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastMotionDataTimepoint;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLastDataInterval;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLastMoveDataInterval;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mLastMotionDataInterval;
        ::ll::TypedStorage<8, 32, ::PredictedMovementComponent::RuntimePredictionData::LerpedInterval> mLerpedDataInterval;
        ::ll::TypedStorage<8, 32, ::PredictedMovementComponent::RuntimePredictionData::LerpedInterval> mLerpedMoveDataInterval;
        ::ll::TypedStorage<8, 32, ::PredictedMovementComponent::RuntimePredictionData::LerpedInterval> mLerpedMotionDataInterval;
        ::ll::TypedStorage<8, 8, ulong> mCurrentHistoryItemSize;
        ::ll::TypedStorage<4, 28, std::array<uint, 7>> mStats;
        // clang-format on
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RuntimePredictionData();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void updateRuntimeData(
            std::shared_ptr<const PredictedMovementComponent::HistoryItem> const&,
            std::shared_ptr<const PredictedMovementComponent::HistoryItem> const&,
            ulong
        );
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

    struct HistoryItem {
    public:
        // HistoryItem inner types define
        enum class ItemType : int {
            Motion = 0,
            Move   = 1,
            Max    = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::PredictedMovementComponent::HistoryTimestampData const> mTimestampData;
        ::ll::TypedStorage<4, 4, ::PredictedMovementComponent::HistoryItem::ItemType const> mType;
        ::ll::TypedStorage<1, 1, bool const>                                                mTimepointAdjusted;
        // NOLINTEND

    public:
        // prevent constructor by default
        HistoryItem();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~HistoryItem();

        virtual bool isValidStartItem() const = 0;

        virtual bool isAddedActorItem() const = 0;

        virtual bool isMotionHintItem() const = 0;

        virtual std::string toString() const;

        virtual ::Vec3 const& getPos() const = 0;

        virtual ::Vec2 const& getRot() const = 0;

        virtual float getYHeadRot() const = 0;

        virtual bool isOnGround() const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::string $toString() const;
        // NOLINTEND
    };

    class HistoryCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, std::deque<std::shared_ptr<const PredictedMovementComponent::HistoryItem>>> mHistory;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::MoveHistoryItem>>   mLastMoveItem;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::MotionHistoryItem>> mLastMotionItem;
        ::ll::TypedStorage<8, 48, std::deque<uint>> mSetInitialPositionIds;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _addHistoryItem(std::shared_ptr<const PredictedMovementComponent::HistoryItem> const&);

        MCNAPI void _clearHistory();

        MCNAPI void addHistory(
            ::AddActorPacket const&,
            std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
        );

        MCNAPI void addHistory(
            ::MoveActorAbsoluteData const&,
            std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
        );

        MCNAPI void addHistory(
            ::SetActorMotionPacket const&,
            std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
        );

        MCNAPI void addHistory(
            ::MotionPredictionHintsPacket const&,
            std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
        );

        MCNAPI ulong getHistorySize() const;

        MCNAPI std::tuple<
            std::shared_ptr<const PredictedMovementComponent::HistoryItem>,
            std::shared_ptr<const PredictedMovementComponent::HistoryItem>>
        getLastTwoHistoryItems() const;
        // NOLINTEND
    };

    struct MoveHistoryItem : public ::PredictedMovementComponent::HistoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3 const> mPos;
        ::ll::TypedStorage<4, 8, ::Vec2 const>  mRot;
        ::ll::TypedStorage<4, 4, float const>   mYHeadRot;
        ::ll::TypedStorage<1, 1, bool const>    mOnGround;
        ::ll::TypedStorage<1, 1, bool const>    mIsAddedActorItem;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MoveHistoryItem();

        virtual bool isValidStartItem() const;

        virtual bool isAddedActorItem() const;

        virtual bool isMotionHintItem() const;

        virtual ::Vec3 const& getPos() const;

        virtual ::Vec2 const& getRot() const;

        virtual float getYHeadRot() const;

        virtual bool isOnGround() const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $isValidStartItem() const;

        MCNAPI bool $isAddedActorItem() const;

        MCNAPI bool $isMotionHintItem() const;

        MCNAPI ::Vec3 const& $getPos() const;

        MCNAPI ::Vec2 const& $getRot() const;

        MCNAPI float $getYHeadRot() const;

        MCNAPI bool $isOnGround() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct MotionHistoryItem : public ::PredictedMovementComponent::HistoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3 const> mMotion;
        ::ll::TypedStorage<4, 12, ::Vec3 const> mCumulativeMotion;
        ::ll::TypedStorage<1, 1, bool const>    mOnGround;
        ::ll::TypedStorage<4, 12, ::Vec3 const> mPos;
        ::ll::TypedStorage<4, 8, ::Vec2 const>  mRot;
        ::ll::TypedStorage<4, 4, float const>   mYHeadRot;
        ::ll::TypedStorage<1, 1, bool const>    mIsValidStartItem;
        ::ll::TypedStorage<1, 1, bool const>    mIsAddedActorItem;
        ::ll::TypedStorage<1, 1, bool const>    mIsMotionHintItem;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MotionHistoryItem();

        virtual bool isValidStartItem() const;

        virtual bool isAddedActorItem() const;

        virtual bool isMotionHintItem() const;

        virtual ::Vec3 const& getPos() const;

        virtual ::Vec2 const& getRot() const;

        virtual float getYHeadRot() const;

        virtual bool isOnGround() const;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI MotionHistoryItem(
            ::Vec3 const&,
            bool,
            bool,
            std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&,
            std::shared_ptr<const PredictedMovementComponent::MoveHistoryItem> const&,
            std::shared_ptr<const PredictedMovementComponent::MotionHistoryItem> const&,
            bool,
            std::chrono::duration<long long, std::ratio<1, 1000>> const&
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::Vec3 const&,
            bool,
            bool,
            std::chrono::time_point<
                std::chrono::steady_clock,
                std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&,
            std::shared_ptr<const PredictedMovementComponent::MoveHistoryItem> const&,
            std::shared_ptr<const PredictedMovementComponent::MotionHistoryItem> const&,
            bool,
            std::chrono::duration<long long, std::ratio<1, 1000>> const&
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI bool $isValidStartItem() const;

        MCNAPI bool $isAddedActorItem() const;

        MCNAPI bool $isMotionHintItem() const;

        MCNAPI ::Vec3 const& $getPos() const;

        MCNAPI ::Vec2 const& $getRot() const;

        MCNAPI float $getYHeadRot() const;

        MCNAPI bool $isOnGround() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct PredictionDbgData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::MovePredictionType>                                            mType;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::HistoryItem>> mFromItem;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::HistoryItem>> mToItem;
        ::ll::TypedStorage<4, 12, ::Vec3>                                                         mLerpToPos;
        ::ll::TypedStorage<4, 4, float>                                                           mLerpFactor;
        ::ll::TypedStorage<8, 56, ::PredictedMovementComponent::PredictionDbgWindowData> mInterpolationWindowData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PredictionDbgData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using PredictionEventsListenerFunction = std::function<void(MovePredictionType)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>                                                                   mDisableConditions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PredictedMovementComponent::RuntimePredictionData>> mRuntimePredictionData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::HistoryItem>>    mLastStartItem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::HistoryItem>>    mLastEndItem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PredictedMovementComponent::HistoryCache>>          mHistoryCache;
    ::ll::TypedStorage<1, 1, bool>                       mForceTeleportAfterResuming;
    ::ll::TypedStorage<1, 1, bool>                       mAllowTeleportingWithoutRegion;
    ::ll::TypedStorage<4, 4, uint>                       mLastCompletedInterpolationSequenceID;
    ::ll::UntypedStorage<8, 48>                          mPredictionEventsListenerFunc;
    ::ll::TypedStorage<8, 16, ::PredictedMovementValues> mPredictedMovementValues;
    // NOLINTEND

public:
    // prevent constructor by default
    PredictedMovementComponent& operator=(PredictedMovementComponent const&);
    PredictedMovementComponent(PredictedMovementComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PredictedMovementComponent();

    MCNAPI void
    _debugLog(::PredictedMovementSystemParams&, ::PredictedMovementComponent::PredictionDbgData const&) const;

    MCNAPI void reset();

    MCNAPI void tickNextPosition(
        ::PredictedMovementSystemParams&,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPredictedMovementEnabled(::PredictedMovementComponent const*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint const& LERP_STEP_SIZE();

    MCNAPI static std::unique_ptr<PredictedMovementComponent::RuntimePredictionData>& mGlobalRuntimePredictionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
