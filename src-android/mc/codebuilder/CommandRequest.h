#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

namespace CodeBuilder {

struct CommandRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                            version;
    ::ll::TypedStorage<8, 24, std::string>                   commandLine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> origin;
    // NOLINTEND
};

} // namespace CodeBuilder
