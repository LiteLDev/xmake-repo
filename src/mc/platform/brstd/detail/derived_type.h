#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

namespace brstd::detail::function {

enum class DerivedType : int {
    MoveOnly = 0,
    Copyable = 1,
    Function = 2,
};

}
#endif // @header-generator platform
