#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class StaticFeatureFlagQuery : public ::OreUI::QueryBase<OreUI::StaticFeatureFlagQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                        mEnabled;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticFeatureFlagQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticFeatureFlagQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StaticFeatureFlagQuery(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class StaticFeatureFlagQuery : public ::OreUI::QueryBase<::OreUI::StaticFeatureFlagQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>     mEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticFeatureFlagQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StaticFeatureFlagQuery(
        ::OreUI::ClientDependencies const& client,
        ::OreUI::GameDependencies const&   game,
        ::std::string const&               flag
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game, ::std::string const& flag);
    // NOLINTEND
};
#else // @header-generator platform
class StaticFeatureFlagQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
