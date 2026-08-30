#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"

// auto generated forward declare list
// clang-format off
class RakWebSocketDataFrame;
namespace RakNet { class BitStream; }
// clang-format on

class RakWebSocketDataFrameParser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<RakWebSocketDataFrame>> mFragmentedFramePtr;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RakWebSocketDataFrame>> mFramePtr;
    ::ll::UntypedStorage<8, 48>                                       mOnFailHandler;
    ::ll::TypedStorage<1, 1, bool>                                    mParsingServerFrame;
    ::ll::UntypedStorage<4, 12>                                       mMaskingIndexOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    RakWebSocketDataFrameParser();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<RakWebSocketDataFrame> _failReadFrame(std::string const&, ::CloseStatusCode);

    MCNAPI ~RakWebSocketDataFrameParser();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
