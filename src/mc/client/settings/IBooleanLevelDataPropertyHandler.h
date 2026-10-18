#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IBooleanPropertyHandler.h"

// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class IBooleanLevelDataPropertyHandler : public ::Settings::IBooleanPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IBooleanLevelDataPropertyHandler& operator=(IBooleanLevelDataPropertyHandler const&);
    IBooleanLevelDataPropertyHandler(IBooleanLevelDataPropertyHandler const&);
    IBooleanLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBooleanLevelDataPropertyHandler() = default;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IBooleanLevelDataPropertyHandler : public ::Settings::IBooleanPropertyHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    IBooleanLevelDataPropertyHandler& operator=(IBooleanLevelDataPropertyHandler const&);
    IBooleanLevelDataPropertyHandler(IBooleanLevelDataPropertyHandler const&);
    IBooleanLevelDataPropertyHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBooleanLevelDataPropertyHandler() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class IBooleanLevelDataPropertyHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
