#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/AdvanceFrameResult.h"
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

namespace History {

struct GameTypeReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameType> mPlayerGameType;
    // NOLINTEND

public:
    // prevent constructor by default
    GameTypeReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTypeReplay();

    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    virtual void advanceLiveFrame(::Actor&, std::optional<ulong>);

    virtual std::bitset<2> getCorrectionTypeBitset() const;

    virtual void advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    MCNAPI void $advanceLiveFrame(::Actor&, std::optional<ulong>);

    MCNAPI std::bitset<2> $getCorrectionTypeBitset() const;

    MCNAPI void $advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
