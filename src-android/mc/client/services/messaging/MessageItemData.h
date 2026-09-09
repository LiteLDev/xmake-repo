#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/ButtonData.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct MessageItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>   mId;
    ::ll::TypedStorage<8, 24, std::string>   mImageId;
    ::ll::TypedStorage<8, 104, ::ButtonData> mButton;
    ::ll::TypedStorage<8, 24, std::string>   mSaleBanner;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageItemData& operator=(MessageItemData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageItemData(::MessageItemData const&);

    MCNAPI ~MessageItemData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MessageItemData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
