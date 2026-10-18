#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class LifeToken; }
namespace OreUI::Detail { class ICallable; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class LifeToken; }
namespace OreUI::Detail { class ICallable; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class InvocationStatus {
public:
    // InvocationStatus inner types define
    using CallablePtr = ::OreUI::Detail::ICallable*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::ICallable*>      mCallable;
    ::ll::TypedStorage<8, 16, std::weak_ptr<OreUI::LifeToken>> mToken;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InvocationStatus {
public:
    // InvocationStatus inner types define
    using CallablePtr = ::OreUI::Detail::ICallable*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::ICallable*>          mCallable;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::OreUI::LifeToken>> mToken;
    // NOLINTEND
};
#else // @header-generator platform
class InvocationStatus {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
