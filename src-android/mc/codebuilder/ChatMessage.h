#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> type;
    ::ll::TypedStorage<8, 24, std::string> sender;
    ::ll::TypedStorage<8, 24, std::string> receiver;
    ::ll::TypedStorage<8, 24, std::string> message;
    // NOLINTEND
};

} // namespace CodeBuilder
