#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/MessagePatchnoteData.h"

struct MessageGamedropData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MessagePatchnoteData>> mPatchnotes;
    ::ll::TypedStorage<8, 24, std::string>                       mFooterButtonId;
    ::ll::TypedStorage<8, 24, std::string>                       mFooterTitle;
    ::ll::TypedStorage<8, 24, std::string>                       mFooterBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageGamedropData& operator=(MessageGamedropData const&);
    MessageGamedropData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageGamedropData(::MessageGamedropData const&);

    MCNAPI ~MessageGamedropData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MessageGamedropData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
