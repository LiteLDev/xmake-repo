#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
#else // @header-generator platform
#endif // @header-generator platform
class IRequestAction;
#if defined(LL_PLAT_A) // @header-generator platform
class ServerLevel;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DelayRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>                           mTickToExecuteOn;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IRequestAction>> mAction;
    ::ll::TypedStorage<8, 24, std::string>                    mSerializationId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>                              mTickToExecuteOn;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRequestAction>> mAction;
    ::ll::TypedStorage<8, 32, ::std::string>                      mSerializationId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DelayRequest& operator=(DelayRequest const&);
    DelayRequest(DelayRequest const&);
    DelayRequest();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DelayRequest();
#else // @header-generator platform
    MCAPI ~DelayRequest();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
