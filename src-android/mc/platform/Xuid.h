#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace Social {

struct Xuid : public ::NewType<std::string> {
public:
    // prevent constructor by default
    Xuid& operator=(Xuid const&);
    Xuid(Xuid const&);
    Xuid();
};

} // namespace Social
