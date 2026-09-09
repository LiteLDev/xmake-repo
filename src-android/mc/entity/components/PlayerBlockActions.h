#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerBlockActionData.h"
#include "mc/network/packet/PlayerActionType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPos;
class ReadOnlyBinaryStream;
// clang-format on

class PlayerBlockActions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PlayerBlockActionData>> mActions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAbortDestroyBlock(::BlockPos const&, int);

    MCNAPI void addContinueDestroyBlock(::BlockPos const&, int);

    MCNAPI void addCrackBlock(::BlockPos const&, int);

    MCNAPI void addDeserializedAction(::PlayerBlockActionData const&);

    MCNAPI void addPredictDestroyBlock(::BlockPos const&, int);

    MCNAPI void addStartDestroyBlock(::BlockPos const&, int);

    MCNAPI void addStopDestroyBlock();

    MCNAPI void clear();

    MCNAPI ::PlayerBlockActionData const* findFirstOfType(::PlayerActionType) const;

    MCNAPI ::gsl::span<const PlayerBlockActionData> get() const;

    MCNAPI ::PlayerBlockActions& operator=(::PlayerBlockActions&&);

    MCNAPI bool operator==(::PlayerBlockActions const&) const;
    // NOLINTEND
};
