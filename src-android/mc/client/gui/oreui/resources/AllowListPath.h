#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

namespace OreUI {

class AllowListPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mID;
    ::ll::TypedStorage<8, 24, std::string> mURL;
    ::ll::UntypedStorage<1, 24>            mResourcePath;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListPath(AllowListPath const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListPath();

    MCNAPI char const* resourcePath() const;

    MCNAPI std::string const& url() const;

    MCNAPI ~AllowListPath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::AllowListPath const& empty();
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

} // namespace OreUI
