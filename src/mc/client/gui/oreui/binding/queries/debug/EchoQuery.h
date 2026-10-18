#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Debug {

#if defined(LL_PLAT_A) // @header-generator platform
class EchoQuery : public ::OreUI::QueryBase<OreUI::Debug::EchoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mNumber;
    // NOLINTEND

public:
    // prevent constructor by default
    EchoQuery();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class EchoQuery : public ::OreUI::QueryBase<::OreUI::Debug::EchoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64>> mNumber;
    // NOLINTEND
};
#else // @header-generator platform
class EchoQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::Debug
