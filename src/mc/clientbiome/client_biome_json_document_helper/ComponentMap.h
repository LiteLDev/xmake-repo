#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_40 { struct IClientBiomeJsonComponent; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ClientBiomeJsonDocumentHelper {

struct ComponentMap {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::shared_ptr<SharedTypes::v1_21_40::IClientBiomeJsonComponent>>> mJsonComponents;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkf3ea7c;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentMap& operator=(ComponentMap const&);
    ComponentMap(ComponentMap const&);
    ComponentMap();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ComponentMap();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ClientBiomeJsonDocumentHelper
