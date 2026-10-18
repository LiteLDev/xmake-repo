#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
class AsyncBase : public ::std::enable_shared_from_this<Bedrock::Threading::AsyncBase> {};
#else // @header-generator platform
class AsyncBase : public ::std::enable_shared_from_this<::Bedrock::Threading::AsyncBase> {};
#endif // @header-generator platform

} // namespace Bedrock::Threading
