#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/bedrock_log/LogChannel.h"

// auto generated forward declare list
// clang-format off
namespace BedrockLog { struct LogDetails; }
// clang-format on

namespace BedrockLog {

struct CategoryLogFile {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<BedrockLog::LogChannel, std::unique_ptr<BedrockLog::LogDetails>>> mChannel;
    ::ll::TypedStorage<8, 8, std::bitset<3>> mCombinedChannelMask;
    ::ll::TypedStorage<4, 4, int> mMessageCount;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddChannel(::BedrockLog::LogChannel);
    // NOLINTEND
};

} // namespace BedrockLog
