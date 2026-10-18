#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAccessibilityProvider;
namespace World { class LocalWorldList; }
// clang-format on

namespace OreUI {

class LocalWorldListQuery : public ::OreUI::QueryBase<OreUI::LocalWorldListQuery> {
public:
    // LocalWorldListQuery inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // LocalWorldListQuery inner types define
    struct Entry : public ::OreUI::PropertyObject<OreUI::LocalWorldListQuery::Entry> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 168> mId;
        ::ll::UntypedStorage<8, 168> mName;
        ::ll::UntypedStorage<8, 152> mAllContentOwned;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<World::LocalWorldList>> mLocalWorldList;
    ::ll::UntypedStorage<8, 24>                                       mAccessibilityProvider;
    ::ll::UntypedStorage<8, 104>                                      mWorlds;
    ::ll::UntypedStorage<8, 152>                                      mOtherStorageTypeHasWorlds;
    // NOLINTEND
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
