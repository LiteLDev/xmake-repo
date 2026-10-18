#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

struct IMovementCorrection {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IMovementCorrection();
#else // @header-generator platform
    virtual ~IMovementCorrection() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);
#else // @header-generator platform
    virtual ::AdvanceFrameResult
    getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& snapshot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void advanceLiveFrame(::Actor&, std::optional<ulong>) = 0;
#else // @header-generator platform
    virtual void advanceLiveFrame(::Actor&, ::std::optional<uint64>) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::bitset<2> getCorrectionTypeBitset() const = 0;
#else // @header-generator platform
    virtual ::std::bitset<2> getCorrectionTypeBitset() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void advanceFrame(::EntityContext&) const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::bitset<2> const& ExplicitCorrectionBitset();

    MCNAPI static std::bitset<2> const& PassiveCorrectionBitset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void advanceFrame(::EntityContext& rewindEntity) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::AdvanceFrameResult
    $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& snapshot);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
