#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/NetworkWorldData.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/world/lists/ExternalServerWorldError.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace World { class ExternalServerWorldList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/world/lists/ExternalServerWorldError.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct NetworkWorldData; }
namespace World { class ExternalServerWorldList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ExternalServerWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ExternalServerWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>     mExternalServerWorldList;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::NetworkWorldData>> mExternalServerWorlds;
    ::ll::TypedStorage<4, 4, int>                                   mAddedServerId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mExternalListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServerWorldListFacet& operator=(ExternalServerWorldListFacet const&);
    ExternalServerWorldListFacet(ExternalServerWorldListFacet const&);
    ExternalServerWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalServerWorldListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExternalServerWorldListFacet(::World::ExternalServerWorldList&);

    MCNAPI void _onWorldListUpdated();

    MCNAPI void _refresh();

    MCNAPI std::optional<World::ExternalServerWorldError>
           addExternalServerWorld(std::string const&, std::string const&, int);

    MCNAPI std::optional<World::ExternalServerWorldError>
           editExternalServerWorld(int, std::string const&, std::string const&, int);

    MCNAPI int const getAddedServerId() const;

    MCNAPI std::vector<OreUI::NetworkWorldData> const& getExternalServerWorlds() const;

    MCNAPI std::optional<World::ExternalServerWorldError> removeExternalServerWorld(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::ExternalServerWorldList&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ExternalServerWorldListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ExternalServerWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>         mExternalServerWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldData>> mExternalServerWorlds;
    ::ll::TypedStorage<4, 4, int>                                       mAddedServerId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mExternalListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServerWorldListFacet& operator=(ExternalServerWorldListFacet const&);
    ExternalServerWorldListFacet(ExternalServerWorldListFacet const&);
    ExternalServerWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExternalServerWorldListFacet(::World::ExternalServerWorldList& externalServerWorldList);

    MCAPI void _onWorldListUpdated();

    MCAPI void _refresh();

    MCAPI ::std::optional<::World::ExternalServerWorldError>
    addExternalServerWorld(::std::string const& name, ::std::string const& address, int port);

    MCAPI ::std::optional<::World::ExternalServerWorldError>
    editExternalServerWorld(int id, ::std::string const& name, ::std::string const& address, int port);

    MCFOLD int const getAddedServerId() const;

    MCFOLD ::std::vector<::OreUI::NetworkWorldData> const& getExternalServerWorlds() const;

    MCAPI ::std::optional<::World::ExternalServerWorldError> removeExternalServerWorld(int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::ExternalServerWorldList& externalServerWorldList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ExternalServerWorldListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
