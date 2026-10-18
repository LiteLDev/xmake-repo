#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExperimentStorage {
public:
    // ExperimentStorage inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ExperimentData = std::vector<bool>;
#else // @header-generator platform
    using ExperimentData = ::std::vector<bool>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<bool>> mExperimentData;
    ::ll::TypedStorage<8, 24, std::vector<bool>> mDeprecatedData;
    ::ll::TypedStorage<1, 1, bool>               mExperimentsEverToggled;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mExperimentData;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>> mDeprecatedData;
    ::ll::TypedStorage<1, 1, bool>                 mExperimentsEverToggled;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExperimentStorage& operator=(ExperimentStorage const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ExperimentStorage();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExperimentStorage();
#else // @header-generator platform
    MCNAPI ExperimentStorage(::ExperimentStorage const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isAnyToggleEnabled() const;

    MCNAPI bool sameActiveExperimentsAreEnabled(::ExperimentStorage const&) const;

    MCNAPI bool wereAnyExperimentsEverToggled() const;
#else // @header-generator platform
    MCNAPI ::ExperimentStorage& operator=(::ExperimentStorage&&);
#endif // @header-generator platform

    MCNAPI ~ExperimentStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ExperimentStorage const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
