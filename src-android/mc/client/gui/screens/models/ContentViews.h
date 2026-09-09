#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentView;
// clang-format on

struct ContentViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                           mSelectedContentView;
    ::ll::UntypedStorage<8, 24>                           mGlobalContentView;
    ::ll::UntypedStorage<8, 24>                           mAvailableContentView;
    ::ll::UntypedStorage<8, 24>                           mRealmsContentView;
    ::ll::UntypedStorage<8, 24>                           mInvalidContentView;
    ::ll::UntypedStorage<8, 24>                           mUnownedContentView;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mInitialSelectedPacks;
    ::ll::TypedStorage<1, 1, bool>                        mRepopulateReports;
    ::ll::TypedStorage<1, 1, bool>                        mSelectedContentUpdated;
    ::ll::TypedStorage<1, 1, bool>                        mGetInitialSelectedPacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContentViews();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
