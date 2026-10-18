#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/components/MovePredictionType.h"
#include "mc/entity/components/PredictedMovementValues.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class AddActorPacket;
class MotionPredictionHintsPacket;
class MoveActorAbsoluteData;
class SetActorMotionPacket;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Vec2;
class Vec3;
#endif // @header-generator platform
struct PredictedMovementSystemParams;
// clang-format on

class PredictedMovementComponent {
public:
    // PredictedMovementComponent inner types declare
    // clang-format off
    struct HistoryTimestampData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct PredictionDbgWindowData;
    struct RuntimePredictionData;
#else // @header-generator platform
#endif // @header-generator platform
    struct HistoryItem;
#if defined(LL_PLAT_A) // @header-generator platform
    class HistoryCache;
    struct MoveHistoryItem;
    struct MotionHistoryItem;
#else // @header-generator platform
    struct PredictionDbgWindowData;
#endif // @header-generator platform
    struct PredictionDbgData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RuntimePredictionData;
    class HistoryCache;
    struct MotionHistoryItem;
    struct MoveHistoryItem;
#endif // @header-generator platform
    // clang-format on

    // PredictedMovementComponent inner types define
    struct HistoryTimestampData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mReceiveTimepoint;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>> const> mTimepointDiff;
        ::ll::TypedStorage<4, 4, uint> mSequenceId;
        // clang-format on
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkcc9bee;
        ::ll::UntypedStorage<8, 8> mUnk4baf21;
        ::ll::UntypedStorage<4, 4> mUnk274cb5;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        HistoryTimestampData& operator=(HistoryTimestampData const&);
        HistoryTimestampData(HistoryTimestampData const&);
        HistoryTimestampData();
#endif // @header-generator platform

    public:
        // static variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCAPI static uint& mSequenceIdGenerator();
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, ::PredictedMovementComponent::HistoryTimestampData const> mTimestampData;
        ::ll::TypedStorage<4, 4, ::PredictedMovementComponent::HistoryItem::ItemType const> mType;
        ::ll::TypedStorage<1, 1, bool const>                                                mTimepointAdjusted;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk6b77a7;
        ::ll::UntypedStorage<4, 4>  mUnk67f84b;
        ::ll::UntypedStorage<1, 1>  mUnke37de6;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        HistoryItem& operator=(HistoryItem const&);
        HistoryItem(HistoryItem const&);
#endif // @header-generator platform
        HistoryItem();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~HistoryItem();
#else // @header-generator platform
        virtual ~HistoryItem() = default;
#endif // @header-generator platform

        virtual bool isValidStartItem() const = 0;

        virtual bool isAddedActorItem() const = 0;

        virtual bool isMotionHintItem() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
        virtual std::string toString() const;
#else // @header-generator platform
        virtual ::std::string toString() const;
#endif // @header-generator platform

        virtual ::Vec3 const& getPos() const = 0;

        virtual ::Vec2 const& getRot() const = 0;

        virtual float getYHeadRot() const = 0;

        virtual bool isOnGround() const = 0;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $toString() const;
#else // @header-generator platform
        MCAPI ::std::string $toString() const;


#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class HistoryCache {
#else // @header-generator platform
    struct PredictionDbgWindowData {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 48, std::deque<std::shared_ptr<const PredictedMovementComponent::HistoryItem>>> mHistory;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::MoveHistoryItem>>   mLastMoveItem;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::MotionHistoryItem>> mLastMotionItem;
        ::ll::TypedStorage<8, 48, std::deque<uint>> mSetInitialPositionIds;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk1bec46;
        ::ll::UntypedStorage<4, 4> mUnk5f7d88;
        ::ll::UntypedStorage<8, 8> mUnkbb01d3;
        ::ll::UntypedStorage<8, 8> mUnkdb9862;
        ::ll::UntypedStorage<8, 8> mUnk889cf1;
        ::ll::UntypedStorage<8, 8> mUnk3caed8;
        ::ll::UntypedStorage<1, 1> mUnkf1656b;
        ::ll::UntypedStorage<1, 1> mUnke49c54;
        ::ll::UntypedStorage<1, 1> mUnka3765f;
        ::ll::UntypedStorage<1, 1> mUnk83f21d;
        ::ll::UntypedStorage<1, 1> mUnk1a88fd;
        // NOLINTEND

    public:
        // prevent constructor by default
        PredictionDbgWindowData& operator=(PredictionDbgWindowData const&);
        PredictionDbgWindowData(PredictionDbgWindowData const&);
        PredictionDbgWindowData();
    };

    struct PredictionDbgData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk90f739;
        ::ll::UntypedStorage<8, 16> mUnke2b404;
        ::ll::UntypedStorage<8, 16> mUnk933330;
        ::ll::UntypedStorage<4, 12> mUnkd3d419;
        ::ll::UntypedStorage<4, 4>  mUnk683f16;
        ::ll::UntypedStorage<8, 56> mUnkc64f79;
        // NOLINTEND

    public:
        // prevent constructor by default
        PredictionDbgData& operator=(PredictionDbgData const&);
        PredictionDbgData(PredictionDbgData const&);
        PredictionDbgData();
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
            ::ll::UntypedStorage<8, 8> mUnk250c8c;
            ::ll::UntypedStorage<8, 8> mUnk83704d;
            ::ll::UntypedStorage<8, 8> mUnkebc783;
            ::ll::UntypedStorage<4, 4> mUnk32a0c2;
            // NOLINTEND

        public:
            // prevent constructor by default
            LerpedInterval& operator=(LerpedInterval const&);
            LerpedInterval(LerpedInterval const&);
            LerpedInterval();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk961a6a;
        ::ll::UntypedStorage<8, 8>  mUnk44eafe;
        ::ll::UntypedStorage<8, 8>  mUnkbc15c5;
        ::ll::UntypedStorage<8, 8>  mUnk39a977;
        ::ll::UntypedStorage<8, 8>  mUnke72963;
        ::ll::UntypedStorage<8, 8>  mUnkbcf454;
        ::ll::UntypedStorage<8, 32> mUnk628c63;
        ::ll::UntypedStorage<8, 32> mUnk88c081;
        ::ll::UntypedStorage<8, 32> mUnk9ae460;
        ::ll::UntypedStorage<8, 8>  mUnk3fa1bb;
        ::ll::UntypedStorage<4, 28> mUnk38ab66;
        // NOLINTEND

    public:
        // prevent constructor by default
        RuntimePredictionData& operator=(RuntimePredictionData const&);
        RuntimePredictionData(RuntimePredictionData const&);
        RuntimePredictionData();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RuntimePredictionData() = default;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        MCAPI void reset();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class HistoryCache {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk7822d9;
        ::ll::UntypedStorage<8, 16> mUnk468c22;
        ::ll::UntypedStorage<8, 16> mUnk93cee2;
        ::ll::UntypedStorage<8, 40> mUnk4e7465;
        // NOLINTEND

    public:
        // prevent constructor by default
        HistoryCache& operator=(HistoryCache const&);
        HistoryCache(HistoryCache const&);
        HistoryCache();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI void _addHistoryItem(::std::shared_ptr<::PredictedMovementComponent::HistoryItem const> const& item);
#endif

        MCAPI void _clearHistory();

#ifdef LL_PLAT_C
        MCAPI void
        addHistory(::AddActorPacket const& actorData, ::std::chrono::steady_clock::time_point const& receiveTimepoint);

        MCAPI void addHistory(
            ::SetActorMotionPacket const&                  motionData,
            ::std::chrono::steady_clock::time_point const& receiveTimepoint
        );

        MCAPI void addHistory(
            ::MotionPredictionHintsPacket const&           motionPredictionHints,
            ::std::chrono::steady_clock::time_point const& receiveTimepoint
        );
#endif

        MCAPI void addHistory(
            ::MoveActorAbsoluteData const&                 moveData,
            ::std::chrono::steady_clock::time_point const& receiveTimepoint
        );
        // NOLINTEND
    };

#endif // @header-generator platform
    struct MotionHistoryItem : public ::PredictedMovementComponent::HistoryItem {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Vec3 const> mMotion;
        ::ll::TypedStorage<4, 12, ::Vec3 const> mCumulativeMotion;
        ::ll::TypedStorage<1, 1, bool const>    mOnGround;
        ::ll::TypedStorage<4, 12, ::Vec3 const> mPos;
        ::ll::TypedStorage<4, 8, ::Vec2 const>  mRot;
        ::ll::TypedStorage<4, 4, float const>   mYHeadRot;
        ::ll::TypedStorage<1, 1, bool const>    mIsValidStartItem;
        ::ll::TypedStorage<1, 1, bool const>    mIsAddedActorItem;
        ::ll::TypedStorage<1, 1, bool const>    mIsMotionHintItem;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnkeba6ba;
        ::ll::UntypedStorage<4, 12> mUnka8087d;
        ::ll::UntypedStorage<1, 1>  mUnkd62109;
        ::ll::UntypedStorage<4, 12> mUnk391ca0;
        ::ll::UntypedStorage<4, 8>  mUnkccd7ff;
        ::ll::UntypedStorage<4, 4>  mUnk131d7f;
        ::ll::UntypedStorage<1, 1>  mUnkeea86e;
        ::ll::UntypedStorage<1, 1>  mUnk3bfc51;
        ::ll::UntypedStorage<1, 1>  mUnk766402;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        MotionHistoryItem& operator=(MotionHistoryItem const&);
        MotionHistoryItem(MotionHistoryItem const&);
        MotionHistoryItem();
#endif // @header-generator platform

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~MotionHistoryItem();
#else // @header-generator platform
        virtual bool isValidStartItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isValidStartItem() const;
#else // @header-generator platform
        virtual bool isAddedActorItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isAddedActorItem() const;
#else // @header-generator platform
        virtual bool isMotionHintItem() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual bool isMotionHintItem() const;
#else // @header-generator platform
        virtual ::Vec3 const& getPos() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Vec3 const& getPos() const;
#else // @header-generator platform
        virtual ::Vec2 const& getRot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Vec2 const& getRot() const;
#else // @header-generator platform
        virtual float getYHeadRot() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        virtual float getYHeadRot() const;

        virtual bool isOnGround() const;
#else // @header-generator platform
        virtual bool isOnGround() const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI MotionHistoryItem(
            ::Vec3 const&                                                                   motion,
            bool                                                                            onGround,
            bool                                                                            isMotionHintItem,
            ::std::chrono::steady_clock::time_point const&                                  timepoint,
            ::std::shared_ptr<::PredictedMovementComponent::MoveHistoryItem const> const&   prevMoveItem,
            ::std::shared_ptr<::PredictedMovementComponent::MotionHistoryItem const> const& prevMotionItem,
            bool                                                                            didAdjustTimepoint,
            ::std::chrono::milliseconds const&                                              timepointDiff
        );
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI void* $ctor(
            ::Vec3 const&                                                                   motion,
            bool                                                                            onGround,
            bool                                                                            isMotionHintItem,
            ::std::chrono::steady_clock::time_point const&                                  timepoint,
            ::std::shared_ptr<::PredictedMovementComponent::MoveHistoryItem const> const&   prevMoveItem,
            ::std::shared_ptr<::PredictedMovementComponent::MotionHistoryItem const> const& prevMotionItem,
            bool                                                                            didAdjustTimepoint,
            ::std::chrono::milliseconds const&                                              timepointDiff
        );
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isValidStartItem() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCFOLD bool $isValidStartItem() const;

        MCAPI bool $isAddedActorItem() const;

        MCAPI bool $isMotionHintItem() const;

        MCAPI ::Vec3 const& $getPos() const;

        MCFOLD ::Vec2 const& $getRot() const;

        MCAPI float $getYHeadRot() const;

        MCFOLD bool $isOnGround() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool $isAddedActorItem() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct PredictionDbgData {
#else // @header-generator platform
    struct MoveHistoryItem : public ::PredictedMovementComponent::HistoryItem {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::MovePredictionType>                                            mType;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::HistoryItem>> mFromItem;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const PredictedMovementComponent::HistoryItem>> mToItem;
        ::ll::TypedStorage<4, 12, ::Vec3>                                                         mLerpToPos;
        ::ll::TypedStorage<4, 4, float>                                                           mLerpFactor;
        ::ll::TypedStorage<8, 56, ::PredictedMovementComponent::PredictionDbgWindowData> mInterpolationWindowData;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnkf7e85b;
        ::ll::UntypedStorage<4, 8>  mUnk188a45;
        ::ll::UntypedStorage<4, 4>  mUnk4ca4c2;
        ::ll::UntypedStorage<1, 1>  mUnk262622;
        ::ll::UntypedStorage<1, 1>  mUnk1dbcf5;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // prevent constructor by default
        MoveHistoryItem& operator=(MoveHistoryItem const&);
        MoveHistoryItem(MoveHistoryItem const&);
        MoveHistoryItem();

    public:
        // virtual functions
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~PredictionDbgData();
#else // @header-generator platform
        virtual bool isValidStartItem() const /*override*/;

        virtual bool isAddedActorItem() const /*override*/;

        virtual bool isMotionHintItem() const /*override*/;

        virtual ::Vec3 const& getPos() const /*override*/;

        virtual ::Vec2 const& getRot() const /*override*/;

        virtual float getYHeadRot() const /*override*/;

        virtual bool isOnGround() const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // virtual function thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD bool $isValidStartItem() const;

        MCFOLD bool $isAddedActorItem() const;

        MCFOLD bool $isMotionHintItem() const;

        MCFOLD ::Vec3 const& $getPos() const;

        MCAPI ::Vec2 const& $getRot() const;

        MCAPI float $getYHeadRot() const;

        MCFOLD bool $isOnGround() const;


#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PredictionEventsListenerFunction = std::function<void(MovePredictionType)>;
#else // @header-generator platform
    using HistoryItem = ::PredictedMovementComponent::HistoryItem;

    using MotionHistoryItem = ::PredictedMovementComponent::MotionHistoryItem;

    using MoveHistoryItem = ::PredictedMovementComponent::MoveHistoryItem;

    using PredictionEventsListenerFunction = ::std::function<void(::MovePredictionType)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::brstd::bitset<2, uchar>> mDisableConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PredictedMovementComponent::RuntimePredictionData>>
        mRuntimePredictionData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PredictedMovementComponent::HistoryItem const>> mLastStartItem;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PredictedMovementComponent::HistoryItem const>> mLastEndItem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PredictedMovementComponent::HistoryCache>>       mHistoryCache;
    ::ll::TypedStorage<1, 1, bool>                                         mForceTeleportAfterResuming;
    ::ll::TypedStorage<1, 1, bool>                                         mAllowTeleportingWithoutRegion;
    ::ll::TypedStorage<4, 4, uint>                                         mLastCompletedInterpolationSequenceID;
    ::ll::TypedStorage<8, 64, ::std::function<void(::MovePredictionType)>> mPredictionEventsListenerFunc;
    ::ll::TypedStorage<8, 16, ::PredictedMovementValues>                   mPredictedMovementValues;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PredictedMovementComponent& operator=(PredictedMovementComponent const&);
    PredictedMovementComponent(PredictedMovementComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PredictedMovementComponent();
#else // @header-generator platform
    MCAPI PredictedMovementComponent();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _debugLog(::PredictedMovementSystemParams&, ::PredictedMovementComponent::PredictionDbgData const&) const;
#else // @header-generator platform
    MCAPI void _debugLog(
        ::PredictedMovementSystemParams&                       params,
        ::PredictedMovementComponent::PredictionDbgData const& debugData
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void reset();
#else // @header-generator platform
    MCAPI void reset();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tickNextPosition(
        ::PredictedMovementSystemParams&,
        std::chrono::
            time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> const&
    );
    // NOLINTEND
#else // @header-generator platform
    MCAPI void
    tickNextPosition(::PredictedMovementSystemParams& params, ::std::chrono::steady_clock::time_point const& timepoint);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPredictedMovementEnabled(::PredictedMovementComponent const*);
#else // @header-generator platform
    MCAPI ~PredictedMovementComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static uint const& LERP_STEP_SIZE();

    MCNAPI static std::unique_ptr<PredictedMovementComponent::RuntimePredictionData>& mGlobalRuntimePredictionData();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::PredictedMovementComponent::RuntimePredictionData>& mGlobalRuntimePredictionData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
