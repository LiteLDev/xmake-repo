#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientboundDataDrivenUIShowScreenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mScreenId;
    ::ll::TypedStorage<4, 4, uint>                mFormId;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mDataInstanceId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>        mScreenId;
    ::ll::TypedStorage<4, 4, uint>                  mFormId;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mDataInstanceId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClientboundDataDrivenUIShowScreenPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClientboundDataDrivenUIShowScreenPacketPayload(std::string const&, uint, std::optional<uint>);
#else // @header-generator platform
    MCAPI ClientboundDataDrivenUIShowScreenPacketPayload(
        ::std::string const&  screenId,
        uint                  formId,
        ::std::optional<uint> dataInstanceId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, uint, std::optional<uint>);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& screenId, uint formId, ::std::optional<uint> dataInstanceId);
#endif // @header-generator platform
    // NOLINTEND
};
