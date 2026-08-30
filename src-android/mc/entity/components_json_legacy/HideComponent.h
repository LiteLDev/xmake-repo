#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HideComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsInRaid;
    ::ll::TypedStorage<1, 1, bool> mReactToBell;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HideComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool isInRaid();

    MCNAPI bool isReactingToBell();

    MCNAPI void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setInRaid();

    MCNAPI void setNotHiding();

    MCNAPI void setReactingToBell();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
