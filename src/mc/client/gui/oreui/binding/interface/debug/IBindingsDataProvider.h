#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class ICommandGroup; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class ICommandGroup; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Debug {

#if defined(LL_PLAT_A) // @header-generator platform
class IBindingsDataProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindingsDataProvider() = default;

    virtual std::vector<OreUI::Debug::QueryInformation> getQueryInformation() const = 0;

    virtual std::vector<OreUI::Detail::ICommandGroup*> getCommands() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IBindingsDataProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBindingsDataProvider() /*override*/ = default;

    virtual ::std::vector<::OreUI::Debug::QueryInformation> getQueryInformation() const = 0;

    virtual ::std::vector<::OreUI::Detail::ICommandGroup*> getCommands() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IBindingsDataProvider {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Debug
