#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class PackLoadRequirement;
struct PackLoadInfo;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class ExperimentLoadRequirement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::AllExperiments> mExperiment;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkaecac3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExperimentLoadRequirement& operator=(ExperimentLoadRequirement const&);
    ExperimentLoadRequirement(ExperimentLoadRequirement const&);
#endif // @header-generator platform
    ExperimentLoadRequirement();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
