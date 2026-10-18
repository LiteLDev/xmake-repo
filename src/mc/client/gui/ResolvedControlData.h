#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ResolvedPropertyData.h"
#include "mc/client/gui/ResolvedTextureData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace UI::Resources { struct ResolvedPropertyData; }
namespace UI::Resources { struct ResolvedTextureData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace UI::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
struct ResolvedControlData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      conrolName;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedTextureData>>  textures;
    ::ll::TypedStorage<8, 24, std::vector<UI::Resources::ResolvedPropertyData>> proeprties;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ResolvedControlData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                        conrolName;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedTextureData>>  textures;
    ::ll::TypedStorage<8, 24, ::std::vector<::UI::Resources::ResolvedPropertyData>> proeprties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ResolvedControlData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ResolvedControlData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace UI::Resources
