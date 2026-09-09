#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientboundDataDrivenUIShowScreenPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        mScreenId;
    ::ll::TypedStorage<4, 4, uint>                mFormId;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mDataInstanceId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientboundDataDrivenUIShowScreenPacketPayload(std::string const&, uint, std::optional<uint>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, uint, std::optional<uint>);
    // NOLINTEND
};
