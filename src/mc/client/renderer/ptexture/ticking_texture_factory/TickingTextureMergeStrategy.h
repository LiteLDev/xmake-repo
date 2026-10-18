#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/resources/JsonMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace TickingTextureFactory {

#if defined(LL_PLAT_A) // @header-generator platform
class TickingTextureMergeStrategy : public ::JsonMergeStrategy {
public:
    // TickingTextureMergeStrategy inner types define
    using ErrorCallback = std::function<void(const std::string&, const LoadedResourceData&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mErrorCallback;
    // NOLINTEND
};
#else // @header-generator platform
class TickingTextureMergeStrategy {};
#endif // @header-generator platform

} // namespace TickingTextureFactory
