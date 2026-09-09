#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class PackLoadRequirement;
struct PackLoadInfo;
// clang-format on

class ExperimentLoadRequirement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AllExperiments> mExperiment;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentLoadRequirement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExperimentLoadRequirement(::AllExperiments);

    MCNAPI bool satisfied(::PackLoadInfo const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<AllExperiments> getRequiredExperiments(std::vector<PackLoadRequirement> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AllExperiments);
    // NOLINTEND
};
