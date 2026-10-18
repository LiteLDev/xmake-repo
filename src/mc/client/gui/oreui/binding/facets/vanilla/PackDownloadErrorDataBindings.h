#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackDownloadErrorDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mStorageSpaceNeeded;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPackTitles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::vector<::std::string> const& getPackTitles() const;
    // NOLINTEND
};
#else // @header-generator platform
struct PackDownloadErrorDataBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
