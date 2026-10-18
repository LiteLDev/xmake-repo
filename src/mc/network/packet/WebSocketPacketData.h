#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct WebSocketPacketData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mIP;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mIP;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    WebSocketPacketData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit WebSocketPacketData(std::string const&);
#else // @header-generator platform
    MCAPI explicit WebSocketPacketData(::std::string const& ip);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::std::string const& ip);
#endif // @header-generator platform
    // NOLINTEND
};
