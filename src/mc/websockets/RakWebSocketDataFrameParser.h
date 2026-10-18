#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CloseStatusCode.h"

// auto generated forward declare list
// clang-format off
class RakWebSocketDataFrame;
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class BitStream; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class RakWebSocketDataFrameParser {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<RakWebSocketDataFrame>> mFragmentedFramePtr;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RakWebSocketDataFrame>> mFramePtr;
    ::ll::UntypedStorage<8, 48>                                       mOnFailHandler;
    ::ll::TypedStorage<1, 1, bool>                                    mParsingServerFrame;
    ::ll::UntypedStorage<4, 12>                                       mMaskingIndexOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkf9f17c;
    ::ll::UntypedStorage<8, 16> mUnk860b01;
    ::ll::UntypedStorage<8, 64> mUnk435c68;
    ::ll::UntypedStorage<1, 1>  mUnk9b171a;
    ::ll::UntypedStorage<4, 4>  mUnkc8951a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RakWebSocketDataFrameParser& operator=(RakWebSocketDataFrameParser const&);
    RakWebSocketDataFrameParser(RakWebSocketDataFrameParser const&);
#endif // @header-generator platform
    RakWebSocketDataFrameParser();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<RakWebSocketDataFrame> _failReadFrame(std::string const&, ::CloseStatusCode);

    MCNAPI ~RakWebSocketDataFrameParser();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::std::shared_ptr<::RakWebSocketDataFrame>
    _failReadFrame(::std::string const& error, ::CloseStatusCode code);
#endif // @header-generator platform
    // NOLINTEND
};
