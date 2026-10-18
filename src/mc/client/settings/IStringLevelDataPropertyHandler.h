#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IStringPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IStringPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class IStringLevelDataPropertyHandler : public ::Settings::IStringPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IStringLevelDataPropertyHandler& operator=(IStringLevelDataPropertyHandler const&);
    IStringLevelDataPropertyHandler(IStringLevelDataPropertyHandler const&);
    IStringLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringLevelDataPropertyHandler() = default;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IStringLevelDataPropertyHandler : public ::Settings::IStringPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IStringLevelDataPropertyHandler& operator=(IStringLevelDataPropertyHandler const&);
    IStringLevelDataPropertyHandler(IStringLevelDataPropertyHandler const&);
    IStringLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringLevelDataPropertyHandler() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class IStringLevelDataPropertyHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
