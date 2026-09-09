#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Packet;
// clang-format on

struct SendPacketInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Packet>> mPacketData;
    // NOLINTEND

public:
    // prevent constructor by default
    SendPacketInfo& operator=(SendPacketInfo const&);
    SendPacketInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SendPacketInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
