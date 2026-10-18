#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/SystemRendererSettingsWithExternalRenderingLibrary.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/SystemRendererSettingsWithExternalRenderingLibrary.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct SystemRendererSettings : public ::cohtml::SystemRendererSettingsWithExternalRenderingLibrary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> SetRenderingResourcesDebugNames;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SystemRendererSettings : public ::cohtml::SystemRendererSettingsWithExternalRenderingLibrary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk29d812;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemRendererSettings& operator=(SystemRendererSettings const&);
    SystemRendererSettings(SystemRendererSettings const&);
    SystemRendererSettings();
};
#else // @header-generator platform
struct SystemRendererSettings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
