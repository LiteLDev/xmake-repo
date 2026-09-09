#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
// clang-format on

namespace PointLighting::UpdatePhases {

struct ScoreCompute {
public:
    // ScoreCompute inner types declare
    // clang-format off
    struct PerHeuristicState;
    // clang-format on

    // ScoreCompute inner types define
    struct PerHeuristicState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, std::function<bool(const SubChunkPos&)>> mFilter;
        ::ll::TypedStorage<8, 8, ulong>                                    mLightContainerFilteredSize;
        ::ll::TypedStorage<8, 8, ulong>                                    mLightContainerOffset;
        ::ll::TypedStorage<4, 4, float>                                    mMaxScore;
        ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, float>>     mHeuristicScores;
        ::ll::UntypedStorage<1, 16>                                        mNormalized;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerHeuristicState& operator=(PerHeuristicState const&);
        PerHeuristicState(PerHeuristicState const&);
        PerHeuristicState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PerHeuristicState(std::function<bool(const SubChunkPos&)>, ulong const);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(std::function<bool(const SubChunkPos&)>, ulong const);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mCurrentScores;
    ::ll::UntypedStorage<8, 528> mPerHeuristicState;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreCompute& operator=(ScoreCompute const&);
    ScoreCompute(ScoreCompute const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScoreCompute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PointLighting::UpdatePhases
