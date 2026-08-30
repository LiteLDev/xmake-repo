#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ItemStackRequestCereal {

struct RequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7deeed;
    ::ll::UntypedStorage<8, 24> mUnk752b3b;
    ::ll::UntypedStorage<8, 24> mUnkf104df;
    ::ll::UntypedStorage<4, 4>  mUnk3ed705;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestData& operator=(RequestData const&);
    RequestData(RequestData const&);
    RequestData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ItemStackRequestCereal::RequestData const&) const;

    MCNAPI ~RequestData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
