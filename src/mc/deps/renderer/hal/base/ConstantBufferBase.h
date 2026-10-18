#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
namespace mce { class RenderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ConstantBufferBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, std::array<uint, 3>>            mBindingSlots;
    ::ll::UntypedStorage<4, 4>                                mField_c6f13956;
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*> mConstantBufferContainer;
    // NOLINTEND
};
#else // @header-generator platform
class ConstantBufferBase {};
#endif // @header-generator platform

} // namespace mce
