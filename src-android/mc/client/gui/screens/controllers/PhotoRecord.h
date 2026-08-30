#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/CaptionState.h"
#include "mc/deps/core/file/PathBuffer.h"

struct PhotoRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>              path;
    ::ll::TypedStorage<8, 24, std::string>   desc;
    ::ll::TypedStorage<8, 24, std::string>   borderResourcePath;
    ::ll::TypedStorage<4, 4, ::CaptionState> state;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const getName() const;

    MCNAPI ~PhotoRecord();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
