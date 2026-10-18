#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/Expected.h"
#endif // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/ErrorInfo.h"
#endif // @header-generator platform

namespace Bedrock {
#if defined(LL_PLAT_A) // @header-generator platform

template <typename T0, typename T1>
class Result {};

} // namespace Bedrock
#else // @header-generator platform
template <typename T, typename Err>
class Result : public nonstd::expected<T, ErrorInfo<Err>> {
public:
    using Base = nonstd::expected<T, ErrorInfo<Err>>;
    using Base::Base;
};
}; // namespace Bedrock
#endif // @header-generator platform
