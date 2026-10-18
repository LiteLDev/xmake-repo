#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/bedrock_log/CategoryLogFile.h"

namespace BedrockLog {

#if defined(LL_PLAT_A) // @header-generator platform
struct CategoryLogs : public ::std::array<BedrockLog::CategoryLogFile, 7> {};
#else // @header-generator platform
struct CategoryLogs : public ::std::array<::BedrockLog::CategoryLogFile, 7> {};
#endif // @header-generator platform

} // namespace BedrockLog
