#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ResolvedControlData.h"
#include "mc/client/gui/ResolvedPropertyData.h"
#include "mc/client/gui/ResolvedTextureData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace UI::Resources { struct ResolvedControlData; }
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace UI::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      identifier;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedControlData>>  controlData;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedTextureData>>  textureData;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedPropertyData>> propertyData;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResolvedDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                        identifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedControlData>>  controlData;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedTextureData>>  textureData;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedPropertyData>> propertyData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResolvedDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedDefinition {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace UI::Resources
