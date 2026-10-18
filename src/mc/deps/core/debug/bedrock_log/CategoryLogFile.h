#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/diagnostics/bedrock_log/LogChannel.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace BedrockLog { struct LogDetails; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace BedrockLog {

struct CategoryLogFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<BedrockLog::LogChannel, std::unique_ptr<BedrockLog::LogDetails>>> mChannel;
    ::ll::TypedStorage<8, 8, std::bitset<3>> mCombinedChannelMask;
    ::ll::TypedStorage<4, 4, int> mMessageCount;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk85dd90;
    ::ll::UntypedStorage<4, 4>  mUnkd3b10f;
    ::ll::UntypedStorage<4, 4>  mUnkf08fde;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CategoryLogFile& operator=(CategoryLogFile const&);
    CategoryLogFile(CategoryLogFile const&);
    CategoryLogFile();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void AddChannel(::BedrockLog::LogChannel);
#else // @header-generator platform
    MCAPI void AddChannel(::BedrockLog::LogChannel channel);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BedrockLog
