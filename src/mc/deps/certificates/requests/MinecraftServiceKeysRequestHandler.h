#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class WebKey;
struct MinecraftServiceKeysMetadata;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class MinecraftServiceKeysRequestHandler {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Async<std::optional<std::unordered_map<std::string, WebKey>>>
    getKeys(::TaskGroup&, std::string const&, bool);
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Async<::std::optional<::std::unordered_map<::std::string, ::WebKey>>>
    getKeys(::TaskGroup& taskOwner, ::std::string const& endpoint, bool highPriority);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Async<std::optional<MinecraftServiceKeysMetadata>>
    getKeysMetadata(::TaskGroup&, std::string const&, bool);
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Async<::std::optional<::MinecraftServiceKeysMetadata>>
    getKeysMetadata(::TaskGroup& taskOwner, ::std::string const& authServiceUrl, bool highPriority);
#endif // @header-generator platform
    // NOLINTEND
};
