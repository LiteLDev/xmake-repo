#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
// clang-format on

class PerfContextTrackerDataGathererClient {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::brstd::move_only_function<void() const> createDataGatherer(::IMinecraftGame&);
    // NOLINTEND
};
