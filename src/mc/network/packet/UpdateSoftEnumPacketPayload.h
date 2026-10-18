#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SoftEnumUpdateType.h"

struct UpdateSoftEnumPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SoftEnumUpdateType>      mType;
    ::ll::TypedStorage<8, 24, std::string>              mEnumName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UpdateSoftEnumPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SoftEnumUpdateType>          mType;
    ::ll::TypedStorage<8, 32, ::std::string>                mEnumName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mValues;
#endif // @header-generator platform
    // NOLINTEND
};
