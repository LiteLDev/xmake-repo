#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ECapabilities.h"
#include "mc/client/gui/oreui/binding/IdType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IQuery; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ECapabilities.h"
#include "mc/client/gui/oreui/binding/IdType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IQuery; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI::Debug {

struct QueryInformation {
public:
    // QueryInformation inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class QueryType : uchar {
        Static  = 0,
        Updated = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::Debug::QueryInformation::QueryType const> mType;
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType const>                     mId;
    ::ll::TypedStorage<1, 1, ::OreUI::ECapabilities const>                      mCapabilities;
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::IQuery*>                          mQuery;
    // NOLINTEND

public:
    // prevent constructor by default
    QueryInformation();
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class QueryType : uchar {
        Static  = 0,
        Updated = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::Debug::QueryInformation::QueryType const> mType;
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType const>                     mId;
    ::ll::TypedStorage<1, 1, ::OreUI::ECapabilities const>                      mCapabilities;
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::IQuery*>                          mQuery;
    // NOLINTEND
#else // @header-generator platform
    enum class QueryType : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::Debug
