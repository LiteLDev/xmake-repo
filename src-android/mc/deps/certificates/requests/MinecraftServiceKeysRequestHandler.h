#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class WebKey;
struct MinecraftServiceKeysMetadata;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

class MinecraftServiceKeysRequestHandler {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Async<std::optional<std::unordered_map<std::string, WebKey>>>
    getKeys(::TaskGroup&, std::string const&, bool);

    MCNAPI static ::Bedrock::Threading::Async<std::optional<MinecraftServiceKeysMetadata>>
    getKeysMetadata(::TaskGroup&, std::string const&, bool);
    // NOLINTEND
};
