#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PubSub::ThreadModel {

struct SingleThreaded {
public:
    // SingleThreaded inner types declare
    // clang-format off
    class NullMutex;
    // clang-format on

    // SingleThreaded inner types define
    class NullMutex {};

#if defined(LL_PLAT_A) // @header-generator platform
    using MutexType = ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex;
#else // @header-generator platform
    using NullMutex = ::Bedrock::PubSub::ThreadModel::SingleThreaded::NullMutex;
#endif // @header-generator platform
};

} // namespace Bedrock::PubSub::ThreadModel
