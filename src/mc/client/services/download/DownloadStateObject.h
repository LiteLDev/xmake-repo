#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/DlcId.h"
#include "mc/deps/core/resource/PackIdVersion.h"

struct DownloadStateObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::DlcId const>                   mDlcId;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion> const> mPackIdentities;
    ::ll::TypedStorage<1, 1, bool const>                        mSuccess;
    // NOLINTEND

public:
    // prevent constructor by default
    DownloadStateObject& operator=(DownloadStateObject const&);
    DownloadStateObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DownloadStateObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DownloadStateObject {};
#endif // @header-generator platform
