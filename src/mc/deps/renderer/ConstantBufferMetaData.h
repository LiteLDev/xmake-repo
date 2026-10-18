#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/UniformMetaData.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ConstantBufferMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                       constantBufferName;
    ::ll::TypedStorage<8, 24, std::vector<mce::UniformMetaData>> uniformMetaData;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantBufferMetaData& operator=(ConstantBufferMetaData const&);
};
#else // @header-generator platform
class ConstantBufferMetaData {};
#endif // @header-generator platform

} // namespace mce
