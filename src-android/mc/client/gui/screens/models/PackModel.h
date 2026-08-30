#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackReport.h"

// auto generated forward declare list
// clang-format off
class Pack;
// clang-format on

struct PackModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<const Pack>> mPack;
    ::ll::TypedStorage<8, 24, std::string>               mDateAvailable;
    ::ll::UntypedStorage<8, 224>                         mPackReport;
    ::ll::TypedStorage<1, 1, bool>                       mHasWarnings;
    ::ll::TypedStorage<4, 4, int>                        mSubpackIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackModel();
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
