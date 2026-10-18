#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/storagemanager/ContentType.h"

namespace OreUI::EntryPoints::StorageSettings {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeRoute(::StorageManager::ContentType type);

MCAPI ::std::optional<::StorageManager::ContentType> getContentTypeFromRoute(::std::string const& route);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::StorageSettings
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
