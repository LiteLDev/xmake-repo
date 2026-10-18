#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/threading/AsyncBase.h"
#include "mc/deps/core/threading/IAsyncGetResult.h"
#endif // @header-generator platform

namespace Bedrock::Threading {

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class IAsyncResult {};
#else // @header-generator platform
template <typename T>
class IAsyncResult : public Bedrock::Threading::AsyncBase, public Bedrock::Threading::IAsyncGetResult<T> {
public:
    using Handle            = std::shared_ptr<Bedrock::Threading::IAsyncResult<T>>;
    using CompletionHandler = std::function<void(const Bedrock::Threading::IAsyncResult<T>&)>;

    virtual T addOnComplete(Bedrock::Threading::IAsyncResult<T>::CompletionHandler) = 0;
};
#endif // @header-generator platform

} // namespace Bedrock::Threading
