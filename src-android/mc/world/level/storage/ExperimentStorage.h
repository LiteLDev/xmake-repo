#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {
public:
    // ExperimentStorage inner types define
    using ExperimentData = std::vector<bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<bool>> mExperimentData;
    ::ll::TypedStorage<8, 24, std::vector<bool>> mDeprecatedData;
    ::ll::TypedStorage<1, 1, bool>               mExperimentsEverToggled;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentStorage& operator=(ExperimentStorage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExperimentStorage();

    MCNAPI bool isAnyToggleEnabled() const;

    MCNAPI bool sameActiveExperimentsAreEnabled(::ExperimentStorage const&) const;

    MCNAPI bool wereAnyExperimentsEverToggled() const;

    MCNAPI ~ExperimentStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
