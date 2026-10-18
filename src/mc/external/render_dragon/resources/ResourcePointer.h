#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/external/render_dragon/resources/ResourceBlockTemplate.h"
#endif // @header-generator platform

namespace mce {

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePointer {};
#else // @header-generator platform
class ResourcePointer {
public:
    ::std::shared_ptr<::mce::ResourceBlockTemplate<T0>> mResourcePointerBlock;

    virtual ~ResourcePointer() = default;
};
#endif // @header-generator platform

} // namespace mce
