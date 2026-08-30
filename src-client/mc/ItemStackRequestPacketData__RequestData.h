#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestPacketData {

struct RequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk609ffc;
    ::ll::UntypedStorage<8, 24> mUnk9327fb;
    ::ll::UntypedStorage<8, 24> mUnk648930;
    ::ll::UntypedStorage<4, 4>  mUnkc8d2d3;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestData& operator=(RequestData const&);
    RequestData(RequestData const&);
    RequestData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ItemStackRequestPacketData::RequestData const&) const;
    // NOLINTEND
};

} // namespace ItemStackRequestPacketData
