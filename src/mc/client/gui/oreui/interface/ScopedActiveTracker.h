#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScopedFPSDataTracker.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScopedFPSDataTracker.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScopedActiveTracker : public ::OreUI::ScopedFPSDataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDataChangeCulprit;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedActiveTracker& operator=(ScopedActiveTracker const&);
    ScopedActiveTracker(ScopedActiveTracker const&);
    ScopedActiveTracker();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScopedActiveTracker : public ::OreUI::ScopedFPSDataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mDataChangeCulprit;
    // NOLINTEND
};
#else // @header-generator platform
struct ScopedActiveTracker {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
