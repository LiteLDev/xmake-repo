#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct PackDownloadErrorDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mStorageSpaceNeeded;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPackTitles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::string> const& getPackTitles() const;

    MCNAPI ~PackDownloadErrorDataBindings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
